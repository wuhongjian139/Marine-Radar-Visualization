//-----------------------------------------------------------------------------
// Copyright (C) 2007-2011 Navico
// Confidential and proprietary.  All rights reserved.
//-----------------------------------------------------------------------------

#include <QApplication>
#include "GUIDemo.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  GUIDemo window;
  window.show();
  return app.exec();
}
