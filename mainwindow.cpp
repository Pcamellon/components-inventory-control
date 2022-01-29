
#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QDebug>
#include <QResource>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("ElectroWiki");
    timer.start(5000);
    index=0;
    connect(&timer,SIGNAL(timeout()),this,SLOT(cambiar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSalir_triggered()
{
    close();
}

void MainWindow::on_pushButton_clicked()
{
    Dialog resistencia;
    resistencia.exec();

}

void MainWindow::on_actionAcerca_de_triggered()
{

    About acerca;

    acerca.exec();


}

void MainWindow::on_pushButton_2_clicked()
{
    components1 diodos;
    diodos.exec();
}

void MainWindow::cambiar()
{
    if (index>4)
    {
        index=0;
    ui->stackedWidget->setCurrentIndex(index);
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(index);
    }
    index++;
}

void MainWindow::on_pushButton_4_clicked()
{
    components2 elementos;
    elementos.exec();
}

void MainWindow::on_actionAyuda_triggered()
{
   help ayuda;
   ayuda.exec();
}
