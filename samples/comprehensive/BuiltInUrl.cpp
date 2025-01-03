﻿#include "BuiltInUrl.h"
#include <QCoreApplication>

QStringList getBuiltInUrl() {
  return QStringList()
         << QString("file:///%1").arg(QCoreApplication::applicationDirPath() + u8"/asserts/test.html")
         << "None"
         << "https://baidu.com"
         << "https://html5test.com"
         << "https://www.google.com"
         << "https://ant.design/components/overview"
         << "chrome://version"
         << "steam://install/1234/"
         << QString("file:///%1").arg(QCoreApplication::applicationDirPath() + u8"/asserts/mp4.html")
         << QString("file:///%1").arg(QCoreApplication::applicationDirPath() + u8"/asserts/pdf.html")
         << QString("file:///%1").arg(QCoreApplication::applicationDirPath() + u8"/asserts/clock.html");
}
