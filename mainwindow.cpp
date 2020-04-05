#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <math.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



// VARIABLES GLOBALES
double valor1 = 0;                          // Sumando 1
double valor2 = 0;                          // Sumando 2
double resultado = 0;                       // Resultado
int negativo = 1;                           // Valor que indica si queremos un número negativo
bool primer_valor = 0;                      // Valor que indica si usaremos el sumando 1
double contador_decimales = 1;              // Valor que indica la cifra de decimales
bool suma_presionada = 0;                   // Los siguientes son valores que indican la operación a realizar
bool resta_presionada = 0;
bool multiplicacion_presionada = 0;
bool division_presionada = 0;
bool raiz_presionada = 0;

/* A la hora de presionar los botones numéricos, primero comprobamos si hemos pulsado el botón de decimales
 * para desplazar la cifra a la posición correspondiente.
 *
 * Después comprobamos si hemos presionado o no un botón de operación para almacenar el valor en el sumando 1 o en el 2.
 *
 * Si se ha pulsado la tecla negativo, se multiplica el sumando correspondiente por -1.
 *
 * Hay que tener en cuenta si el valor es ya positivo o negativo para sumarle o restarle esos decimales.
 *
 * Finalmente actualizamos el valor y lo mostramos por pantalla
 *
 * Este proceso se repite con todos los números menos con el 0, que sólo desplaza el contador de decimales */


