#ifndef COMPONENTS2_H
#define COMPONENTS2_H

#include <QDialog>

namespace Ui {
class components2;
}

class components2 : public QDialog
{
    Q_OBJECT

public:
    explicit components2(QWidget *parent = 0);
    ~components2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::components2 *ui;
};

#endif // COMPONENTS2_H
