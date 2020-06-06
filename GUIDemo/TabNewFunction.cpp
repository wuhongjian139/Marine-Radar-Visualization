#include "TabNewFunction.h"
#include "ui_GUIDemo.h"
#include "ImageClient.h"
#include "QControlUtils.h"
#include "datarecorder.h"
#include "datatransimission.h"
#include <QDebug>
//-----------------------------------------------------------------------------
// tTabNewFunction Implementation
//-----------------------------------------------------------------------------
tTabNewFunction::tTabNewFunction(Ui::GUIDemoClass& ui, QObject* pParent,
                                   QWidget& tab)
    : tTabBase(ui, pParent, tab) {
    connect(ui.Recoder_DB, &QPushButton::clicked, this, &tTabNewFunction::RecordData_click);
    connect(ui.DataTrans_PB, &QPushButton::clicked, this, &tTabNewFunction::TransmitData_click);

//  ConnectControls(true, *this, tab);


}

//-----------------------------------------------------------------------------
tTabNewFunction::~tTabNewFunction() {

//    ConnectControls(false, *this, m_Tab);
}


//-----------------------------------------------------------------------------
void tTabNewFunction::OnConnect(
    Navico::Protocol::NRP::tImageClient* pImageClient) {
  tTabBase::OnConnect(pImageClient);

}


//-----------------------------------------------------------------------------
void tTabNewFunction::RecordData_click() {
const std::string folderp = "./";
est_state_db_data _est_state_db_data{
    -1,  // local_time
    1,   // state_x
    2,   // state_y
    3,   // state_theta
    4,   // state_u
    5,   // state_v
    6   // state_r
};
marineradar_db _marineradar_db(folderp);
_marineradar_db.create_table();
_marineradar_db.update_motion_table(_est_state_db_data);
//_marineradar_db.update_state_table(est_state_db_data);
}


void tTabNewFunction::TransmitData_click(){



}
