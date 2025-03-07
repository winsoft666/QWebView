﻿#pragma once
#include <QtWidgets>
#include <QDebug>
#include "QWebView/Manager.h"

#pragma execution_character_set("utf-8")

class QWebView;
class SampleWnd : public QWidget {
  Q_OBJECT
 public:
  SampleWnd(QWidget* parent = nullptr);
  //bool nativeEvent(const QByteArray& eventType, void* message, long* result) {
  //  if (eventType == "windows_generic_MSG") {
  //    MSG* pMsg = (MSG*)message;
  //    if (pMsg->message == WM_CLOSE) {
  //      qDebug() << ">>>> SampleWnd WM_CLOSE";
  //    }
  //  }
  //  return false;
  //}

  void closeEvent(QCloseEvent* e);

 private slots:
  void onNewPopupWindow(QString url);

 protected:
  QWebView* webview_ = nullptr;
};