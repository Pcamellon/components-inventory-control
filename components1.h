#ifndef COMPONENTS1_H
#define COMPONENTS1_H

#include <QDialog>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>

namespace Ui {
class components1;
}

class components1 : public QDialog
{
    Q_OBJECT

public:
    explicit components1(QWidget *parent = 0);
    ~components1();
     QSqlDatabase db;

     QSqlTableModel *model;



private slots:



     void on_pushButton_clicked();

     void on_comboBox_currentIndexChanged(const QString &arg1);

     void on_radioButton_toggled(bool checked);

     void on_pushButton_2_clicked();



private:
    Ui::components1 *ui;
};

#endif // COMPONENTS1_H
