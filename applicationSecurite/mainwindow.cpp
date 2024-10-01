#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->BtnRSA->setVisible(true);
    ui->BtnAES->setVisible(true);
    ui->BtnRSA->setVisible(true);
    ui->FichierSha->setVisible(false);
    ui->FichierAes->setVisible(false);
    ui->CleAes->setVisible(false);
    ui->FichierRsa->setVisible(false);
    ui->CleRsa->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BtnSHA_clicked()
{
    ui->FichierSha->setVisible(true);
    ui->FichierAes->setVisible(false);
    ui->CleAes->setVisible(false);
    ui->FichierRsa->setVisible(false);
    ui->CleRsa->setVisible(false);

}


void MainWindow::on_BtnAES_clicked()
{
    ui->FichierSha->setVisible(false);
    ui->FichierAes->setVisible(true);
    ui->CleAes->setVisible(true);
    ui->FichierRsa->setVisible(false);
    ui->CleRsa->setVisible(false);

}


void MainWindow::on_BtnRSA_clicked()
{
    ui->FichierSha->setVisible(false);
    ui->FichierAes->setVisible(false);
    ui->CleAes->setVisible(false);
    ui->FichierRsa->setVisible(true);
    ui->CleRsa->setVisible(true);

}


void MainWindow::on_FichierSha_clicked()
{


    //ouvrir un document a chiffrer
}


void MainWindow::on_FichierAes_clicked()
{

}


void MainWindow::on_CleAes_clicked()
{

}


void MainWindow::on_FichierRsa_clicked()
{

}


void MainWindow::on_CleRsa_clicked()
{

}

