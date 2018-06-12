#include "worker.h"
#include "ui_worker.h"

worker::worker(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::worker)
{
    ui->setupUi(this);
}

worker::~worker()
{
    delete ui;
}
