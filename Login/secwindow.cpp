#include "secwindow.h"
#include "ui_secwindow.h"
#include "thirdwinemp.h"
#include "thirdwin.h"

secwindow::secwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secwindow)
{
    ui->setupUi(this);
}

secwindow::~secwindow()
{
    delete ui;
}

void secwindow::on_Employee_clicked()
{
    hide();
    thirdwinemp twe;
    twe.setModal(true);
    twe.exec();
}

void secwindow::on_Visitor_clicked()
{
    hide();
    thirdwin vis;
    vis.setModal(true);
    vis.exec();
}
