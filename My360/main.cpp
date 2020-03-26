#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <tr1/memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow::getInstance()->show();

    return a.exec();
}
