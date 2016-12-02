#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->progressBar_1->setValue(0);
}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_button_1_ok_clicked()
{

}

void Dialog::on_button_2_cancel_clicked()
{

}
