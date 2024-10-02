#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnSHA_clicked();

    void on_BtnAES_clicked();

    void on_BtnRSA_clicked();

    void on_FichierSha_clicked();

    void on_FichierAes_clicked();

    void on_GenCleAes_clicked();

    void on_FichierRsa_clicked();

    void on_CleRsa_clicked();

    void on_SeleltCleAes_clicked();

    void on_ChiffrAes_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
