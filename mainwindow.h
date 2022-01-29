#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "about.h"
#include "components1.h"
#include "components2.h"
#include "help.h"
#include <QTimer>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QTimer timer;
    int index;




private slots:
    void on_actionSalir_triggered();

    void on_pushButton_clicked();

    void on_actionAcerca_de_triggered();

    void on_pushButton_2_clicked();
    void cambiar();

    void on_pushButton_4_clicked();

    void on_actionAyuda_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
