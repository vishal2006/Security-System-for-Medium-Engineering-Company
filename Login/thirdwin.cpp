#include "thirdwin.h"
#include "ui_thirdwin.h"
#include "secwindow.h"
#include "searchvisitor2.h"
#include "visitorinsert_win.h"

thirdwin::thirdwin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdwin)
{
    ui->setupUi(this);
}

thirdwin::~thirdwin()
{
    delete ui;
}

void thirdwin::on_InsVisButton_clicked()
{
    hide();
    visitorinsert_win viw;
    viw.setModal(true);
    viw.exec();
}

void thirdwin::on_SearchVis_button_clicked()
{
    hide();
    searchvisitor2 sv;
    sv.setModal(true);
    sv.exec();
}

void thirdwin::on_Exit_button_clicked()
{
    hide();
    secwindow sw;
    sw.setModal(true);
    sw.exec();
}



void thirdwin::on_pushButton_clicked()
{
    visitorinsert_win viw;
    viw.setModal(true);
    viw.exec();
}
