#ifndef TEST_WND_H__
#define TEST_WND_H__

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QtWidgets>

class QCefWidget;
class QCefOpenGLWidget;
class TransparentCefWnd;
class TestWnd : public QMainWindow {
  Q_OBJECT

public:
  TestWnd(QWidget *parent = 0);
  ~TestWnd();

  void closeEvent(QCloseEvent *event) override;
  QSize sizeHint() const override;
  void resizeEvent(QResizeEvent *event) override;
protected:
  void setupUi();
  void bindUiEvent();
private slots:
  void onInvokeMethodNotify(int browserId, int frameId, const QString &method, const QVariantList &arguments);

private:
  QWidget *widgetTop_;

  QCheckBox* checkboxOsrEnabled_;
  QCheckBox* checkboxContextMenuEnabled_;

  QCheckBox *checkBoxOpacityCefWidget_;
  QCheckBox *checkBoxOpacityCefOpenGLWidget_;
  QCheckBox *checkBoxTransparentCefWidget_;
  QCheckBox *checkBoxTransparentCefOpenGLWidget_;

  QPushButton* pushButtonBack_;
  QPushButton* pushButtonForward_;
  QPushButton* pushButtonReload_;
  QPushButton* pushButtonTriggerAnEvent_;
  QPushButton* pushButtonTrigger100Event_;
  QPushButton* pushButtonOpenDevTools_;
  QPushButton* pushButtonCloseDevTools_;
  QPushButton* pushButtonShowFramelessCef_;
  QPushButton* pushButtonExit_;
  QComboBox* comboBoxUrl_;


  QPlainTextEdit* plainTextEditLog_;

  QCefWidget* cefWidget_;
  QCefOpenGLWidget* cefOpenGLWidget_;
  QSplitter* splitterCef_;

  QSplitter* splitterMain_;

  TransparentCefWnd *transWidgetCefWnd_;
  TransparentCefWnd *transOpenGLWidgetCefWnd_;
};

#endif // TEST_WND_H__
