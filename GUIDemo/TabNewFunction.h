#ifndef TABNEWFUNCTION_H
#define TABNEWFUNCTION_H

#include <Feature.h>
#include <NavRadarProtocol.h>
#include <QObject>
#include "TabBase.h"

//-----------------------------------------------------------------------------
// tTabNewFunction Class
//-----------------------------------------------------------------------------
class tTabNewFunction : public tTabBase {
  Q_OBJECT

 public:
  //-----------------------------------------------------------------------------
  // Constructor, destructor and initialization
  //-----------------------------------------------------------------------------
  tTabNewFunction(Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab);
  ~tTabNewFunction();

  void OnConnect(Navico::Protocol::NRP::tImageClient* pImageClient);


 private slots:
  //-----------------------------------------------------------------------------
  // UI Signal Handling Interface
  //-----------------------------------------------------------------------------
  // group: Configuration
  void RecordData_click();
  void TransmitData_click();


};

//-----------------------------------------------------------------------------


#endif // TABNEWFUNCTION_H
