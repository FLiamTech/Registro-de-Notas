#include "ingresoform.h"
#include "ui_ingresoform.h"

IngresoForm::IngresoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IngresoForm)
{
    ui->setupUi(this);
}

IngresoForm::~IngresoForm()
{
    delete ui;
}
