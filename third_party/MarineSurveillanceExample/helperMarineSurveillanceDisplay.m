classdef (Hidden) helperMarineSurveillanceDisplay < matlab.System
    % helperMarineSurveillanceDisplay Creates and updates a theaterPlot plot display
    %
    % This is a helper block for example purposes and may be removed or
    % modified in the future.
    
    % Copyright 2019 The MathWorks, Inc.
    
    properties(Dependent, SetAccess=private)
        TheaterPlot
    end
    
    properties(Nontunable)
        IsSea = false
        
        PlotReflectedDirection = true
        
        %XLim Minimum and maximum distance in the x-axis
        XLim = [-100 100]
        
        %YLim Minimum and maximum distance in the y-axis
        YLim = [-100 100]
        
        %ZLim Minimum and maximum distance in the z-axis
        ZLim = [-50 1]
        
        %Movie Filename for movie to be written by writeMovie
        Movie = ''
    end
    
    properties(Nontunable)
        DistanceUnits = 'km'
    end
    properties(Constant, Hidden)
        DistanceUnitsSet = matlab.system.StringSet({'m','km'});
    end
    
    properties (Nontunable)
        %TrackPositionSelector Select x and y from the state vector
        %  For example, if the state is [x;vx;y;vy;z;vz], [x;y;z] = H * state
        %  Where H = [1 0 0 0 0 0; 0 0 1 0 0 0; 0 0 0 0 1 0]
        TrackPositionSelector = [1 0 0 0 0 0; 0 0 1 0 0 0; 0 0 0 0 1 0];
        
        %TrackVelocitySelector Select vx and vy from the state vector
        %  For example, if the state is [x;vx;y;vy;z;vz], [vx;vy;vz] = H * state
        %  Where H = [0 1 0 0 0 0; 0 0 0 1 0 0; 0 0 0 0 0 1]
        TrackVelocitySelector = [0 1 0 0 0 0; 0 0 0 1 0 0; 0 0 0 0 0 1];
    end
    
    properties
        AssignmentMetrics
    end
    
    properties (Logical, Nontunable)
        PlotAssignmentMetrics;
    end
    
    properties (Hidden, Nontunable)
        %GrabFigureFcn  Set to a function handle accepting the current
        %scenario and returning a figure's children or a cell array of
        %children from multiple figures
        GrabFigureFcn
    end
    
    properties (Hidden, Nontunable, Logical)
        %UseGetFrame Set to true to capture frames using getframe(h),
        %otherwise set to false to capture frames using print -RGBImage
        UseGetFrame = true
    end
    
    properties(Access=private)
        pScale = 1
        pScenario
        pFig = NaN
        pTheaterPlot
        pPlatformPlotters
        pTargetPlotter
        pPathPlotter
        pTxBeamPlotters = {}
        pReflIllumPlotters = {}
        pReflDirPlotters = {}
        pRxBeamPlotters = {}
        pDetectionPlotters
        pDetectionPlottersRay
        pMetricsAxes
        pMetricsPlotter
        pTrackPlotter
        pSimulinkUIToolbar
        pBlockName
        pIsLegendOn
        pWriteMovie
        pFrames
        pNumFrames
        pGrabs = {}
        pShowGrabFigs
        pShowLegendGrab
        pSnap
    end
    
    properties(Constant, Access=private)
        %BufferSize
        BufferSize = 500
    end
    
    methods
        function val = get.TheaterPlot(obj)
            val = obj.pTheaterPlot;
        end
        
        function obj = helperMarineSurveillanceDisplay(scenario, varargin)
            % Constructor
            setProperties(obj,numel(varargin),varargin{:});
            
            obj.pScenario = scenario;
            
            % Create a new figure
            % Hide the figure while we build the theater plot
            hfig = createFigure();
            hfig.Visible = 'off';
            
            obj.pIsLegendOn = true;
            obj.pFig = hfig;
            
            if strcmpi(obj.DistanceUnits,'km')
                obj.pScale = 1000;
            end
            
            initTP(obj);
            
            grabLegend(obj);
            
            % Keep figure hidden when publishing, to avoid extra snapshots
            % in the published example. Use the "snapnow" method to take
            % snapshots.
            if ~isPublishing()
                hfig.Visible = 'on';
            end
        end
        
        function sensorView(obj,ID)
            [thisPlat, thisSystem] = findSystem(obj.pScenario.Platforms,'Sensor',ID);
            if ~isempty(thisSystem)
                if isa(thisSystem,'radarSensor') && strcmpi(thisSystem.DetectionMode,'Monostatic')
                    emitterView(obj,thisSystem.EmitterIndex);
                else
                    updateChasePlot(obj,thisPlat,thisSystem);
                end
            end
        end
        
        function emitterView(obj,ID)
            [thisPlat, thisSystem] = findSystem(obj.pScenario.Platforms,'Emitter',ID);
            if ~isempty(thisSystem)
                updateChasePlot(obj,thisPlat,thisSystem);
            end
        end
        
        function flag = isOpen(obj)
            flag = ishghandle(obj.pFig);
        end
        
        function varargout = writeMovie(obj,loopCount)
            % Close the figure if publishing.
            if isPublishing()
                close(obj.pFig);
            end
            if obj.pWriteMovie
                rate = obj.pScenario.UpdateRate;
                
                % Assemble file name w/ extension
                [dname,fname,ext] = fileparts(obj.Movie);
                if isempty(ext)
                    fmt = 'mp4';
                else
                    fmt = ext(2:end);
                end
                fname = fullfile(dname,fname);
                
                if strcmpi(fmt,'gif')
                    % Write animated GIF
                    if nargin<2
                        loopCount = inf;
                    end
                    
                    fname = [fname '.' fmt];
                                        
                    writeAnimatedGIF(fname, obj.pFrames, obj.pNumFrames, rate, loopCount);
                else
                    % Write video
                    if nargin<2
                        loopCount = 'MPEG-4';
                    end
                    profile = loopCount;
                    
                    localWriteVideo(fname, obj.pFrames, obj.pNumFrames, rate, profile);
                end
                
                if nargout
                    varargout = {fname};
                else
                    varargout = {};
                end
            else
                if nargout
                    varargout = {''};
                else
                    varargout = {};
                end
            end
        end
        
        function snapFigure(obj,flag)
            if flag
                fig = obj.pFig;
                
                % Copy figure for snapshot
                state = get(0,'DefaultFigureVisible');
                clnup1 = onCleanup(@()set(0,'DefaultFigureVisible',state));
                
                set(0,'DefaultFigureVisible','off');
                newFig = figure('Position',fig.Position);
                clnup2 = onCleanup(@()close(newFig));
                copyobj(fig.Children,newFig);
                fig = newFig;
                snapshot = copy(fig.Children);
                obj.pGrabs = [obj.pGrabs {{snapshot}}];
            end
        end
        
        function showSnapshot(obj, grabNums, showLegend)
            if ~isempty(obj.pShowGrabFigs) && ishghandle(obj.pShowGrabFigs)
                close(obj.pShowGrabFigs);
            end
            
            if nargin<3
                showLegend = true;
            end
            figs = [];
            
            for m = 1:numel(grabNums)
                thisGrab = obj.pGrabs{grabNums(m)};
                for n = 1:numel(thisGrab)
                    fig = figure;
                    copyobj(thisGrab{n},fig);
                    
                    if ~showLegend
                        legend('off');
                    end
                end
                
                if isempty(figs)
                    figs = fig;
                else
                    figs = [figs fig]; %#ok<AGROW>
                end
            end
            
            obj.pShowGrabFigs = figs;
        end
        
        function grabLegend(obj)
            fig = obj.pFig;
            if ~isempty(fig)
                snapshot = copy(fig.Children);
                obj.pShowLegendGrab = snapshot;
            end
        end
        
        function showLegend(obj)
            if ~isempty(obj.pShowGrabFigs)
                close(obj.pShowGrabFigs);
            end
            
            fig = [];
            
            thisGrab = obj.pShowLegendGrab;
            if ~isempty(thisGrab)
                fig = figure;
                h = copyobj(thisGrab,fig);
                
                % Hide main axes (only show legend)
                iLeg = strcmpi('legend',get(h,'Type'));
                hLeg = h(iLeg);
                hLeg.Location = 'none';
                hAx = h(~iLeg);
                posOrig = hAx.Position;
                pos = posOrig;
                pos(1:2) = 2;
                hAx.Position = pos;
                
                hLeg.Units = 'normalized';
                fig.Units = 'normalized';
                
                % Resize figure to size of legend
                pos = hLeg.Position;
                aspectRatio = pos(4)/pos(3);
                width = 1.1*pos(3);
                fig.Position = [0.1 0.1 width aspectRatio*width];
                hLeg.Position = [0.1 0.1 0.8 aspectRatio*0.8];
                
            end
            
            obj.pShowGrabFigs = fig;
        end
        
        function close(obj)
            if ishghandle(obj.pFig)
                close(obj.pFig);
            end
        end
        
        function snapnow(obj)
            set(obj.pFig,'Visible','on');
        end
    end
    
    methods(Access=protected)
        function setupImpl(obj,varargin)
            % Update in case anything has changed since display was constructed
            initTP(obj);
            
            % Keep figure hidden when publishing, to avoid extra snapshots
            % in the published example. Use the "snapnow" method to take
            % snapshots.
            if ~isPublishing()
                hfig = obj.pFig;
                hfig.Visible = 'on';
            end
            
            % Do not record movie during publishing
            obj.pWriteMovie = ~isempty(obj.Movie) && ~isPublishing();
            obj.pNumFrames = 0;
        end
        
        function stepImpl(obj,varargin)
            [signals, dets, configs, tracks, assignments, truths] = parseStepInputs(obj, varargin{:});
            
            plotPlatforms(obj,truths);
            
            if isa(signals,'fusion.internal.interfaces.BaseEmission')
                plotTXBeams(obj, signals);
                plotReflections(obj, signals);
            end
            
            if isstruct(configs)
                plotRXBeams(obj, configs);
            end
            
            if iscell(dets)
                plotDetections(obj, dets);
            end
            
            % Plot tracks
            if isstruct(tracks) && isfield(tracks,'TrackID') || isa(tracks,'objectTrack') && isprop(tracks(1),'TrackID')
                if ~isempty(tracks) && isempty(obj.pTrackPlotter)
                    trkClr = lines(3); trkClr = trkClr(end,:);
                    obj.pTrackPlotter = trackPlotter(obj.pTheaterPlot,'DisplayName','Tracks',...
                        'ConnectHistory','on','ColorizeHistory','off','MarkerFaceColor',trkClr,'MarkerSize',12);
                end
                plotTracks(obj, tracks);
            end
            
            if ~isempty(assignments)
                plotAssignmentMetrics(obj,assignments);
            end
            
            if obj.pWriteMovie
                % Capture current frame to write out movie later.
                iFrame = obj.pNumFrames+1;
                if obj.UseGetFrame
                    f = getframe(obj.pFig);
                    
                    % Allocate blocks of memory at a time
                    if obj.pNumFrames==0
                        obj.pFrames = repmat(f,1,obj.BufferSize);
                    elseif iFrame>numel(obj.pFrames)
                        obj.pFrames = [obj.pFrames repmat(f,1,obj.BufferSize)];
                    end
                    
                    obj.pFrames(iFrame) = f;
                else
                    im = print('-RGBImage','-opengl','-r0');
                    
                    % Allocate blocks of memory at a time
                    if obj.pNumFrames==0
                        obj.pFrames = zeros([size(im) obj.BufferSize],'like',im);
                    elseif iFrame>size(obj.pFrames,4)
                        obj.pFrames = cat(obj.pFrames,zeros([size(im) obj.BufferSize],'like',im),4);
                    end
                    
                    obj.pFrames(:,:,:,iFrame) = im;
                end
                obj.pNumFrames = iFrame;
            end
        end
        
        function s = saveObjectImpl(obj)
            s = saveObjectImpl@matlab.System(obj);
            s.pShowLegendGrab = obj.pShowLegendGrab;
            s.pSnap = obj.pSnap;
            
            if isLocked(obj)
                s.pFig = obj.pFig;
                s.pTheaterPlot = obj.pTheaterPlot;
                s.pPlatformPlotters     = obj.pPlatformPlotters;
                s.pTargetPlotter        = obj.pTargetPlotter;
                s.pTxBeamPlotters       = obj.pTxBeamPlotters;
                s.pReflIllumPlotters       = obj.pReflIllumPlotters;
                s.pReflDirPlotters       = obj.pReflDirPlotters;
                s.pRxBeamPlotters       = obj.pRxBeamPlotters;
                s.pDetectionPlotters    = obj.pDetectionPlotters;
                s.pDetectionPlottersRay = obj.pDetectionPlottersRay;
                s.pTrackPlotter         = obj.pTrackPlotter;
                s.pIsLegendOn           = obj.pIsLegendOn;
                s.pSimulinkUIToolbar    = saveobj(obj.pSimulinkUIToolbar);
                s.pWriteMovie = obj.pWriteMovie;
                s.pGrabs = obj.pGrabs;
                s.pShowGrabFigs = obj.pShowGrabFigs;
            end
        end
        
        function loadObjectImpl(obj,s,wasLocked)
            obj.pShowLegendGrab = s.pShowLegendGrab;
            obj.pSnap = s.pSnap;
            
            if wasLocked
                obj.pFig = s.pFig;
                obj.pTheaterPlot = s.pTheaterPlot;
                obj.pPlatformPlotters      = s.pPlatformPlotters;
                obj.pTargetPlotter         = s.pTargetPlotter;
                obj.pTxBeamPlotters        = s.pTxBeamPlotters;
                obj.pReflIllumPlotters        = s.pReflIllumPlotters;
                obj.pReflDirPlotters        = s.pReflDirPlotters;
                obj.pRxBeamPlotters        = s.pRxBeamPlotters;
                obj.pDetectionPlotters     = s.pDetectionPlotters;
                obj.pDetectionPlottersRay  = s.pDetectionPlottersRay;
                obj.pTrackPlotter          = s.pTrackPlotter;
                obj.pIsLegendOn            = s.pIsLegendOn;
                obj.pSimulinkUIToolbar     = loadobj(s.pSimulinkUIToolbar);
                obj.pWriteMovie = s.pWriteMovie;
                obj.pGrabs = s.pGrabs;
                obj.pShowGrabFigs = s.pShowGrabFigs;
            end
            loadObjectImpl@matlab.System(obj,s,wasLocked);
        end
    end
    
    methods (Access = private)
        function updateChasePlot(obj,plat,system)
            hAxes = obj.TheaterPlot.Parent;
            setupChaseGraphics(hAxes);
            updateChaseCamera(hAxes,plat,system);
        end
        
        function initTP(obj)
            wasFigureClosed = (isempty(obj.pFig) || ~ishghandle(obj.pFig));
            if wasFigureClosed
                % Create a new figure
                hfig = createFigure();
                
                % Hide the figure while we build the theater plot
                set(hfig,'Visible','off')
                obj.pIsLegendOn = true;
                
                obj.pFig = hfig;
            end
            
            % Create theaterPlot before the toolbar because clf clears toolbars
            isTPNeeded = (isempty(obj.pTheaterPlot) || wasFigureClosed);
            if isTPNeeded
                clf(obj.pFig);
                hax = axes(obj.pFig);
                grid(hax,'on')
                set(hax,'YDir','reverse','ZDir','reverse');
                view(hax,-90,90);
                
                % Add z=0 plane
                if obj.IsSea
                    thisClr = [0 0.3 0.4];
                    thisStr = 'Sea';
                else
                    thisClr = [0.33 0.29 0.04];
                    thisStr = 'Ground';
                end
                xx = 2*max(abs(obj.XLim))*[-1 1];
                yy = 2*max(abs(obj.YLim))*[-1 1];
                h = patch(hax, xx([1 end end 1 1]),yy([1 1 end end 1]),zeros(1,5),'k');
                h.FaceColor = thisClr;
                h.FaceAlpha = 0.5;
                
                tp = theaterPlot('Parent',hax,'XLimits',obj.XLim,'YLimits',obj.YLim,'ZLimits',obj.ZLim);
                obj.pTheaterPlot = tp;
                h = legend(hax);
                h.String{1} = thisStr;
                
                % Find the platforms defined in this scenario
                iPlats = findPlatforms(obj.pScenario);
                maxNumPlats = numel(iPlats);
                plats = obj.pScenario.Platforms;
                maxNumTgts = numel(plats);
                clrs = getColors(maxNumTgts);
                
                wasHeld = ishold(hax);
                if ~wasHeld
                    hold(hax,'on');
                end
                for m = 1:maxNumPlats
                    idx = iPlats(m);
                    thisPlat = plats{idx};
                    thisClr = clrs(m,:);
                    
                    % Create plotter for this platform's ground truth
                    [str,type] = platformName(thisPlat);
                    pltr = platformPlotter(tp,type,str,'Marker','d','MarkerFaceColor',thisClr);
                    obj.pPlatformPlotters = [obj.pPlatformPlotters pltr];
                    
                    % Create plotter for detections generated by this platform
                    [str,type] = detectionsName(thisPlat);
                    pltr = trackPlotter(tp,type,str,'Marker','o','MarkerSize',4,'MarkerFaceColor',thisClr);
                    obj.pDetectionPlotters = [obj.pDetectionPlotters pltr];
                    
                    pltr = plot3(hax,NaN,NaN,NaN,'-','Color',thisClr,'Marker','none','LineWidth',2);
                    obj.pDetectionPlottersRay = [obj.pDetectionPlottersRay pltr];
                    
                    % Create plotter for beams generated by this platform
                    [beamPlotterTx, beamPlotterRx] = initBeamPlotter(hax,thisClr);
                    obj.pTxBeamPlotters{m} = beamPlotterTx;
                    obj.pRxBeamPlotters{m} = beamPlotterRx;
                end
                
                % Create reflected illuminated patch plotters
                faceAlpha = 1;
                edgeColor = [1 1 0];
                edgeWidth = 3;
                for iPlat = 1:maxNumPlats
                    thisPlatClr = clrs(iPlat,:);
                    for iTgt = 1:maxNumTgts
                        % Add reflected illuminated patch plotter
                        h = fill3(hax,NaN,NaN,NaN,'b');
                        h.FaceColor = thisPlatClr;
                        h.FaceAlpha = faceAlpha;
                        h.LineStyle = '-';
                        h.EdgeColor = edgeColor;
                        h.LineWidth = edgeWidth;
                        obj.pReflIllumPlotters{iPlat,iTgt} = h;
                    end
                end
                
                % Create reflected direction plotters
                for iPlat = 1:maxNumTgts
                    for iTgt = 1:maxNumTgts
                        if iPlat==iTgt
                            continue % skip
                        end
                        
                        % Add reflected direction plotters
                        h = quiver3(NaN,NaN,NaN,NaN,NaN,NaN);
                        h.LineStyle = '-';
                        h.Color = [0 0 0];
                        h.LineWidth = 2;
                        obj.pReflDirPlotters{iPlat,iTgt} = h;
                    end
                end
                
                if ~wasHeld
                    hold(hax,'off');
                end
                
                % Add target plotter
                tgtClr = lines(4); tgtClr = tgtClr(end,:);
                obj.pTargetPlotter = platformPlotter(tp,'DisplayName','Ships','Marker','s','MarkerFaceColor',tgtClr);
                
                % Plot platform paths
                obj.pPathPlotter = trajectoryPlotter(tp,'LineStyle','-','Tag','All paths');
                
                ts = obj.pScenario;
                updateRate = ts.UpdateRate;
                dur = sceneDuration(ts);
                if isfinite(dur)
                    numSamps = 1000;
                    ts.UpdateRate = numSamps/dur;
                else
                    ts.UpdateRate = 100;
                end
                r = record(ts);
                restart(ts);
                ts.UpdateRate = updateRate;
                
                numSamps = numel(r);
                numPlats = numel(r(1).Poses);
                pos = repmat({zeros(numSamps,3)},numPlats,1);
                for m = 1:numPlats
                    thisPos = pos{m};
                    for n = 1:numSamps
                        thisPos(n,:) = r(n).Poses(m).Position;
                    end
                    pos{m} = thisPos/obj.pScale;
                end
                plotTrajectory(obj.pPathPlotter,pos);
                
                wasHeld = ishold(hax);
                hold(hax,'on');
                xlabel(hax,sprintf('X (%s)',obj.DistanceUnits));
                ylabel(hax,sprintf('Y (%s)',obj.DistanceUnits));
                zlabel(hax,sprintf('Z (%s)',obj.DistanceUnits));
                if ~wasHeld
                    hold(hax,'off');
                end
                
                l = legend(hax,'AutoUpdate','off');
                
                if obj.PlotAssignmentMetrics
                    hax.Position = [0.055 0.1 0.5 0.8];
                    l.Location = 'NorthEast';
                    if ~wasHeld
                        hold(hax,'off');
                    end
                    
                    hmtrxax = axes(obj.pFig);
                    maxTime = ceil(ts.StopTime);
                    % Add rows for each platformID
                    for pID = 1:numPlats
                        plot(hmtrxax,[0 maxTime],(pID-0.5)*[1 1],'k:');
                        plot(hmtrxax,[0 maxTime],(pID+0.5)*[1 1],'k:');
                    end
                    hmtrxax.YLimMode = 'Manual';
                    hmtrxax.YLim = [0.5 numPlats+0.5];
                    ylabel(hmtrxax,'Platform ID');
                    xlabel(hmtrxax,'Simulation time (s)');
                    title(hmtrxax,'Platform to Track Assignment');
                    
                    obj.pMetricsAxes = hmtrxax;
                    obj.pMetricsAxes.XGrid = 'on';
                    obj.pMetricsAxes.YGrid = 'on';
                    obj.pMetricsAxes.Position = [0.65 0.1 0.3 0.8];
                    
                    xlim(hmtrxax,[0 maxTime]);
                    hold(obj.pMetricsAxes,'on');
                    
                    if ~wasHeld
                        hold(hax,'on');
                    end
                end
            end
        end
        
        function [signals,dets,configs,tracks,assignments,truths] = parseStepInputs(~,varargin)
            
            hasSignals = false;
            hasDets = false;
            hasConfigs = false;
            hasTracks = false;
            hasAssignments = false;
            hasTruths = false;
            for m = 1:numel(varargin)
                thisInput = varargin{m};
                if iscell(thisInput)
                    if (isempty(thisInput) || isa(thisInput{1},'objectDetection'))
                        hasDets = true;
                        dets = thisInput;
                    elseif isa(thisInput{1},'fusion.internal.interfaces.BaseEmission')
                        hasSignals = true;
                        signals = [thisInput{:}];
                    end
                else
                    if isa(thisInput,'fusion.internal.interfaces.BaseEmission')
                        hasSignals = true;
                        signals = thisInput;
                    elseif isfield(thisInput,'MeasurementParameters')
                        hasConfigs = true;
                        configs = thisInput;
                    elseif isa(thisInput,'timetable')
                        hasAssignments = true;
                        assignments = thisInput;
                    elseif isfield(thisInput,'PlatformID')
                        hasTruths = true;
                        truths = thisInput;
                    else
                        hasTracks = true;
                        if isempty(thisInput) || iscell(thisInput) && isempty(thisInput{1})
                            tracks = struct;
                        else
                            tracks = thisInput;
                        end
                    end
                end
            end
            
            if ~hasSignals
                signals = [];
            end
            if ~hasDets
                dets = [];
            end
            if ~hasConfigs
                configs = [];
            end
            if ~hasTracks
                tracks = [];
            end
            if ~hasAssignments
                assignments = [];
            end
            if ~hasTruths
                truths = [];
            end
        end
        
        function plotPlatforms(obj,truths)
            if isempty(truths)
                % Update positions of platforms and targets
                poses = platformPoses(obj.pScenario);
            else
                poses = truths;
            end
            ids = cellfun(@(p)p.PlatformID,obj.pScenario.Platforms)';
            allDims = cellfun(@(p)p.Dimensions,obj.pScenario.Platforms)';
            
            % Match dimensions to the correct platforms
            dims = repmat(allDims(1),numel(poses),1);
            for m = 1:numel(poses)
                iFnd = find(poses(m).PlatformID==ids,1);
                dims(m) = allDims(iFnd);
            end
            
            % Scale dimensions
            flds = fieldnames(dims);
            for iFld = 1:numel(flds)
                thisFld = flds{iFld};
                for m = 1:numel(dims)
                    dims(m).(thisFld) = dims(m).(thisFld)/obj.pScale;
                end
            end
            
            pos = cell2mat(arrayfun(@(p)p.Position,poses,'UniformOutput',false));
            vel = cell2mat(arrayfun(@(p)p.Velocity,poses,'UniformOutput',false));
            orient = arrayfun(@(p)p.Orientation,poses);
            
            [iPlats, iTgts] = findPlatforms(obj.pScenario);
            for m = 1:numel(iPlats)
                idx = iPlats(m);
                plotPlatform(obj.pPlatformPlotters(m),pos(idx,:)/obj.pScale,vel(idx,:)/obj.pScale,dims(idx),orient(idx));
            end
            
            plotPlatform(obj.pTargetPlotter,pos(iTgts,:)/obj.pScale,vel(iTgts,:)/obj.pScale,dims(iTgts),orient(iTgts));
        end
        
        function clearReflections(obj)
            for m = 1:numel(obj.pReflIllumPlotters)
                h = obj.pReflIllumPlotters{m};
                if ishghandle(h)
                    set(h,'XData',NaN,'YData',NaN,'ZData',NaN);
                end
            end
            
            for m = 1:numel(obj.pReflDirPlotters)
                h = obj.pReflDirPlotters{m};
                if ishghandle(h)
                    set(h,'XData',NaN,'YData',NaN,'ZData',NaN, ...
                        'UData',NaN,'VData',NaN,'WData',NaN);
                end
            end
        end
        
        function plotReflections(obj, signals)
            
            % Clear all reflections
            clearReflections(obj);
            
            % Only plot reflected signals
            isTx = isTXSignals(signals);
            reflSignals = signals(~isTx);
            
            for m = 1:numel(reflSignals)
                thisSig = reflSignals(m);
                txSig = findEmittingSignal(thisSig,signals);
                txPlatID = txSig.PlatformID;
                [rxPlat,rg] = findReceivingPlat(obj,thisSig);
                rxPlatID = rxPlat.PlatformID;
                reflPlatID = thisSig.PlatformID;
                
                % Plot illuminated patches
                h = obj.pReflIllumPlotters{txPlatID,reflPlatID};
                
                theseFaces = thisSig.IlluminatedSurface/obj.pScale;
                iPltr = 1;
                for iFace = 1:size(theseFaces,3)
                    thisFace = theseFaces(:,:,iFace);
                    iGd = ~isnan(thisFace(1,:));
                    
                    if ~any(iGd)
                        continue
                    end
                    
                    if iPltr>numel(h)
                        % Add a new plotter
                        thisPlotter = copyobj(thisPlotter,thisPlotter.Parent);
                    else
                        % Reuse existing plotters
                        thisPlotter = h(iPltr);
                        
                        % Was this illuminated face already drawn by
                        % another signal?
                        if ~any(isnan(thisPlotter.XData))
                            break % yes, skip to the next signal
                        end
                    end
                    
                    thisFace = thisFace(:,iGd)';
                    
                    set(thisPlotter,'XData',thisFace(:,1),'YData',thisFace(:,2),'ZData',thisFace(:,3));
                    h(iPltr) = thisPlotter;
                    iPltr = iPltr+1;
                end
                obj.pReflIllumPlotters{txPlatID,reflPlatID} = h;
                
                % Plot reflected direction
                if obj.PlotReflectedDirection
                    txDir = thisSig.Orientation;
                    if isa(txDir,'quaternion')
                        txDir = rotmat(txDir,'frame');
                    end
                    txDir = rg*txDir(1,:);
                    txPos = thisSig.OriginPosition;
                    txDir = txDir/obj.pScale;
                    txPos = txPos/obj.pScale;
                    h = obj.pReflDirPlotters{reflPlatID,rxPlatID};
                    set(h,'XData',txPos(1),'YData',txPos(2),'ZData',txPos(3), ...
                        'UData',txDir(1),'VData',txDir(2),'WData',txDir(3));
                end
            end
        end
        
        function [rxPlat,rg] = findReceivingPlat(obj,thisSig)
            poses = platformPoses(obj.pScenario);
            posRx = reshape([poses.Position],3,[]);
            rxDir = posRx-thisSig.OriginPosition(:);
            rgs = sqrt(sum(abs(rxDir).^2,1));
            rxDir = rxDir./rgs;
            orient = thisSig.Orientation;
            if isa(orient,'quaternion')
                orient = rotmat(orient,'frame');
            end
            dp = orient(1,:)*rxDir;
            [~,iPlat] = min(abs(dp-1));
            rxPlat = obj.pScenario.Platforms{iPlat};
            rg = rgs(iPlat);
        end
        
        function plotTXBeams(obj, signals)
            
            % Only plot emitted signals, not reflections
            isTx = isTXSignals(signals);
            txSignals = signals(isTx);
            
            beamPlotters = obj.pTxBeamPlotters;
            iPlats = findPlatforms(obj.pScenario);
            iPlatsSigs = findEmittingPlatform(signals);
            for iiPlat = 1:numel(iPlats)
                iPlat = iPlats(iiPlat);
                
                % Find the signals that use this plat
                iSigs = find(iPlatsSigs == iPlat);
                
                beamList = {};
                for iiSigs = 1:numel(iSigs)
                    iSig = iSigs(iiSigs);
                    thisSig = txSignals(iSig);
                    
                    if isempty(beamList)
                        beamList = getBeam(thisSig);
                    else
                        % Append beams from additional sensors mounted on
                        % this platform to the beam list
                        thisBeam = getBeam(thisSig);
                        for iFace = 1:numel(beamList)
                            beamList{iFace} = [beamList{iFace};NaN(1,3);thisBeam{iFace}]; %#ok<AGROW>
                        end
                    end
                end
                
                % Find the beam plotter for this platform
                platID = obj.pScenario.Platforms{iPlat}.PlatformID;
                idx = iPlats==platID;
                beamPlotter = beamPlotters{idx};
                
                % Plot the beam
                for iFace = 1:numel(beamList)
                    thisPlotter = beamPlotter{iFace};
                    thisFace = beamList{iFace}/obj.pScale;
                    set(thisPlotter,'XData',thisFace(:,1),'YData',thisFace(:,2),'ZData',thisFace(:,3));
                end
            end
        end
        
        function plotRXBeams(obj, configs)
            
            beamPlotters = obj.pRxBeamPlotters;
            iPlats = findPlatforms(obj.pScenario);
            iPlatConfigs = findDetectingPlatform(obj.pScenario, configs);
            for iiPlat = 1:numel(iPlats)
                iPlat = iPlats(iiPlat);
                
                % Find the configs that use this plat
                iConfigs = find(iPlatConfigs == iPlat);
                
                beamList = {};
                for iiConfig = 1:numel(iConfigs)
                    iConfig = iConfigs(iiConfig);
                    thisConfig = configs(iConfig);
                    
                    if isempty(beamList)
                        beamList = getBeam(thisConfig);
                    else
                        % Append beams from additional sensors mounted on
                        % this platform to the beam list
                        thisBeam = getBeam(thisConfig);
                        for iFace = 1:numel(beamList)
                            beamList{iFace} = [beamList{iFace};thisBeam{iFace}]; %#ok<AGROW>
                        end
                    end
                end
                
                % Find the beam plotter for this platform
                platID = obj.pScenario.Platforms{iPlat}.PlatformID;
                idx = iPlats==platID;
                beamPlotter = beamPlotters{idx};
                
                % Plot the beam
                for iFace = 1:numel(beamList)
                    thisPlotter = beamPlotter{iFace};
                    thisFace = beamList{iFace}/obj.pScale;
                    set(thisPlotter,'XData',thisFace(:,1),'YData',thisFace(:,2),'ZData',thisFace(:,3));
                end
            end
        end
        
        function plotDetections(obj, dets)
            
            isAngleOnly = findAngleOnly(dets);
            
            % Transform detections to scenario frame
            theseDets = dets(~isAngleOnly);
            pos = zeros(3,0);
            cov = zeros(3,3,0);
            for iDet = 1:numel(theseDets)
                thisDet = theseDets{iDet};
                [state, stateCov] = transformDet(obj,thisDet);
                thisPos = state(1:3,:);
                thisCov = stateCov(1:3,1:3,:);
                pos = [pos, thisPos]; %#ok<AGROW>
                cov = cat(3,cov,thisCov);
            end
            pos = pos/obj.pScale;
            cov = cov/obj.pScale^2;
            
            iPlats = findDetectingPlatform(obj.pScenario, theseDets);
            uPlats = unique(iPlats);
            for m = 1:numel(uPlats)
                idx = uPlats(m);
                thisPltr = obj.pDetectionPlotters(idx);
                iFnd = iPlats == idx;
