/********************************************************************************
** Form generated from reading UI file 'settingsform.ui'
**
** Created: Mon 24. Dec 15:52:00 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFORM_H
#define UI_SETTINGSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsForm
{
public:
    QLabel *label;
    QLineEdit *lineEditServer;
    QLabel *label_2;
    QLineEdit *lineEditLogin;
    QLabel *label_3;
    QLineEdit *lineEditPassword;
    QCheckBox *checkBox;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonExit;
    QGroupBox *groupBox;
    QLabel *label_7;
    QLineEdit *lineEditProxyPass;
    QLineEdit *lineEditProxyUserName;
    QLineEdit *lineEditProxySer;
    QLineEdit *lineEditProxyPort;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QLineEdit *lineEditPort;

    void setupUi(QWidget *SettingsForm)
    {
        if (SettingsForm->objectName().isEmpty())
            SettingsForm->setObjectName(QString::fromUtf8("SettingsForm"));
        SettingsForm->resize(452, 191);
        SettingsForm->setContextMenuPolicy(Qt::NoContextMenu);
        label = new QLabel(SettingsForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 46, 13));
        lineEditServer = new QLineEdit(SettingsForm);
        lineEditServer->setObjectName(QString::fromUtf8("lineEditServer"));
        lineEditServer->setGeometry(QRect(70, 20, 113, 20));
        label_2 = new QLabel(SettingsForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 46, 13));
        lineEditLogin = new QLineEdit(SettingsForm);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setGeometry(QRect(70, 60, 113, 20));
        label_3 = new QLabel(SettingsForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 46, 13));
        lineEditPassword = new QLineEdit(SettingsForm);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(70, 80, 113, 20));
        checkBox = new QCheckBox(SettingsForm);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(210, 20, 81, 17));
        pushButtonSave = new QPushButton(SettingsForm);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(20, 150, 75, 23));
        pushButtonExit = new QPushButton(SettingsForm);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(110, 150, 75, 23));
        groupBox = new QGroupBox(SettingsForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(false);
        groupBox->setGeometry(QRect(210, 50, 231, 121));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 70, 61, 16));
        lineEditProxyPass = new QLineEdit(groupBox);
        lineEditProxyPass->setObjectName(QString::fromUtf8("lineEditProxyPass"));
        lineEditProxyPass->setGeometry(QRect(100, 90, 113, 20));
        lineEditProxyUserName = new QLineEdit(groupBox);
        lineEditProxyUserName->setObjectName(QString::fromUtf8("lineEditProxyUserName"));
        lineEditProxyUserName->setGeometry(QRect(100, 70, 113, 20));
        lineEditProxySer = new QLineEdit(groupBox);
        lineEditProxySer->setObjectName(QString::fromUtf8("lineEditProxySer"));
        lineEditProxySer->setGeometry(QRect(100, 30, 113, 20));
        lineEditProxyPort = new QLineEdit(groupBox);
        lineEditProxyPort->setObjectName(QString::fromUtf8("lineEditProxyPort"));
        lineEditProxyPort->setGeometry(QRect(100, 50, 113, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 50, 46, 13));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 30, 71, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 90, 46, 13));
        label_8 = new QLabel(SettingsForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 40, 46, 13));
        lineEditPort = new QLineEdit(SettingsForm);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setGeometry(QRect(70, 40, 113, 20));

        retranslateUi(SettingsForm);

        QMetaObject::connectSlotsByName(SettingsForm);
    } // setupUi

    void retranslateUi(QWidget *SettingsForm)
    {
        SettingsForm->setWindowTitle(QApplication::translate("SettingsForm", "Settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SettingsForm", "Server", 0, QApplication::UnicodeUTF8));
        lineEditServer->setText(QApplication::translate("SettingsForm", "mail.open.by", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SettingsForm", "Login", 0, QApplication::UnicodeUTF8));
        lineEditLogin->setText(QApplication::translate("SettingsForm", "testacc111@open.by", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SettingsForm", "Password", 0, QApplication::UnicodeUTF8));
        lineEditPassword->setText(QApplication::translate("SettingsForm", "123456", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("SettingsForm", "Use PROXY", 0, QApplication::UnicodeUTF8));
        pushButtonSave->setText(QApplication::translate("SettingsForm", "Save", 0, QApplication::UnicodeUTF8));
        pushButtonExit->setText(QApplication::translate("SettingsForm", "Exit", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SettingsForm", "PROXY", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SettingsForm", "UserName", 0, QApplication::UnicodeUTF8));
        lineEditProxyPass->setText(QApplication::translate("SettingsForm", "47jeka02", 0, QApplication::UnicodeUTF8));
        lineEditProxyUserName->setText(QApplication::translate("SettingsForm", "Jenya", 0, QApplication::UnicodeUTF8));
        lineEditProxySer->setText(QApplication::translate("SettingsForm", "192.168.19.6", 0, QApplication::UnicodeUTF8));
        lineEditProxyPort->setText(QApplication::translate("SettingsForm", "2527", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SettingsForm", "PORT", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SettingsForm", "PROXY Server", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SettingsForm", "Password", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SettingsForm", "Port", 0, QApplication::UnicodeUTF8));
        lineEditPort->setText(QApplication::translate("SettingsForm", "110", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsForm: public Ui_SettingsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFORM_H
