#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "autor.h"
#include "ui_autor.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action_2,SIGNAL(triggered()),this,SLOT(About_Lab1()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::About_Lab1()
{
    Autor *dg = new Autor();
    dg->show();
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    QTextCharFormat format;
    format.setForeground(qvariant_cast<QColor>("black"));
    for (int i =1; i< 6; i++)
    {
        ui->calendarWidget->setWeekdayTextFormat(Qt::DayOfWeek(i), format);
    }
    format.setForeground(qvariant_cast<QColor>("red"));
    for (int i =6; i< 8; i++)
    {
        ui->calendarWidget->setWeekdayTextFormat(Qt::DayOfWeek(i), format);
    }
    ui->calendarWidget->setFirstDayOfWeek(Qt::DayOfWeek(index+1));
    format.setForeground(qvariant_cast<QColor>("green"));
    ui->calendarWidget->setWeekdayTextFormat(Qt::DayOfWeek(index+1), format);
}


