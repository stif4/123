#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTextCharFormat>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

  void  About_Lab1();
  void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    QTextCharFormat pre;
    int pre_i;
};
#endif // MAINWINDOW_H
