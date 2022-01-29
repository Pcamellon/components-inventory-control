#include "dialog.h"
#include "ui_dialog.h"



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Cálculo de resistores");
    band1="-1";
    band2="-1";
    tol="20%";
    temp="-1";
    mult=-1;
    band3="-1";

}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_comboBox_currentIndexChanged(int index)
{

    switch (index)
    {
        case 0:
            ui->frame->setStyleSheet("");
            band1="-1";
            break;
        case 1:

            ui->frame->setStyleSheet("background-color: rgb(0, 0, 0);");
            band1="0";
            break;
    case 2:
        ui->frame->setStyleSheet("background-color: rgb(85, 58, 38);");
        band1="1";
        break;
    case 3:
        ui->frame->setStyleSheet("background-color: rgb(255, 0, 0);");
        band1="2";
        break;
    case 4:
        ui->frame->setStyleSheet("background-color: rgb(255, 170, 0);");
        band1="3";
        break;
    case 5:
        ui->frame->setStyleSheet("background-color: rgb(255, 255, 0);");
        band1="4";
        break;
    case 6:
        ui->frame->setStyleSheet("background-color:  rgb(85, 255, 0);");
        band1="5";
        break;
    case 7:
        ui->frame->setStyleSheet("background-color: rgb(0, 0, 255);");
        band1="6";
        break;
    case 8:
        ui->frame->setStyleSheet("background-color: rgb(85, 0, 127);");
        band1="7";
        break;
    case 9:
        ui->frame->setStyleSheet("background-color: rgb(185, 185, 185);");
        band1="8";
        break;
    case 10:
        ui->frame->setStyleSheet("background-color: rgb(255, 255, 255);");
        band1="9";
        break;
    }

calcular();
}
void Dialog::calcular()
{ double valor;
    QString val,unidad,texto;
    if(band1!="-1"&&band2!="-1"&&mult!=-1)
    {
        if (band3!="-1")
        val=band1+band2+band3;
        else
        val=band1+band2;

        valor=val.toDouble();
        valor=valor*mult;
        QVariant text;
        text=valor;
        unidad="Ohm";
        texto="El valor de la resitencia es de: "+text.toString()+" "+unidad;
       if(tol!="-1")
        {
            texto.append(" con una tolerancia de un: "+tol);
        }
        if (temp!="-1")
        {
            texto.append(" y: "+temp);
        }
        ui->label->setText(texto);


    }
    else
        ui->label->setText("");
}

void Dialog::on_comboBox_2_currentIndexChanged(int index)
{

    switch (index)
    {
        case 0:
            ui->frame_2->setStyleSheet("");
            band2="-1";
            break;
        case 1:
            ui->frame_2->setStyleSheet("background-color: rgb(0, 0, 0);");
            band2="0";
            break;
    case 2:
        ui->frame_2->setStyleSheet("background-color: rgb(85, 58, 38);");
        band2="1";
        break;
    case 3:
        ui->frame_2->setStyleSheet("background-color: rgb(255, 0, 0);");
        band2="2";
        break;
    case 4:
        ui->frame_2->setStyleSheet("background-color: rgb(255, 170, 0);");
        band2="3";
        break;
    case 5:
        ui->frame_2->setStyleSheet("background-color: rgb(255, 255, 0);");
        band2="4";
        break;
    case 6:
        ui->frame_2->setStyleSheet("background-color:  rgb(85, 255, 0);");
        band2="5";
        break;
    case 7:
        ui->frame_2->setStyleSheet("background-color: rgb(0, 0, 255);");
        band2="6";
        break;
    case 8:
        ui->frame_2->setStyleSheet("background-color: rgb(85, 0, 127);");
        band2="7";
        break;
    case 9:
        ui->frame_2->setStyleSheet("background-color: rgb(185, 185, 185);");
        band2="8";
        break;
    case 10:
        ui->frame_2->setStyleSheet("background-color: rgb(255, 255, 255);");
        band2="9";
        break;
    }

calcular();
}

void Dialog::on_comboBox_3_currentIndexChanged(int index)
{

    switch (index)
    {
        case 0:
            ui->frame_3->setStyleSheet("");
            mult=-1;
            break;
        case 1:
            ui->frame_3->setStyleSheet("background-color: rgb(0, 0, 0);");
            mult=1;
            break;
    case 2:
        ui->frame_3->setStyleSheet("background-color: rgb(85, 58, 38);");
        mult=10;
        break;
    case 3:
        ui->frame_3->setStyleSheet("background-color: rgb(255, 0, 0);");
        mult=100;
        break;
    case 4:
        ui->frame_3->setStyleSheet("background-color: rgb(255, 170, 0);");
        mult=1000;
        break;
    case 5:
        ui->frame_3->setStyleSheet("background-color: rgb(255, 255, 0);");
        mult=10000;
        break;
    case 6:
        ui->frame_3->setStyleSheet("background-color:  rgb(85, 255, 0);");
        mult=100000;
        break;
    case 7:
        ui->frame_3->setStyleSheet("background-color: rgb(0, 0, 255);");
        mult=1000000;
        break;
    case 8:
        ui->frame_3->setStyleSheet("background-color: rgb(85, 0, 127);");
        mult=10000000;
        break;
    case 9:
        ui->frame_3->setStyleSheet("background-color: rgb(185, 185, 185);");
        mult=100000000;
        break;
    case 10:
        ui->frame_3->setStyleSheet("background-color: rgb(255, 255, 255);");
        mult=1000000000;
        break;
    case 11:
        ui->frame_3->setStyleSheet("background-color: rgb(255, 211, 76);");
        mult=0.1;
        break;
    case 12:
        ui->frame_3->setStyleSheet("background-color: rgb(220, 220, 220);");
        mult=0.01;
        break;
    }

calcular();
}

