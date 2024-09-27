#include "mainwindow.h"
#include "AesGestion.h"
#include "RsaGestion.h"
#include "Hashgestion.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}
