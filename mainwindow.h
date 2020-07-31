#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void button_clicked(QPushButton *);
    void something();
private:
    void keyPressEvent(QKeyEvent *);
    void moveEvent(QMoveEvent *);

private slots:
    void on_north_west_button_clicked();

    void on_central_button_clicked();

    void on_north_button_clicked();

    void on_north_east_button_clicked();

    void on_west_button_clicked();

    void on_east_button_clicked();

    void on_south_west_button_clicked();

    void on_south_button_clicked();

    void on_south_east_button_clicked();

    bool check();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
