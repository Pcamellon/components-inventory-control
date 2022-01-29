#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>



namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    QString band1,band2,tol,temp,band3;
    double mult;

private slots:

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

   void on_comboBox_3_currentIndexChanged(int index);

   void on_comboBox_4_currentIndexChanged(int index);

   void on_comboBox_5_currentIndexChanged(int index);





   void on_comboBox_6_currentIndexChanged(int index);

   void on_checkBox_clicked();

private:
    Ui::Dialog *ui;
    void calcular();
};

#endif // DIALOG_H
