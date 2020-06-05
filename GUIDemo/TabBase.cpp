//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include "TabBase.h"
#include <cassert>
#include "QControlUtils.h"

//-----------------------------------------------------------------------------
// tTabBase Implementation
//-----------------------------------------------------------------------------
tTabBase::tTabBase(Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab)
    : QObject(pParent), m_pImageClient(nullptr), m_Ui(ui), m_Tab(tab) {}

void tTabBase::OnConnect(Navico::Protocol::NRP::tImageClient* pImageClient) {
  assert(m_pImageClient == nullptr);

  m_pImageClient = pImageClient;
  m_Tab.setEnabled(m_pImageClient != nullptr);
}

//-----------------------------------------------------------------------------
void tTabBase::OnDisconnect() {
  m_Tab.setEnabled(false);
  m_pImageClient = nullptr;
}
