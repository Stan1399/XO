#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "mylabel.h"
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->current_player->setText("Ход первого игрока");
}

void MainWindow::keyPressEvent(QKeyEvent *event) {

   if (event->key() == Qt::Key_Escape) {
       ui->label->setText("Esc pressed");
   }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button_clicked(QPushButton *btn)
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        btn->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        btn->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    btn->setEnabled(false);
    if (check())
    {
        ui->north_button->setDisabled(true);
        ui->north_west_button->setDisabled(true);
        ui->north_east_button->setDisabled(true);
        ui->central_button->setDisabled(true);
        ui->west_button->setDisabled(true);
        ui->east_button->setDisabled(true);
        ui->south_east_button->setDisabled(true);
        ui->south_west_button->setDisabled(true);
        ui->south_button->setDisabled(true);
    }
}

void who_won(QLabel *label)
{
    if (label->text() == "Ход первого игрока")
        label->setText("Поздравляем второго игрока с победой!");
    else
        label->setText("Поздравляем первого игрока с победой!");
}

bool MainWindow::check()
{
    if (ui->north_west_button->text() != "" && ui->north_west_button->text() == ui->west_button->text() && ui->north_west_button->text() == ui->south_west_button->text())
    {
        who_won(ui->current_player);
        return true;
    }
    if (ui->north_button->text() != "" && ui->north_button->text() == ui->central_button->text() && ui->north_button->text() == ui->south_button->text())
    {
        who_won(ui->current_player);
        return true;
    }
    if (ui->north_east_button->text() != "" && ui->north_east_button->text() == ui->east_button->text() && ui->north_east_button->text() == ui->south_east_button->text())
    {
        who_won(ui->current_player);
        return true;
    }
    if (ui->north_button->text() != "" && ui->north_button->text() == ui->north_west_button->text() && ui->north_button->text() == ui->north_east_button->text())
    {
        who_won(ui->current_player);
        return true;
    }
    if (ui->central_button->text() != "" && ui->west_button->text() == ui->central_button->text() && ui->central_button->text() == ui->east_button->text())
    {
        who_won(ui->current_player);
        return true;
    }
    if (ui->south_button->text() != "" && ui->south_button->text() == ui->south_west_button->text() && ui->south_button->text() == ui->south_east_button->text())
    {
        who_won(ui->current_player);
        return true;
    }
    if (ui->central_button->text() != "" && ui->central_button->text() == ui->south_west_button->text() && ui->central_button->text() == ui->north_east_button->text())
    {
        who_won(ui->current_player);
        return true;
    }
    if (ui->central_button->text() != "" && ui->central_button->text() == ui->south_east_button->text() && ui->central_button->text() == ui->north_west_button->text())
    {
        who_won(ui->current_player);
        return true;
    }
    if (ui->central_button->text() != "" && ui->west_button->text() != "" && ui->north_west_button->text() != "" && ui->south_west_button->text() != "" && ui->east_button->text() != "" && ui->south_east_button->text() != "" && ui->north_east_button->text() != "" && ui->north_button->text() != "" && ui->south_button->text() != "")
    {
        ui->current_player->setText("Ничья!");
        return true;
    }
    return false;
}

void MainWindow::on_north_west_button_clicked()
{
    button_clicked(ui->north_west_button);
}

void MainWindow::on_central_button_clicked()
{
    button_clicked(ui->central_button);
}

void MainWindow::on_north_button_clicked()
{
    button_clicked(ui->north_button);
}


void MainWindow::on_north_east_button_clicked()
{
    button_clicked(ui->north_east_button);
}

void MainWindow::on_east_button_clicked()
{
    button_clicked(ui->east_button);
}

void MainWindow::on_south_west_button_clicked()
{
    button_clicked(ui->south_west_button);
}

void MainWindow::on_west_button_clicked()
{
    button_clicked(ui->west_button);
}

void MainWindow::on_south_button_clicked()
{
    button_clicked(ui->south_button);
}

void MainWindow::on_south_east_button_clicked()
{
    button_clicked(ui->south_east_button);
}
