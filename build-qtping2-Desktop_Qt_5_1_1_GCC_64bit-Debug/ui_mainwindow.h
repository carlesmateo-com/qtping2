/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionE_xit;
    QAction *action_About;
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *copyButton;
    QPushButton *doPingButton;
    QLabel *lblPackets;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QMenu *menuQtping2;
    QMenu *menu_Help;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(619, 331);
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(625, 275));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 81, 21));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(98, 10, 290, 23));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 40, 601, 191));
        copyButton = new QPushButton(centralWidget);
        copyButton->setObjectName(QStringLiteral("copyButton"));
        copyButton->setGeometry(QRect(10, 240, 91, 23));
        doPingButton = new QPushButton(centralWidget);
        doPingButton->setObjectName(QStringLiteral("doPingButton"));
        doPingButton->setGeometry(QRect(400, 10, 80, 23));
        lblPackets = new QLabel(centralWidget);
        lblPackets->setObjectName(QStringLiteral("lblPackets"));
        lblPackets->setGeometry(QRect(500, 10, 50, 21));
        lblPackets->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        comboBox = new QComboBox(centralWidget);
        comboBox->insertItems(0, QStringList()
         << QStringLiteral("1")
         << QStringLiteral("2")
         << QStringLiteral("3")
         << QStringLiteral("4")
         << QStringLiteral("5")
         << QStringLiteral("6")
         << QStringLiteral("7")
         << QStringLiteral("8")
         << QStringLiteral("9")
         << QStringLiteral("10")
        );
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(560, 10, 50, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 20));
        menuQtping2 = new QMenu(menuBar);
        menuQtping2->setObjectName(QStringLiteral("menuQtping2"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuQtping2->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuQtping2->addAction(actionE_xit);
        menu_Help->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QtPing", 0));
        actionE_xit->setText(QApplication::translate("MainWindow", "E&xit", 0));
        action_About->setText(QApplication::translate("MainWindow", "&About", 0));
        label->setText(QApplication::translate("MainWindow", "Ping host:", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "www.google.cat", 0));
        copyButton->setText(QApplication::translate("MainWindow", "&Copy", 0));
        doPingButton->setText(QApplication::translate("MainWindow", "Ping", 0));
        lblPackets->setText(QApplication::translate("MainWindow", "Tries:", 0));
        menuQtping2->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0));
#ifndef QT_NO_STATUSTIP
        statusBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        statusBar->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        statusBar->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
