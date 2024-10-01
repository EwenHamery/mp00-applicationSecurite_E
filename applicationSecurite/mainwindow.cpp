#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "HashGestion.h"
#include "AesGestion.h"
#include "RsaGestion.h"

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

    HashGestion cryptHash;
    QString fileHash = QFileDialog::getOpenFileName(this, tr("Sélectionner un fichier"), "", tr("Tous les fichiers (*.*);;Fichiers texte (*.txt)"));
    if (!fileHash.isEmpty()) {
        // Convertir QString en std::string si nécessaire
        std::string filePath = fileHash.toStdString();
        //std::string monMessageHash = ("C:\\Users\\CIEL23_admin\\Documents\\seq01_compil_cpp\\act05-chiffrementCpp\\attendu_chiffrement\\lib_crypto_ciel\\superMessage.bin");
        std::cout << cryptHash.CalculateFileSHA256(filePath) << std::endl;
    }
}

/*
void MainWindow::on_FichierAes_clicked()
{
    AesGestion cryptAES;
    QString fileAes = QFileDialog::getOpenFileName(this, tr("Sélectionner un fichier"), "", tr("Tous les fichiers (*.*);;Fichiers texte (*.txt)"));
    if (!fileAes.isEmpty()) {
        std::string filePath = fileAes.toStdString();
        //std::cout << cryptAES.CalculateFileSHA256(filePath) << std::endl;
    }
}


void MainWindow::on_CleAes_clicked()
{
    AesGestion cryptAES;
    cryptAES.GenerateAESKey();
    QString fileCleAes = QFileDialog::getOpenFileName(this, tr("Sélectionner un fichier"), "", tr("Tous les fichiers (*.*);;Fichiers texte (*.txt)"));
    if (!fileCleAes.isEmpty()) {
        std::string filePath = fileCleAes.toStdString();
        std::string cryptAES.SaveAESKeyToFile(fileCleAes);
    }
    //cryptAES.SaveAESKeyToFile(monFichierCle);
    //cryptAES.LoadAESKeyFromFile(monFichierCle);

}
*/

void MainWindow::on_FichierRsa_clicked()
{

}


void MainWindow::on_CleRsa_clicked()
{

}

