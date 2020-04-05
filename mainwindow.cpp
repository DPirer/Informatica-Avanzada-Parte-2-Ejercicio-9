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
double valor1 = 0;
double valor2 = 0;
double resultado = 0;
double multiplicacion = 0;
double division = 0;
double raiz = 0;
int negativo = 1;
double contador_decimales = 0;
bool suma_presionada = 0;
bool resta_presionada = 0;
bool multiplicacion_presionada = 0;
bool division_presionada = 0;
bool raiz_presionada = 0;
bool resultado_inicializado = 0;


// BOTÓN 1
void MainWindow::on_boton1_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 1;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 1;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 1/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 1/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }

}

// BOTÓN 2
void MainWindow::on_boton2_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 2;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 2;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 2/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 2/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }

}


// BOTÓN 3
void MainWindow::on_boton3_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 3;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 3;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 3/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 3/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }

}


// BOTÓN 4
void MainWindow::on_boton4_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 4;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 4;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 4/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 4/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 5
void MainWindow::on_boton5_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 5;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 5;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 5/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 5/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 6
void MainWindow::on_boton6_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 6;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 6;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 6/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 6/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 7
void MainWindow::on_boton7_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 7;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 7;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 7/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 7/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 8
void MainWindow::on_boton8_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 8;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 8;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 8/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 8/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 9
void MainWindow::on_boton9_clicked()
{
    if (contador_decimales == 0){
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 * 10 + 9;
            ui -> pantalla -> display(valor1);
        }
        else {
            valor2 = valor2 * 10 + 9;
            ui -> pantalla -> display(valor2);
        }
    } else {
        if (suma_presionada == 0 && resta_presionada == 0 && multiplicacion_presionada == 0 && division_presionada == 0 && raiz_presionada == 0){
            valor1 = valor1 + 9/contador_decimales;
            ui -> pantalla -> display(valor1);
            contador_decimales = contador_decimales * 10;
        }
        else {
            valor2 = valor2 + 9/contador_decimales;
            ui -> pantalla -> display(valor2);
            contador_decimales = contador_decimales * 10;
        }
    }
}


// BOTÓN 0
void MainWindow::on_boton0_clicked()
{
    if (contador_decimales == 0){
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
void MainWindow::on_boton_coma_clicked()
{
    contador_decimales = 10;
}


// BOTÓN SUMA
void MainWindow::on_boton_suma_clicked()
{
    suma_presionada = 1;
    resta_presionada = 0;
    multiplicacion_presionada = 0;
    division_presionada = 0;
    raiz_presionada = 0;
    contador_decimales = 0;
}


// BOTÓN RESTA
void MainWindow::on_boton_resta_clicked()
{
    if (suma_presionada == 1 || resta_presionada == 1 || multiplicacion_presionada == 1 || division_presionada == 1){
        negativo = -1;
    } else {
        suma_presionada = 0;
        resta_presionada = 1;
        multiplicacion_presionada = 0;
        division_presionada = 0;
        raiz_presionada = 0;
        contador_decimales = 0;
    }
}


// BOTÓN MULTIPLICACIÓN
void MainWindow::on_boton_por_clicked()
{
    suma_presionada = 0;
    resta_presionada = 0;
    multiplicacion_presionada = 1;
    division_presionada = 0;
    raiz_presionada = 0;
    contador_decimales = 0;
}


// BOTÓN DIVISIÓN
void MainWindow::on_boton_division_clicked()
{
    suma_presionada = 0;
    resta_presionada = 0;
    multiplicacion_presionada = 0;
    division_presionada = 1;
    raiz_presionada = 0;
    contador_decimales = 0;
}


// BOTÓN RAÍZ CUADRADA
void MainWindow::on_boton_raiz_clicked()
{
    suma_presionada = 0;
    resta_presionada = 0;
    multiplicacion_presionada = 0;
    division_presionada = 0;
    raiz_presionada = 1;
    contador_decimales = 0;

    if (raiz_presionada == 1){
        if (valor1 >= 0 && resultado >= 0){
            if (valor1 != NULL){
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
    }
}


// BOTÓN BORRAR
void MainWindow::on_boton_borrar_clicked()
{
    valor1 = 0;
    valor2 = 0;
    suma_presionada = 0;
    resta_presionada = 0;
    contador_decimales = 0;
    resultado = 0;
    ui -> pantalla -> display(0);
}


// BOTÓN IGUAL
void MainWindow::on_boton_igual_clicked()
{

    // SUMA
    if (suma_presionada == 1){
        if (valor1 != NULL){
            resultado = valor1 + valor2 * negativo;
        } else {
            resultado = resultado + valor2 * negativo;

        }
        ui -> pantalla -> display(resultado);
        suma_presionada = 0;
        contador_decimales = 0;
        negativo = 1;
        valor1 = NULL;
        valor2 = 0;
    }


    // RESTA
    if (resta_presionada == 1){
        if (valor1 != NULL){
            resultado = valor1 - valor2 * negativo;
        } else {
            resultado = resultado - valor2 * negativo;

        }
        ui -> pantalla -> display(resultado);
        resta_presionada = 0;
        negativo = 1;
        valor1 = NULL;
        valor2 = 0;
    }


    // MULTIPLICACIÓN
    if (multiplicacion_presionada == 1){
        if (valor1 != NULL){
            resultado = valor1 * valor2 * negativo;
        } else {
            resultado = resultado * valor2 * negativo;

        }
        ui -> pantalla -> display(resultado);
        multiplicacion_presionada = 0;
        negativo = 1;
        valor1 = NULL;
        valor2 = 0;
    }


    // DIVISIÓN
    if (division_presionada == 1){
        if(valor2 != 0){
            if (valor1 != NULL){
                resultado = valor1 / (valor2 * negativo);
            } else {
                resultado = resultado / (valor2 * negativo);

            }
            ui -> pantalla -> display(resultado);
            division_presionada = 0;
            valor1 = NULL;
            valor2 = 0;
        }
        else {
            ui -> pantalla -> display("Error");
            division_presionada = 0;
            valor1 = 0;
            valor2 = 0;
            resultado = 0;
        }
        negativo = 1;
    }

    // RAÍZ CUADRADA
    // Implementada en su propio listener porque sólo tiene un argumento de entrada

}
