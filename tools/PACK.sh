#!/bin/bash
COPYPATH="./"
rsync -av --progress ../../MarineRadarVisualization ${COPYPATH} --exclude build --exclude Build --exclude BUILD \
--exclude build --exclude Build --exclude BUILD --exclude tools --exclude .git \
--exclude '*.csv'  --exclude '*.db' --exclude matlab 
tar -cvzf ./Radar.tar.gz "${COPYPATH}MarineRadarVisualization"
sudo rm -r ./MarineRadarVisualization
