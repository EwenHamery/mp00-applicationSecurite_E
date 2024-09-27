#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnSHA_clicked()
{

}


void MainWindow::on_btnAES_clicked()
{

}


void MainWindow::on_btnRSA_clicked()
{

}


void MainWindow::on_btnFichierSha_clicked()
{

}


