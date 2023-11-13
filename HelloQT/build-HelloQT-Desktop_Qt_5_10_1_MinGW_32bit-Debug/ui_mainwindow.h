/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonQuit;
    QSlider *horizontalSliderValor;
    QLCDNumber *lcdNumberValor;
    QPushButton *pushButtonOk;
    QLineEdit *lineEditTeste;
    QLabel *labelTeste;
    QPushButton *pushButtonTeste;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(878, 534);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonQuit = new QPushButton(centralWidget);
        pushButtonQuit->setObjectName(QStringLiteral("pushButtonQuit"));
        pushButtonQuit->setGeometry(QRect(680, 420, 71, 21));
        horizontalSliderValor = new QSlider(centralWidget);
        horizontalSliderValor->setObjectName(QStringLiteral("horizontalSliderValor"));
        horizontalSliderValor->setGeometry(QRect(110, 140, 160, 22));
        horizontalSliderValor->setOrientation(Qt::Horizontal);
        lcdNumberValor = new QLCDNumber(centralWidget);
        lcdNumberValor->setObjectName(QStringLiteral("lcdNumberValor"));
        lcdNumberValor->setGeometry(QRect(60, 10, 281, 111));
        pushButtonOk = new QPushButton(centralWidget);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(760, 420, 75, 23));
        lineEditTeste = new QLineEdit(centralWidget);
        lineEditTeste->setObjectName(QStringLiteral("lineEditTeste"));
        lineEditTeste->setGeometry(QRect(60, 300, 113, 20));
        labelTeste = new QLabel(centralWidget);
        labelTeste->setObjectName(QStringLiteral("labelTeste"));
        labelTeste->setGeometry(QRect(370, 270, 121, 71));
        pushButtonTeste = new QPushButton(centralWidget);
        pushButtonTeste->setObjectName(QStringLiteral("pushButtonTeste"));
        pushButtonTeste->setGeometry(QRect(230, 300, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 878, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        pushButtonOk->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        lineEditTeste->setText(QApplication::translate("MainWindow", "Teste", nullptr));
        labelTeste->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButtonTeste->setText(QApplication::translate("MainWindow", ">>>>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
