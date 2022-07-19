#include "thirdwinemp.h"
#include "ui_thirdwinemp.h"
#include "secwindow.h"
#include "empsearch.h"
#include "empins.h"
#include "deletemp.h"

thirdwinemp::thirdwinemp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdwinemp)
{
    ui->setupUi(this);
}

thirdwinemp::~thirdwinemp()
{
    delete ui;
}

void thirdwinemp::on_Search_clicked()
{
  hide();
  empsearch empsearch;
  empsearch.setModal(true);
  empsearch.exec();
}

void thirdwinemp::on_Insert_clicked()
{
  hide();
  empins ins;
  ins.setModal(true);
  ins.exec();
}

void thirdwinemp::on_Delete_clicked()
{
     hide();
     deletemp de;
     de.setModal(true);
     de.exec();
}

void thirdwinemp::on_Exit_clicked()
{   hide();
    secwindow secwin;
    secwin.setModal(true);
    secwin.exec();
}
