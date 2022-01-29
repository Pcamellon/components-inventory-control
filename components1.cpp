#include "components1.h"
#include "ui_components1.h"
#include <QDebug>
#include <QDir>


components1::components1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::components1)
{
    ui->setupUi(this);
    this->setWindowTitle("Base de datos");
    QDir dir;
    QString curdir;
    curdir=dir.currentPath();
    curdir.replace("/","//");



    db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={Microsoft Access Driver (*.mdb)};FIL={MS Access};DBQ="+curdir+"//DataBase.mdb");
    db.open();

   model=new QSqlTableModel(this);
   model->setTable("Diodos");
   model->select();
   model->sort(1,Qt::AscendingOrder);
   model->setEditStrategy(QSqlTableModel::OnManualSubmit);
   ui->tableView->setModel(model);
   ui->tableView->hideColumn(0);
   ui->tableView->resizeColumnsToContents();
   ui->tableView->resizeRowsToContents();



}


components1::~components1()
{  db.close();
    delete ui;
    delete model;
}




void components1::on_pushButton_clicked()
{
    db.open();
    QString filter;
if(ui->lineEdit->text()!="")
{
    filter="serie='"+ui->lineEdit->text()+"'";
}
else
{
    filter="";
}

model->setFilter(filter);
model->select();

}

void components1::on_comboBox_currentIndexChanged(const QString &arg1)
{
    delete model;
     model=new QSqlTableModel(this);
     model->setTable(arg1);
     model->select();

     ui->tableView->setModel(model);

     ui->tableView->resizeColumnsToContents();

     model->setEditStrategy(QSqlTableModel::OnManualSubmit);
}

void components1::on_radioButton_toggled(bool checked)
{
    if(checked==true)
    {
        ui->lineEdit_2->setEnabled(true);
        ui->lineEdit_3->setEnabled(true);
        ui->textEdit->setEnabled(true);
    }
    else
    {
        ui->lineEdit_3->setEnabled(false);
        ui->textEdit->setEnabled(false);
    }
}

void components1::on_pushButton_2_clicked()
{
 QSqlQuery query;
    if(ui->radioButton->isChecked())
    {
     query.exec("Insert into "+ui->comboBox->currentText()+" (Serie, Tipo, Propiedades) Values ('"+ui->lineEdit_2->text()+"', '"+ui->lineEdit_3->text()+"', '"+ui->textEdit->toPlainText()+"')");

    }
    if(ui->radioButton_2->isChecked())
    {
        query.exec("select * From"+ui->comboBox->currentText());
        query.exec("delete * From "+ui->comboBox->currentText()+" where Serie='"+ui->lineEdit_2->text()+"'");
    }
    model->submitAll();
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
}


