#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile *qss = new QFile("://style.qss");
    qss->open(QFile::ReadOnly);
    QString styleSheet = qss->readAll();
    a.setStyleSheet(styleSheet);
    qss->close();
    qss->deleteLater();

    MainWindow w;
    w.show();

    return a.exec();
}
