/********************************************************************************
** Form generated from reading UI file 'acter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTER_H
#define UI_ACTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Acter
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTextEdit *textEdit;

    void setupUi(QDialog *Acter)
    {
        if (Acter->objectName().isEmpty())
            Acter->setObjectName(QString::fromUtf8("Acter"));
        Acter->resize(354, 237);
        gridLayout_2 = new QGridLayout(Acter);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(Acter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        textEdit = new QTextEdit(Acter);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Acter);
        QObject::connect(pushButton, SIGNAL(clicked()), Acter, SLOT(save_actor()));

        QMetaObject::connectSlotsByName(Acter);
    } // setupUi

    void retranslateUi(QDialog *Acter)
    {
        Acter->setWindowTitle(QCoreApplication::translate("Acter", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Acter", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Acter: public Ui_Acter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTER_H
