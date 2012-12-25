/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 24. Dec 14:47:32 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionSettings;
    QAction *actionNew_Message;
    QAction *actionReceive_Messages;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeViewFromLocalDirMessage;
    QGroupBox *groupBoxMessage;
    QGridLayout *gridLayout_3;
    QTextEdit *textEditFromDisplaydCurrentMessage_2;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuMessages;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(534, 462);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionNew_Message = new QAction(MainWindow);
        actionNew_Message->setObjectName(QString::fromUtf8("actionNew_Message"));
        actionReceive_Messages = new QAction(MainWindow);
        actionReceive_Messages->setObjectName(QString::fromUtf8("actionReceive_Messages"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        treeViewFromLocalDirMessage = new QTreeView(centralWidget);
        treeViewFromLocalDirMessage->setObjectName(QString::fromUtf8("treeViewFromLocalDirMessage"));
        treeViewFromLocalDirMessage->setMinimumSize(QSize(130, 270));
        treeViewFromLocalDirMessage->setMaximumSize(QSize(130, 16777215));

        horizontalLayout->addWidget(treeViewFromLocalDirMessage);

        groupBoxMessage = new QGroupBox(centralWidget);
        groupBoxMessage->setObjectName(QString::fromUtf8("groupBoxMessage"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxMessage->sizePolicy().hasHeightForWidth());
        groupBoxMessage->setSizePolicy(sizePolicy1);
        groupBoxMessage->setMinimumSize(QSize(380, 280));
        gridLayout_3 = new QGridLayout(groupBoxMessage);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textEditFromDisplaydCurrentMessage_2 = new QTextEdit(groupBoxMessage);
        textEditFromDisplaydCurrentMessage_2->setObjectName(QString::fromUtf8("textEditFromDisplaydCurrentMessage_2"));
        sizePolicy1.setHeightForWidth(textEditFromDisplaydCurrentMessage_2->sizePolicy().hasHeightForWidth());
        textEditFromDisplaydCurrentMessage_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(textEditFromDisplaydCurrentMessage_2, 1, 0, 1, 1);

        listWidget = new QListWidget(groupBoxMessage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_3->addWidget(listWidget, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBoxMessage);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 534, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuMessages = new QMenu(menuBar);
        menuMessages->setObjectName(QString::fromUtf8("menuMessages"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuMessages->menuAction());
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuMessages->addAction(actionNew_Message);
        menuMessages->addAction(actionReceive_Messages);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PowerBeard - mail client", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        actionNew_Message->setText(QApplication::translate("MainWindow", "New Message", 0, QApplication::UnicodeUTF8));
        actionReceive_Messages->setText(QApplication::translate("MainWindow", "Receive Messages", 0, QApplication::UnicodeUTF8));
        groupBoxMessage->setTitle(QApplication::translate("MainWindow", "MESSAGE", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuMessages->setTitle(QApplication::translate("MainWindow", "Messages", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
