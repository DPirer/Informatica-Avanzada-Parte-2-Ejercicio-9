#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_boton1_clicked();

    void on_boton2_clicked();

    void on_boton_igual_clicked();

    void on_boton3_clicked();

    void on_boton_suma_clicked();

    void on_boton_resta_clicked();

    void on_boton_coma_clicked();

    void on_boton4_clicked();

    void on_boton5_clicked();

    void on_boton6_clicked();

    void on_boton7_clicked();

    void on_boton8_clicked();

    void on_boton9_clicked();

    void on_boton0_clicked();

    void on_boton_borrar_clicked();

    void on_boton_por_clicked();

    void on_boton_division_clicked();

    void on_boton_raiz_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
