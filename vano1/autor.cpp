#include "autor.h"
#include "ui_autor.h"

Autor::Autor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autor)
{
    ui->setupUi(this);
    QPixmap pix (":/img/Новая папка/2134.png");
    ui->label->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));
}

Autor::~Autor()
{
    delete ui;
}
