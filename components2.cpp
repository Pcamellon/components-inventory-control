#include "components2.h"
#include "ui_components2.h"

components2::components2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::components2)
{
    ui->setupUi(this);
    this->setWindowTitle("Resumen");
}

components2::~components2()
{
    delete ui;
}

void components2::on_pushButton_clicked()
{
    ui->label->setText("Se denomina resistor al componente electrónico diseñado para introducir una resistencia eléctrica determinada entre dos puntos de un circuito eléctrico. En el propio argot eléctrico y electrónico, son conocidos simplemente como resistencias. En otros casos, como en las planchas, calentadores, etc., se emplean resistencias para producir calor aprovechando el efecto Joule. Es un material formado por carbón y otros elementos resistivos para disminuir la corriente que pasa. Se opone al paso de la corriente. Los resistores se utilizan en los circuitos para limitar el valor de la corriente o para fijar el valor de la tensión, según la Ley de Ohm. A diferencia de otros componentes electrónicos, los resistores no tienen polaridad definida.");
}


void components2::on_pushButton_2_clicked()
{
    ui->label->setText("Un diodo es un componente electrónico de dos terminales que permite la circulación de la corriente eléctrica a través de él en un solo sentido. Este término generalmente se usa para referirse al diodo semiconductor, el más común en la actualidad; consta de una pieza de cristal semiconductor conectada a dos terminales eléctricos. El diodo de vacío (que actualmente ya no se usa, excepto para tecnologías de alta potencia) es un tubo de vacío con dos electrodos: una lámina como ánodo, y un cátodo.");
}


void components2::on_pushButton_3_clicked()
{
    ui->label->setText("El tiristor es un componente electrónico constituido por elementos semiconductores que utiliza realimentación interna para producir una conmutación[1]. Los materiales de los que se compone son de tipo semiconductor, es decir, dependiendo de la temperatura a la que se encuentren pueden funcionar como aislantes o como conductores. Son dispositivos unidireccionales porque solamente transmiten la corriente en un único sentido. Se emplea generalmente para el control de potencia eléctrica. El dispositivo consta de un ánodo y un cátodo, donde las uniones son de tipo P-N-P-N entre los mismos. Por tanto se puede modelar como 2 transistores típicos P-N-P y N-P-N, por eso se dice también que el tiristor funciona con tensión realimentada. Se crean así 3 uniones (denominadas J1, J2, J3 respectivamente), el terminal de puerta está conectado a la unión J2 (unión NP).");
}


void components2::on_pushButton_4_clicked()
{
    ui->label->setText("Un TRIAC o Triodo para Corriente Alterna es un dispositivo semiconductor, de la familia de los tiristores. La diferencia con un tiristor convencional es que éste es unidireccional y el TRIAC es bidireccional. De forma coloquial podría decirse que el TRIAC es un interruptor capaz de conmutar la corriente alterna. Su estructura interna se asemeja en cierto modo a la disposición que formarían dos SCR en direcciones opuestas. Posee tres electrodos: A1, A2 (en este caso pierden la denominación de ánodo y cátodo) y puerta (gate). El disparo del TRIAC se realiza aplicando una corriente al electrodo de gate/puerta.");
}
