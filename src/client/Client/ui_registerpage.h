/********************************************************************************
** Form generated from reading UI file 'registerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPAGE_H
#define UI_REGISTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterPage
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *btn_registerConfirm;
    QPushButton *btn_back;
    QLineEdit *txt_password;
    QLineEdit *txt_username;
    QPushButton *btn_ping;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegisterPage)
    {
        if (RegisterPage->objectName().isEmpty())
            RegisterPage->setObjectName(QStringLiteral("RegisterPage"));
        RegisterPage->resize(600, 276);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(237, 231, 140, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        RegisterPage->setPalette(palette);
        centralwidget = new QWidget(RegisterPage);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 541, 211));
        btn_registerConfirm = new QPushButton(groupBox);
        btn_registerConfirm->setObjectName(QStringLiteral("btn_registerConfirm"));
        btn_registerConfirm->setGeometry(QRect(370, 120, 161, 27));
        btn_back = new QPushButton(groupBox);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setGeometry(QRect(370, 150, 161, 27));
        txt_password = new QLineEdit(groupBox);
        txt_password->setObjectName(QStringLiteral("txt_password"));
        txt_password->setGeometry(QRect(0, 80, 371, 29));
        txt_password->setEchoMode(QLineEdit::Password);
        txt_username = new QLineEdit(groupBox);
        txt_username->setObjectName(QStringLiteral("txt_username"));
        txt_username->setGeometry(QRect(0, 40, 371, 29));
        btn_ping = new QPushButton(groupBox);
        btn_ping->setObjectName(QStringLiteral("btn_ping"));
        btn_ping->setGeometry(QRect(370, 180, 161, 27));
        RegisterPage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RegisterPage);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RegisterPage->setStatusBar(statusbar);

        retranslateUi(RegisterPage);

        QMetaObject::connectSlotsByName(RegisterPage);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterPage)
    {
        RegisterPage->setWindowTitle(QApplication::translate("RegisterPage", "Registration Page", 0));
        groupBox->setTitle(QApplication::translate("RegisterPage", "yourRegistrationDetails", 0));
        btn_registerConfirm->setText(QApplication::translate("RegisterPage", "Confirm Registration!", 0));
        btn_back->setText(QApplication::translate("RegisterPage", "Back :(", 0));
        txt_password->setText(QApplication::translate("RegisterPage", "Desired Password", 0));
        txt_username->setText(QApplication::translate("RegisterPage", "Desired Username", 0));
        btn_ping->setText(QApplication::translate("RegisterPage", "Ping!", 0));
    } // retranslateUi

};

namespace Ui {
    class RegisterPage: public Ui_RegisterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPAGE_H
