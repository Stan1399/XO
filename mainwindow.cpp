#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->current_player->setText("Ход первого игрока");
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::check()
{
    if (ui->north_button->text() != "" && ui->north_button->text() == ui->north_west_button->text() && ui->north_button->text() == ui->north_east_button->text())
    {
        ui->current_player->setText("Победа!");
        return true;
    }
    if (ui->central_button->text() != "" && ui->west_button->text() == ui->central_button->text() && ui->central_button->text() == ui->east_button->text())
    {
        ui->current_player->setText("Победа!");
        return true;
    }
    if (ui->south_button->text() != "" && ui->south_button->text() == ui->south_west_button->text() && ui->south_button->text() == ui->south_east_button->text())
    {
        ui->current_player->setText("Победа!");
        return true;
    }
    if (ui->central_button->text() != "" && ui->central_button->text() == ui->south_west_button->text() && ui->central_button->text() == ui->north_east_button->text())
    {
        ui->current_player->setText("Победа!");
        return true;
    }
    if (ui->central_button->text() != "" && ui->central_button->text() == ui->south_east_button->text() && ui->central_button->text() == ui->north_west_button->text())
    {
        ui->current_player->setText("Победа!");
        return true;
    }
    return false;
}

void MainWindow::on_north_west_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->north_west_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->north_west_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->north_west_button->setEnabled(false);
    check();
}

void MainWindow::on_central_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->central_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->central_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->central_button->setEnabled(false);
    check();
}

void MainWindow::on_north_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->north_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->north_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->north_button->setEnabled(false);
    check();
}


void MainWindow::on_north_east_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->north_east_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->north_east_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->north_east_button->setEnabled(false);
    check();
}

void MainWindow::on_west_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->west_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->west_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->west_button->setEnabled(false);
    check();
}

void MainWindow::on_east_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->east_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->east_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->east_button->setEnabled(false);
    check();
}

void MainWindow::on_south_west_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->south_west_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->south_west_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->south_west_button->setEnabled(false);
    check();
}

void MainWindow::on_south_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->south_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->south_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->south_button->setEnabled(false);
    check();
}

void MainWindow::on_south_east_button_clicked()
{
    if (ui->current_player->text() == "Ход первого игрока")
    {
        ui->south_east_button->setText("X");
        ui->current_player->setText("Ход второго игрока");
    }
    else
    {
        ui->south_east_button->setText("O");
        ui->current_player->setText("Ход первого игрока");
    }
    ui->south_east_button->setEnabled(false);
    check();
}
