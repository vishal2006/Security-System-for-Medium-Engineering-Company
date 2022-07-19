#include "searchvisitor2.h"
#include "ui_searchvisitor2.h"
#include "thirdwin.h"
#include "search_by_date.h"
#include "search_by_name.h"
#include "search_with_time.h"

searchvisitor2::searchvisitor2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchvisitor2)
{
    ui->setupUi(this);
}

searchvisitor2::~searchvisitor2()
{
    delete ui;
}

void searchvisitor2::on_Searchbyname_clicked()
{
    hide();
    search_by_name sbn;
    sbn.setModal(true);
    sbn.exec();

}

void searchvisitor2::on_Searchbydate_clicked()
{
    hide();
    search_by_date sbd;
    sbd.setModal(true);
    sbd.exec();
}

void searchvisitor2::on_searchbytime_clicked()
{
    hide();
    search_with_time swt;
    swt.setModal(true);
    swt.exec();

}

void searchvisitor2::on_pushButton_clicked()
{
    hide();
    thirdwin tw;
    tw.setModal(true);
    tw.exec();
}