void Dialog::on_comboBox_4_currentIndexChanged(int index)
{
    switch (index)
    {
        case 0:
            ui->frame_4->setStyleSheet("");
            tol="20%";
            break;
    case 1:
        ui->frame_4->setStyleSheet("background-color: rgb(85, 58, 38);");
        tol="1%";
        break;
        case 2:
            ui->frame_4->setStyleSheet("background-color: rgb(255, 0, 0);");
            tol="2%";
            break;
    case 3:
        ui->frame_4->setStyleSheet("background-color: rgb(255, 255, 0);");
        tol="4%";
        break;
    case 4:
        ui->frame_4->setStyleSheet("background-color: rgb(85, 255, 0);");
        tol="0.5%";
        break;
    case 5:
        ui->frame_4->setStyleSheet("background-color: rgb(0, 0, 255);");
        tol="0.25%";
        break;
    case 6:
        ui->frame_4->setStyleSheet("background-color: rgb(85, 0, 127);");
        tol="0.1%";
        break;
    case 7:
        ui->frame_4->setStyleSheet("background-color: rgb(185, 185, 185);");
        tol="0.05%";
        break;
    case 8:
        ui->frame_4->setStyleSheet("background-color: rgb(255, 211, 76);");
        tol="5%";
        break;
    case 9:
        ui->frame_4->setStyleSheet("background-color: rgb(220, 220, 220);");
        tol="10%";
        break;

    }

calcular();
}

void Dialog::on_comboBox_5_currentIndexChanged(int index)
{
    switch (index)
    {
        case 0:
            ui->frame_5->setStyleSheet("");
            temp="-1";
            break;
    case 1:
        ui->frame_5->setStyleSheet("background-color: rgb(85, 58, 38);");
        temp="100ppm/C";
        break;
    case 2:
        ui->frame_5->setStyleSheet("background-color: rgb(255, 0, 0);");
        temp="50ppm/C";
        break;
    case 3:
        ui->frame_5->setStyleSheet("background-color: rgb(255, 170, 0);");
        temp="15ppm/C";
        break;
    case 4:
        ui->frame_5->setStyleSheet("background-color: rgb(255, 255, 0);");
        temp="25ppm/C";
        break;
    case 5:
        ui->frame_5->setStyleSheet("background-color:  rgb(85, 255, 0);");
        temp="20ppm/C";
        break;
    case 6:
        ui->frame_5->setStyleSheet("background-color: rgb(0, 0, 255);");
        temp="10ppm/C";
        break;
    case 7:
        ui->frame_5->setStyleSheet("background-color: rgb(85, 0, 127);");
        temp="5ppm/C";
        break;
    case 8:
        ui->frame_5->setStyleSheet("background-color: rgb(185, 185, 185);");
        temp="1ppm/C";
        break;
    }

calcular();
}




void Dialog::on_comboBox_6_currentIndexChanged(int index)
{
    switch (index)
    {
        case 0:
            ui->frame_6->setStyleSheet("");
            band3="-1";
            break;
        case 1:
            ui->frame_6->setStyleSheet("background-color: rgb(0, 0, 0);");
            band3="0";
            break;
    case 2:
        ui->frame_6->setStyleSheet("background-color: rgb(85, 58, 38);");
        band3="1";
        break;
    case 3:
        ui->frame_6->setStyleSheet("background-color: rgb(255, 0, 0);");
        band3="2";
        break;
    case 4:
        ui->frame_6->setStyleSheet("background-color: rgb(255, 170, 0);");
        band3="3";
        break;
    case 5:
        ui->frame_6->setStyleSheet("background-color: rgb(255, 255, 0);");
        band3="4";
        break;
    case 6:
        ui->frame_6->setStyleSheet("background-color:  rgb(85, 255, 0);");
        band3="5";
        break;
    case 7:
        ui->frame_6->setStyleSheet("background-color: rgb(0, 0, 255);");
        band3="6";
        break;
    case 8:
        ui->frame_6->setStyleSheet("background-color: rgb(85, 0, 127);");
        band3="7";
        break;
    case 9:
        ui->frame_6->setStyleSheet("background-color: rgb(185, 185, 185);");
        band3="8";
        break;
    case 10:
        ui->frame_6->setStyleSheet("background-color: rgb(255, 255, 255);");
        band3="9";
        break;
    }

calcular();
}

void Dialog::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
    {
        ui->comboBox_5->setEnabled(true);
        ui->comboBox_6->setEnabled(true);
        ui->frame_5->setEnabled(true);
        ui->frame_6->setEnabled(true);
    }
    else
    {
        ui->comboBox_5->setEnabled(false);
        ui->comboBox_6->setEnabled(false);
        ui->frame_5->setEnabled(false);
        ui->frame_6->setEnabled(false);
        ui->comboBox_5->setCurrentIndex(0);
        ui->comboBox_6->setCurrentIndex(0);


    }
}
