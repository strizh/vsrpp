/********************************************************************************
** Form generated from reading UI file 'formnewmessage.ui'
**
** Created: Mon 24. Dec 15:52:00 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNEWMESSAGE_H
#define UI_FORMNEWMESSAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormNewMessage
{
public:
    QLineEdit *lineEditTo;
    QLineEdit *lineEditSubject;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLineEdit *lineEditServerIsxod;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *FormNewMessage)
    {
        if (FormNewMessage->objectName().isEmpty())
            FormNewMessage->setObjectName(QString::fromUtf8("FormNewMessage"));
        FormNewMessage->resize(400, 300);
        lineEditTo = new QLineEdit(FormNewMessage);
        lineEditTo->setObjectName(QString::fromUtf8("lineEditTo"));
        lineEditTo->setGeometry(QRect(100, 20, 201, 20));
        lineEditSubject = new QLineEdit(FormNewMessage);
        lineEditSubject->setObjectName(QString::fromUtf8("lineEditSubject"));
        lineEditSubject->setGeometry(QRect(100, 50, 113, 20));
        textEdit = new QTextEdit(FormNewMessage);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 80, 351, 171));
        pushButton = new QPushButton(FormNewMessage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 260, 75, 23));
        lineEditServerIsxod = new QLineEdit(FormNewMessage);
        lineEditServerIsxod->setObjectName(QString::fromUtf8("lineEditServerIsxod"));
        lineEditServerIsxod->setGeometry(QRect(280, 50, 113, 20));
        label = new QLabel(FormNewMessage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 46, 13));
        label_2 = new QLabel(FormNewMessage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 50, 46, 16));
        label_3 = new QLabel(FormNewMessage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 50, 46, 13));

        retranslateUi(FormNewMessage);

        QMetaObject::connectSlotsByName(FormNewMessage);
    } // setupUi

    void retranslateUi(QWidget *FormNewMessage)
    {
        FormNewMessage->setWindowTitle(QApplication::translate("FormNewMessage", "Form", 0, QApplication::UnicodeUTF8));
        lineEditTo->setText(QApplication::translate("FormNewMessage", "testacc111@open.by", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("FormNewMessage", "Send", 0, QApplication::UnicodeUTF8));
        lineEditServerIsxod->setText(QApplication::translate("FormNewMessage", "mail.open.by", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FormNewMessage", "To", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FormNewMessage", "Subject", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FormNewMessage", "Server", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FormNewMessage: public Ui_FormNewMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNEWMESSAGE_H