// BOTÓN 1
void MainWindow::on_boton1_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 1) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 1) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (1/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (1/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (1/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (1/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}

// BOTÓN 2
void MainWindow::on_boton2_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 2) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 2) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (2/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (2/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (2/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (2/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 3
void MainWindow::on_boton3_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 3) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 3) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (3/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (3/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (3/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (3/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 4
void MainWindow::on_boton4_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 4) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 4) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (4/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (4/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (4/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (4/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 5
void MainWindow::on_boton5_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 5) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 5) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (5/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (5/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (5/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (5/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 6
void MainWindow::on_boton6_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 6) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 6) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (6/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (6/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (6/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (6/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 7
void MainWindow::on_boton7_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 7) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 7) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (7/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (7/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (7/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (7/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 8
void MainWindow::on_boton8_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 8) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 8) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (8/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (8/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (8/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (8/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 9
void MainWindow::on_boton9_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = (valor1 * 10 + 9) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = (valor2 * 10 + 9) * negativo;
            negativo = 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            if (valor1 > 0){
                valor1 = (valor1 + (9/contador_decimales)) * negativo;
            }
            else {
                valor1 = (valor1 - (9/contador_decimales)) * negativo;
                }
            negativo = 1;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            if (valor2 > 0){
                valor2 = (valor2 + (9/contador_decimales)) * negativo;
            }
            else {
                valor2 = (valor2 - (9/contador_decimales)) * negativo;
            }
            negativo = 1;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 0
void MainWindow::on_boton0_clicked()
{
    if (contador_decimales == 1){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10;
            ui -> pantalla -> display(valor2);
        }
    } else {
        contador_decimales = contador_decimales * 10;
    }
}


// BOTÓN DECIMAL
void MainWindow::on_boton_coma_clicked() // El botón decimal sólo inicializa el contador de decimales
{
    contador_decimales = 10;
}


// BOTÓN SUMA
void MainWindow::on_boton_suma_clicked()
{
    // El botón de suma sólo activa la flag de sum para indicarle al igual la operación a realizar.
    // Ponemos el resto a 0 para asegurarnos de que el usuario no hace cosas raras. Sólo se realizará
    // la última operación que indique el usuario.
    suma_presionada = 1;
    resta_presionada = 0;
    multiplicacion_presionada = 0;
    division_presionada = 0;
    raiz_presionada = 0;
    contador_decimales = 1;
    ui -> pantalla -> display("P"); // Mostramos una P para indicar que se ha pulsado una operación (de las pocas letras que permite QLCDNumber)
}


// BOTÓN RESTA
void MainWindow::on_boton_resta_clicked()
{
    // La resta es más compleja debido a los números negativos. Hay que hacer tres comprobaciones
    // Si estamos en el sumando uno y queremos números negativos, se mete en la primera condición. Esto
    // lo determina la variable primer valor, que sólo se pone a 1 al inicio del programa y tras pulsar C
    // En cualquier otro caso, sólo habrá un sumando 2
    if (valor1 == 0 && primer_valor == 0){
        negativo = -1;
    } else if (suma_presionada == 1 || resta_presionada == 1 || multiplicacion_presionada == 1 || division_presionada == 1) {
        // Este segundo if indica si queremos un signo menos en el segundo sumando. Se da cuando hemos presionado una operación
        negativo = -1;
    }
    else {
        // Y en cualquier otro caso, se trata de una operación de resta entre dos números positivos. Marcamos el flag correspondiente
        suma_presionada = 0;
        resta_presionada = 1;
        multiplicacion_presionada = 0;
        division_presionada = 0;
        raiz_presionada = 0;
        contador_decimales = 1;
    }
    ui -> pantalla -> display("P");
}


// BOTÓN MULTIPLICACIÓN
void MainWindow::on_boton_por_clicked()
{
    suma_presionada = 0;
    resta_presionada = 0;
    multiplicacion_presionada = 1;
    division_presionada = 0;
    raiz_presionada = 0;
    contador_decimales = 1;
    ui -> pantalla -> display("P");
}


// BOTÓN DIVISIÓN
void MainWindow::on_boton_division_clicked()
{
    suma_presionada = 0;
    resta_presionada = 0;
    multiplicacion_presionada = 0;
    division_presionada = 1;
    raiz_presionada = 0;
    contador_decimales = 1;
    ui -> pantalla -> display("P");
}


// BOTÓN RAÍZ CUADRADA
void MainWindow::on_boton_raiz_clicked()
{
    // La raíz cuadrada se tiene que resolver en el propio botón porque sólo tiene un sumando como entrada
    suma_presionada = 0;
    resta_presionada = 0;
    multiplicacion_presionada = 0;
    division_presionada = 0;
    raiz_presionada = 1;
    contador_decimales = 1;

    // Comprobamos si queremos hacer la raíz cuadrada del primer o del segundo sumando, y mostramos un error en el caso de que sean 0
    if (raiz_presionada == 1){
        if (valor1 >= 0 && resultado >= 0){
            if (valor1 != 0){
                resultado = sqrt(valor1);
            } else {
                resultado = sqrt(resultado);

            }
            ui -> pantalla -> display(resultado);
        } else {
            ui -> pantalla -> display("Error");
            resultado = 0;
        }
        raiz_presionada = 0;
        valor1 = 0;
        valor2 = 0;
        contador_decimales = 1;
        primer_valor = 1; // Esto indica que a partir de este momento sólo trabajamos con el segundo sumando
    }
}


// BOTÓN BORRAR
void MainWindow::on_boton_borrar_clicked()
{
    // El botón borrar establece todos los valores como al principio del programa
    valor1 = 0;
    valor2 = 0;
    suma_presionada = 0;
    resta_presionada = 0;
    multiplicacion_presionada = 0;
    division_presionada = 0;
    raiz_presionada = 0;
    contador_decimales = 1;
    resultado = 0;
    primer_valor = 0;
    ui -> pantalla -> display(0);
}


// BOTÓN IGUAL
void MainWindow::on_boton_igual_clicked()
{
    // El botón igual identifica qué botón de operación se ha pulsado y la realiza, identificando si
    // son necesarios uno o dos sumandos

    // SUMA
    if (suma_presionada == 1){
        if (primer_valor == 0){
            resultado = valor1 + valor2;
        } else {
            resultado = resultado + valor2;

        }
        ui -> pantalla -> display(resultado);
        suma_presionada = 0;
        contador_decimales = 1;
        valor1 = 0;
        valor2 = 0;
        primer_valor = 1;
    }


    // RESTA
    if (resta_presionada == 1){
        if (primer_valor == 0){
            resultado = valor1 - valor2;
        } else {
            resultado = resultado - valor2;

        }
        ui -> pantalla -> display(resultado);
        resta_presionada = 0;
        contador_decimales = 1;
        valor1 = 0;
        valor2 = 0;
        primer_valor = 1;
    }


    // MULTIPLICACIÓN
    if (multiplicacion_presionada == 1){
        if (primer_valor == 0){
            resultado = valor1 * valor2;
        } else {
            resultado = resultado * valor2;

        }
        ui -> pantalla -> display(resultado);
        multiplicacion_presionada = 0;
        contador_decimales = 1;
        valor1 = 0;
        valor2 = 0;
        primer_valor = 1;
    }


    // DIVISIÓN
    if (division_presionada == 1){
        if(valor2 != 0){
            if (primer_valor == 0){
                resultado = valor1 / valor2;
            } else {
                resultado = resultado / valor2;

            }
            ui -> pantalla -> display(resultado);
            division_presionada = 0;
            valor1 = 0;
            valor2 = 0;
        }
        else {
            ui -> pantalla -> display("Error");
            division_presionada = 0;
            valor1 = 0;
            valor2 = 0;
            resultado = 0;
        }
        primer_valor = 1;
        contador_decimales = 1;
    }

    // RAÍZ CUADRADA
    // Implementada en su propio listener porque sólo tiene un argumento de entrada

}
