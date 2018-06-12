#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reader.h"
#include "worker.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_login_clicked()
{
    reader * R =new reader;
    R->show();

    worker * W =new worker;
    W->show();
}
