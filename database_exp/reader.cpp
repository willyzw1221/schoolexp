#include "reader.h"
#include "ui_reader.h"

reader::reader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
}

reader::~reader()
{
    delete ui;
}
