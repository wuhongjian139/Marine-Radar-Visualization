//-----------------------------------------------------------------------------
// Copyright (C) 2016 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------
//! \file TabBase.h
//!
//! User interface for general tab control.
//---------------------------------------------------------------------------

#ifndef GUIDEMO_TABBASE_H
#define GUIDEMO_TABBASE_H

#include <QObject>

//-----------------------------------------------------------------------------
// Forward Declaration
//-----------------------------------------------------------------------------
namespace Ui
{
    class GUIDemoClass;
}

namespace Navico
{
    namespace Protocol
    {
        namespace NRP
        {
            class tImageClient;
        }
    }
}

//-----------------------------------------------------------------------------
// tTabBase Base Class
//-----------------------------------------------------------------------------
class tTabBase : public QObject
{
public:
    //-----------------------------------------------------------------------------
    // Constructor and initialization
    //-----------------------------------------------------------------------------
    tTabBase( Ui::GUIDemoClass& ui, QObject* pParent, QWidget& tab );

    void OnConnect( Navico::Protocol::NRP::tImageClient* pImageClient );
    void OnDisconnect();

protected:
    //-----------------------------------------------------------------------------
    // Member Fields
    //-----------------------------------------------------------------------------
    Navico::Protocol::NRP::tImageClient*    m_pImageClient;
    Ui::GUIDemoClass&                       m_Ui;
    QWidget&                                m_Tab;
};

//-----------------------------------------------------------------------------

#endif  // inclusion guard
