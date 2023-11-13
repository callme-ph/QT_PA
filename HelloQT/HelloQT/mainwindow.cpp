#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    ui = new Ui::MainWindow;
    ui->setupUi(this);

    connect(ui->pushButtonQuit,SIGNAL(clicked(bool)), this, SLOT(close())); // Configurando o botão QUIT para fechar a janela
    connect(ui->horizontalSliderValor, SIGNAL(valueChanged(int)), ui->lcdNumberValor, SLOT(display(int))); // Configurando o display para mostrar o valor correspondente a posição do slider.
    connect(ui->pushButtonOk, SIGNAL(clicked(bool)), this, SLOT(mostraMensagem()));
    connect(ui->pushButtonTeste, SIGNAL(clicked(bool)), ui->labelTeste, SLOT(transfereMensagem()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mostraMensagem()
{
    /*QMessageBox box;
    box.setText(QString("Alo."));
    box.exec();*/
}

void MainWindow::transfereMensagem()
{
    /*ui->labelTeste->setText();
    ui->lineEditTeste->text();*/
}
