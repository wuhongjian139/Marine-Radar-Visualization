//-----------------------------------------------------------------------------
// Copyright (C) 2007-2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include <cassert>
#include "TabBase.h"
#include "QControlUtils.h"

//-----------------------------------------------------------------------------
// tTabBase Implementation
//-----------------------------------------------------------------------------
tTabBase::tTabBase( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab )
    : QObject( pParent )
    , m_pImageClient( nullptr )
    , m_Ui( ui )
    , m_Tab( tab )
{
}


void tTabBase::OnConnect( Navico::Protocol::NRP::tImageClient* pImageClient )
{
    assert( m_pImageClient == 0 );

    m_pImageClient = pImageClient;
    m_Tab.setEnabled( m_pImageClient != 0 );
}

//-----------------------------------------------------------------------------
void tTabBase::OnDisconnect()
{
    m_Tab.setEnabled( false );
    m_pImageClient = nullptr;
}