%                 plotTrack(thisPltr, pos(:,iFnd)', cov(:,:,iFnd));
                plotTrack(thisPltr, pos(:,iFnd)');
            end
            
            % Plot angle only detections
            theseDets = dets(isAngleOnly);
            iPlats = findDetectingPlatform(obj.pScenario, theseDets);
            uPlats = unique(iPlats);
            for m = 1:numel(uPlats)
                idx = uPlats(m);
                thisPltr = obj.pDetectionPlottersRay(idx);
                
                iDets = find(iPlats == idx);
                pos = zeros(3,0);
                for iDet = 1:numel(iDets)
                    thisDet = theseDets{iDets(iDet)};
                    state = transformDet(obj,thisDet);
                    thisPos = state(1:3,:);
                    pos = [pos, NaN(3,1), thisPos]; %#ok<AGROW>
                end
                pos = pos/obj.pScale;
                
                set(thisPltr,...
                    'XData',pos(1,:),...
                    'YData',pos(2,:),...
                    'ZData',pos(3,:));
            end
        end
        
        function plotTracks(obj, tracks)
            
            trPos = getTrackPositions(tracks, obj.TrackPositionSelector);
            trVel = getTrackVelocities(tracks, obj.TrackVelocitySelector);
            tIDs = double([tracks.TrackID]);
            
            trCov = cat(3,tracks.Extent);
            plotTrack(obj.pTrackPlotter, trPos/obj.pScale, trVel/obj.pScale, trCov/obj.pScale^2,string(tIDs));
            obj.pTrackPlotter.HistoryLine.Color = obj.pTrackPlotter.MarkerFaceColor;
            hlbls = findobj(obj.pTheaterPlot.Parent,'Tag','tpTrackLabels_Tracks');
            set(hlbls,'FontSize',8,'FontWeight','bold','HorizontalAlignment','center','VerticalAlignment','middle');
            
            hcovs = findobj('-regexp','Tag','tpCovariancePatch');
            iKeep = arrayfun(@(h)isequal(h.Parent,obj.pTheaterPlot.Parent),hcovs);
            hcovs = hcovs(iKeep);
            set(hcovs,'FaceAlpha',0.5,'LineStyle','none');
        end
        
        function [state, cov] = transformDet(obj,det)
            
            maxRayRange = 1e4;
            measParam = det.MeasurementParameters(1);
            
            has3DCov = nargout>1 && measParam.HasRange;
            cov = [];
            
            % Compute initial state from measurement
            if strcmpi(measParam.Frame,'Spherical')
                angs = zeros(2,1);
                numAngs = 1+measParam.HasElevation;
                angs(1:numAngs) = det.Measurement(1:numAngs);
                angCov = [300 300];
                angCov(1) = det.MeasurementNoise(1,1);
                if measParam.HasElevation
                    angCov(2) = det.MeasurementNoise(2,2);
                end
                
                if ~measParam.HasRange
                    rg = [0 maxRayRange*obj.pScale];
                else
                    idx = numAngs+1;
                    rg = det.Measurement(idx);
                    rgCov = det.MeasurementNoise(idx,idx);
                    if measParam.HasVelocity
                        idx = idx+1;
                        rr = det.Measurement(idx);
                        rrCov = det.MeasurementNoise(idx,idx);
                    end
                    
                    if has3DCov
                        azElRgCov = diag([angCov rgCov]);
                    end
                end
                angs = deg2rad(angs);
                [x,y,z] = sph2cart(angs(1),angs(2),rg);
                pos = [x(:) y(:) z(:)]';
                if measParam.HasVelocity
                    vRg = pos(:,end);
                    uRg = vRg/norm(vRg);
                    vel = repmat(rr*uRg,1,size(pos,2));
                    state = [pos;vel];
                    if has3DCov
                        covPosVel = blkdiag(azElRgCov, rrCov);
                        [posCov,velCov] = matlabshared.tracking.internal.fusion.sph2cartcov(covPosVel, angs(1), angs(2), rg);
                        cov = blkdiag(posCov,velCov);
                    end
                else
                    state = pos;
                    if has3DCov
                        cov = matlabshared.tracking.internal.fusion.sph2cartcov(azElRgCov, angs(1), angs(2), rg);
                    end
                end
            else
                state = det.Measurement(:);
                if has3DCov
                    cov = det.MeasurementNoise;
                end
            end
            
            % Rotate into top-level frame
            for m = 1:numel(det.MeasurementParameters)
                measParam = det.MeasurementParameters(m);
                
                T = measParam.OriginPosition(:);
                orient = measParam.Orientation;
                if ~measParam.IsParentToChild
                    orient = orient';
                end
                
                if measParam.HasVelocity
                    T = [T;measParam.OriginPosition(:)]; %#ok<AGROW>
                    orient = blkdiag(orient,orient);
                end
                
                state = bsxfun(@plus,orient'*state,T);
                if has3DCov
                    cov = orient'*cov*orient;
                end
            end
        end
        
        function plotAssignmentMetrics(obj,assignments)
            
            hmtrxax = obj.pMetricsAxes;
            
            alltimes = assignments.Time;
            % Extract assignments from table
            assignments = double(table2array(assignments(:,{'AssignedTruthID', 'TrackID'})));
            
            % Find the platform IDs
            pids = assignments(:,1);
            pids = unique(pids(pids>0));
            numPlat = numel(pids);
            
            % Find max number of tracks assigned to a single platform
            numAssigned = zeros(numPlat,1);
            for m = 1:numPlat
                iFnd = assignments(:,1)==pids(m);
                numAssigned(m) = numel(unique(assignments(iFnd,2)));
            end
            maxAssigned = max(numAssigned(:));
            
            % Clean axis
            if ~isempty(obj.pMetricsPlotter)
                delete(obj.pMetricsPlotter);
                obj.pMetricsPlotter = [];
            end
            
            % Match track colors with theater display
            trkPlotter = obj.TheaterPlot.Plotters(end);
            plottedTrkIDs = trkPlotter.HistoryLabels;
            numPlottedTrks = numel(plottedTrkIDs);
            plottedTrkColors = zeros(numPlottedTrks,3);
            for i = 1:numPlottedTrks
                plottedTrkColors(i,:) = trkPlotter.HistoryLine(i).Color;
            end
            
            span = 0.3;
            for m = 1:numPlat
                pID = pids(m);
                
                iFnd = assignments(:,1)==pID;
                
                trkIDs = assignments(iFnd,2);
                times = seconds(alltimes(iFnd));
                
                uTrks = unique(trkIDs);
                numTrks = numel(uTrks);
                for iTrk = numTrks:-1:1
                    % Find color
                    thisClr = plottedTrkColors(uTrks(iTrk)==plottedTrkIDs,:);
                    isFnd = trkIDs==uTrks(iTrk);
                    tt = times(isFnd);
                    yy = (pID+span*((iTrk-1)/maxAssigned));
                    if isscalar(tt)
                        h = plot(hmtrxax,tt,yy,'s','MarkerSize',5,'Color',thisClr,'MarkerFaceColor',thisClr);
                    else
                        h = plot(hmtrxax,tt,yy*ones(size(tt)),'-','LineWidth',3,'Color',thisClr);
                    end
                    htxt = text(hmtrxax, min(tt),yy,sprintf('T%02i',uTrks(iTrk)),'VerticalAlignment','bottom');
                    obj.pMetricsPlotter = [obj.pMetricsPlotter h htxt];
                end
            end
            
        end
    end
end

function isTx = isTXSignals(signals)
% Returns only the direct path signals, which are the transmitted signals
% (not the reflections)
isTx = isDirectPath(signals);
end

function [beamPlotterTx, beamPlotterRx] = initBeamPlotter(hax,thisClr)

faceAlpha = 0;

% Set receive beams to complementary color of transmit beams
thisComp = getComplementaryColors(thisClr);

wasHeld = ishold(hax);
if ~wasHeld
    hold(hax,'on');
end

edgeWidth = 2;
beamPlotterTx = cell(1,4);
beamPlotterRx = cell(1,4);
for m = 1:numel(beamPlotterTx)
    h = fill3(hax,NaN,NaN,NaN,'b');
    h.FaceColor = thisComp;
    h.FaceAlpha = faceAlpha;
    h.LineStyle = '-';
    h.LineWidth = edgeWidth;
    h.EdgeColor = thisComp;
    beamPlotterTx{m} = h;
    
    h = fill3(hax,NaN,NaN,NaN,'b');
    h.FaceColor = thisClr;
    h.FaceAlpha = faceAlpha;
    h.LineStyle = '-';
    h.LineWidth = edgeWidth;
    h.EdgeColor = thisClr;
    beamPlotterRx{m} = h;
end

if ~wasHeld
    hold(hax,'off');
end
end

function isAngleOnly = findAngleOnly(dets)
numDets = numel(dets);
isAngleOnly = false(numDets,1);
for iDet = 1:numDets
    thisDet = dets{iDet};
    measParam = thisDet.MeasurementParameters(1);
    isAngleOnly(iDet) = ~measParam.HasRange;
end
end

function beam = getBeam(thisSig)
maxRange = 10e4*sqrt(2);

fov = thisSig.FieldOfView;
azSpan = fov(1);
elSpan = fov(2);

if isfield(thisSig,'ElectronicAngle')
    eScan = thisSig.ElectronicAngle;
else
    eScan = zeros(2,1);
end
az0 = eScan(1);
el0 = eScan(2);

% Create beam in sensor frame
angs = linspace(-1,1);

% Horizontal faces
[x,y,z] = sph2cart(deg2rad(azSpan/2*angs+az0),deg2rad(elSpan/2+el0)*ones(1,numel(angs)),maxRange*ones(1,numel(angs)));
horz1 = [x(:) y(:) z(:)];
horz1 = [zeros(1,3);horz1;zeros(1,3)];
% horz1 = horz1([1:end 1],:);

[x,y,z] = sph2cart(deg2rad(azSpan/2*angs+az0),deg2rad(-elSpan/2+el0)*ones(1,numel(angs)),maxRange*ones(1,numel(angs)));
horz2 = [x(:) y(:) z(:)];
horz2 = [zeros(1,3);horz2;zeros(1,3)];
% horz2 = horz2([1:end 1],:);

% Vertical faces
[x,y,z] = sph2cart(deg2rad(azSpan/2+az0)*ones(1,numel(angs)),deg2rad(elSpan/2*angs+el0),maxRange*ones(1,numel(angs)));
vert1 = [x(:) y(:) z(:)];
vert1 = [zeros(1,3);vert1;zeros(1,3)];
% vert1 = vert1([1:end 1],:);

[x,y,z] = sph2cart(deg2rad(-azSpan/2+az0)*ones(1,numel(angs)),deg2rad(elSpan/2*angs+el0),maxRange*ones(1,numel(angs)));
vert2 = [x(:) y(:) z(:)];
vert2 = [zeros(1,3);vert2;zeros(1,3)];
% vert2 = vert2([1:end 1],:);

% Beam face list
beam = {horz1 vert1 horz2 vert2};

% Rotate beam to scenario frame
if isfield(thisSig,'MeasurementParameters')
    measParams = thisSig.MeasurementParameters;
else
    measParams = fusion.internal.interfaces.DataStructures.measurementParametersStruct();
    measParams.OriginPosition(:) = thisSig.OriginPosition;
    measParams.Orientation(:) = toRotmat(thisSig.Orientation);
    measParams.HasAzimuth = true;
    measParams.HasElevation = true;
end

numParams = numel(measParams);
for m = 1:numParams
    thisParam = measParams(m);
    orient = thisParam.Orientation;
    if ~thisParam.IsParentToChild
        orient = orient';
    end
    T = thisParam.OriginPosition(:);
    beam = cellfun(@(x)bsxfun(@plus,orient'*x',T)',beam,'UniformOutput',false);
end
end

function [orientOut, wasQuat] = toRotmat(orientIn)
wasQuat = isa(orientIn, 'quaternion');
if wasQuat
    orientOut = rotmat(orientIn, 'frame');
else
    orientOut = orientIn;
end
end

function isDP = isDirectPath(signals)
isDP = [signals.PropagationRange]==0;
end

function [iPlats, iTgts] = findPlatforms(scene)
% Returns the indices of the platforms in scene.Platforms that have sensors
% and or emitters as iPlats. Also returns the indices of the platforms
% which do not have either sensors or emitters as iTgts.
numPlats = numel(scene.Platforms);
isPlat = false(numPlats,1);
for m = 1:numPlats
    thisPlat = scene.Platforms{m};
    isPlat(m) = ~isempty(thisPlat.Sensors) || ~isempty(thisPlat.Emitters);
end
iPlats = find(isPlat);
iTgts = find(~isPlat);
end

function iPlats = findEmittingPlatform(signals)
% Returns the index of each platform from which each signal was
% emitted.
% signals is an N-element cell array of emission objects
% iPlats is an N-by-1 vector of platform indices into scene.Platform

numSigs = numel(signals);
iPlats = zeros(numSigs,1);

for m = 1:numSigs
    thisSig = localGetVal(signals,m);
    iPlats(m) = thisSig.PlatformID;
end
end

function iPlats = findDetectingPlatform(scene, dets)
% Returns the index of each platform from which each detection was
% generated.
% dets is an N-element cell array of objectDetection objects
% iPlats is an N-by-1 vector of platform indices into scene.Platform

% Extract sensor indices from the detection of configuration inputs
if isstruct(dets)
    numConfigs = numel(dets);
    sensorIDs = zeros(1,numConfigs);
    for m = 1:numConfigs
        thisConfig = dets(m);
        sensorIDs(m) = thisConfig.SensorIndex;
    end
else
    sensorIDs = cellfun(@(d)d.SensorIndex,dets);
end

numDets = numel(sensorIDs);
iPlats = zeros(numDets,1);
uSensorIDs = unique(sensorIDs);
iSensorPlats = findPlatforms(scene);
for m = 1:numel(uSensorIDs)
    thisID = uSensorIDs(m);
    
    usePlatIdx = -1;
    for k = 1:numel(iSensorPlats)
        idxPlat = iSensorPlats(k);
        thisPlat = scene.Platforms{idxPlat};
        foundSensor = false;
        for j = 1:numel(thisPlat.Sensors)
            thisSensor = thisPlat.Sensors{j};
            if thisSensor.SensorIndex == thisID
                foundSensor = true;
                break
            end
        end
        if foundSensor
            usePlatIdx = idxPlat;
            break
        end
    end
    
    if usePlatIdx>0
        iFnd = sensorIDs == thisID;
        iPlats(iFnd) = usePlatIdx;
    end
end
end

function [str,type] = platformName(~)
str = 'Tower';
type = 'DisplayName';
end

function [str,type] = detectionsName(~)
str = 'Radar detections';
type = 'DisplayName';
end

function val = localGetVal(thing, idx)
% Indexing that supports either cell or non-cell arrays
if iscell(thing)
    val = thing{idx};
else
    val = thing(idx);
end
end

function flag = isPublishing()
% Returns true when MATLAB is publishing
flag = ~isempty(snapnow('get'));
end

function writeAnimatedGIF(fname, frames, numFrames, rate, loopCount)
dt = 1/rate;
if isstruct(frames)
    % pFrames is set to getframe(h) frames
    for m = 1:numFrames
        im = frame2im(frames(m));
        [A,map] = rgb2ind(im,256);
        if m == 1
            imwrite(A,map,fname,'gif','LoopCount',loopCount,'DelayTime',dt);
        else
            imwrite(A,map,fname,'gif','WriteMode','append','DelayTime',dt);
        end
    end
else
    % pFrames is set to RGB images such as are returned
    % by print('-RGBImage','-opengl','-r0')
    for m = 1:numFrames
        im = frames(:,:,:,m);
        [A,map] = rgb2ind(im,256);
        if m == 1
            imwrite(A,map,fname,'gif','LoopCount',loopCount,'DelayTime',dt);
        else
            imwrite(A,map,fname,'gif','WriteMode','append','DelayTime',dt);
        end
    end
end
end

function localWriteVideo(fname, frames, numFrames, rate, profile)
vid = VideoWriter(fname,profile);
vid.FrameRate = rate;
open(vid);
if isstruct(frames)
    % pFrames is set to getframe(h) frames
    for m = 1:numFrames
        writeVideo(vid,frames(m));
    end
else
    % pFrames is set to RGB images such as are returned
    % by print('-RGBImage','-opengl','-r0')
    writeVideo(vid,frames(:,:,:,1:numFrames));
end
close(vid);
end

function [clrs,comps] = getColors(nClrs)
% Compute a set of unique colors whose complementary colors will also be
% unique colors
hsv = ones(nClrs,3);
hsv(:,3) = 1;
tmp = linspace(0,0.45,nClrs+1);
hsv(:,1) = tmp(1:nClrs);
clrs = hsv2rgb(hsv);

if nargout>1
    comps = getComplementaryColors(clrs);
end
end

function comps = getComplementaryColors(clrs)
% Compute complementary colors from set of colors
hsv = rgb2hsv(clrs);
hsv(:,1) = mod(hsv(:,1)+0.5,1);
comps = hsv2rgb(hsv);
end

function txSig = findEmittingSignal(thisSig,signals)
isTx = isTXSignals(signals);
txSignals = signals(isTx);
numTx = numel(txSignals);

txPos = zeros(3,numTx);
txVel = zeros(3,numTx);

for m = 1:numTx
    txPos(:,m) = txSignals(m).OriginPosition;
    txVel(:,m) = txSignals(m).OriginVelocity;
end

txDir = thisSig.OriginPosition(:)-txPos;
relVel = thisSig.OriginVelocity(:)-txVel;
rgs = sqrt(sum(abs(txDir).^2,1));
txDir = txDir./rgs;
rrs = dot(relVel,txDir,1);

errRg = rgs-thisSig.PropagationRange;
errRR = rrs-thisSig.PropagationRangeRate;
[~,iMin] = min(abs(errRg)+abs(errRR));
txSig = txSignals(iMin);
end

function [thisPlat, thisSystem] = findSystem(plats,type,ID)

thisPlat = [];
thisSystem = [];

if contains('Sensor',type,'IgnoreCase',true)
    propName = 'Sensors';
    idName = 'SensorIndex';
else
    propName = 'Emitters';
    idName = 'EmitterIndex';
end

numPlats = numel(plats);
wasFound = false;
for iPlat = 1:numPlats
    thisPlat = plats{iPlat};
    theseSystems = thisPlat.(propName);
    for iSys = 1:numel(theseSystems)
        thisSystem = theseSystems{iSys};
        if thisSystem.(idName) == ID
            wasFound = true;
            break
        end
    end
    
    if wasFound
        break
    end
end
end

function setupChaseGraphics(hAxes)

% setup axes
hAxes.DataAspectRatio = [1 1 1];
hAxes.Projection = 'perspective';
hAxes.CameraViewAngle = 30;
axis(hAxes,'vis3d');
% axis(hAxes,'off');

% Use camera zoom style
z = zoom(hAxes);
z.setAxes3DPanAndZoomStyle(hAxes,'camera');

shrinkZLimits([], hAxes);
end

function updateChaseCamera(hAxes,plat,system)
% set camera position
dims = plat.Dimensions;

fov = system.FieldOfView;

% get system mounting location and orientation
mntLoc = system.MountingLocation(:);
mntAng = system.MountingAngles;
mntRot = rotmat(quaternion(mntAng,'eulerd','zyx','frame'),'frame');

% get system look angle
lkAng = zeros(1,2); % [az el]
numAng = numel(system.LookAngle);
lkAng(1:numAng) = system.LookAngle;
lkRot = rotmat(quaternion([lkAng(1) -lkAng(2) 0],'eulerd','zyx','frame'),'frame');

R = lkRot*mntRot;

plat = pose(plat);
platRot = plat.Orientation;
if isa(platRot,'quaternion')
    platRot = rotmat(platRot,'frame');
end
R = R*platRot;
T = plat.Position(:)+mntLoc;

viewHt = 3/2 * dims.Height;
viewLoc = [-5/2 * dims.Length 0]';
cp = R'*[viewLoc; viewHt] + T;

% % translate ego mounting orientation it to scenario orientation
% yaw = 0;
% pitch = 0;
% roll = 0;
% cR = R*rotmat(quaternion([yaw pitch roll],'eulerd','zyx','frame'),'frame');
cR = R;

ct = cR(1,:)' + cp;
cu = cR(3,:)';

% hAxes.CameraPosition = cp;
% hAxes.CameraTarget = ct;
% hAxes.CameraUpVector = -cu;
% set(hAxes, ...
%     'DataAspectRatio', [1 1 1], ...
%     'Projection', 'perspective', ...
%     'CameraViewAngle', fov(1));
set(hAxes,  'CameraPosition', cp, ...
    'CameraTarget', ct, ...
    'CameraUpVector', -cu, ...
    'DataAspectRatio', [1 1 1], ...
    'Projection', 'perspective', ...
    'CameraViewAngle', fov(1));
end

function shrinkZLimits(rt, hAxes)
set(hAxes, ...
    'XLimMode','auto', ...
    'YLimMode','auto', ...
    'ZLimMode','auto', ...
    'CameraPositionMode','auto', ...
    'CameraTargetMode','auto', ...
    'CameraUpVectorMode','auto', ...
    'CameraViewAngleMode','auto');

% keep z limits within 10 m of vertical range of all road tiles
if ~isempty(rt)
    minZ = Inf;
    maxZ = -Inf;
    
    for iTile=1:numel(rt)
        if rt(iTile).TileID>0
            minZi = min(rt(iTile).Vertices(:,3));
            maxZi = max(rt(iTile).Vertices(:,3));
            minZ = min(minZi, minZ);
            maxZ = max(maxZi, maxZ);
        end
    end
    camP = hAxes.CameraPosition;
    camT = hAxes.CameraTarget;
    camU = hAxes.CameraUpVector;
    hAxes.DataAspectRatio = [1 1 1];
    xLim = hAxes.XLim;
    yLim = hAxes.YLim;
    set(hAxes,'XLim',xLim,'YLim',yLim,'ZLim',10*[minZ/10 1+floor(maxZ/10)], ...
        'CameraPosition',camP,'CameraTarget',camT,'CameraUpVector',camU);
    view(hAxes, -90,90);
end
end

function dur = sceneDuration(scene)
dur = inf;

for iPlat = 1:numel(scene.Platforms)
    traj = scene.Platforms{iPlat}.Trajectory;
    if isa(traj,'waypointTrajectory')
        tbl = waypointInfo(traj);
        dur = min(max(tbl.TimeOfArrival),dur);
    end
end
end

function hfig = createFigure()
hfig = figure;
scale = 0.5;
pos = hfig.Position;
width = pos(3);
height = pos(4);
adjWidth = scale*width;
adjHeight = scale*height;
hfig.Position = pos+[-adjWidth/2 -adjHeight adjWidth adjHeight];
hfig.Units = 'normalized';
end
