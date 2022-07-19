#include "visitorinsert_win.h"
#include "ui_visitorinsert_win.h"
#include<QMessageBox>
#include "thirdwin.h"

visitorinsert_win::visitorinsert_win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::visitorinsert_win)
{
    ui->setupUi(this);
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
     mydb.setDatabaseName("C:/Users/devas/Music/Employees.db");
     if(mydb.open()){
          //ui->label->setText("Failed to open database");
          QMessageBox::information(this,tr("Database Open"),tr("Welcome to insert Window"));
     }
     else{
         //ui->label->setText("Connected....");
          QMessageBox::critical(this,tr("Database not Open"),tr("Unable to open"));

     }
}

visitorinsert_win::~visitorinsert_win()
{
    delete ui;
}

void visitorinsert_win::on_pushButton_clicked()
{
    QString NAME,AGE,CONTACT_NO,EQUIP,PURPOSE,VEHICLE,DATE,ENTRY,EXIT;
    NAME=ui->get_name->text();
    AGE=ui->get_age->text();
    CONTACT_NO=ui->get_contact->text();
    PURPOSE=ui->get_purpose->text();
    EQUIP=ui->get_equip->text();
    VEHICLE=ui->get_vehicle->text();
    DATE=ui->get_date->text();
    ENTRY=ui->get_entry->text();
    EXIT=ui->get_exit->text();

    if(!mydb.open()){
        ui->label->setText("Failed to open database");
    }
    QSqlQuery qry;
    qry.prepare("insert into DB_Visitor(NAME,AGE,CONTACT_NO,EQUIPMENT_HOLD,PURPOSE,VEHICLE,Date,Entry_time,Exit_time) values('" + NAME + "','" + AGE + "','" + CONTACT_NO + "','" + PURPOSE + "','"+EQUIP+"','"+VEHICLE+"','"+DATE+"','"+ENTRY+"','"+ EXIT+"')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("save"),tr("Entry saved"));
    }
    else{
        QMessageBox::critical(this,tr("Not save"),qry.lastError().text());
    }

}

void visitorinsert_win::on_pushButton_2_clicked()
{
    hide();
    thirdwin tw;
    tw.setModal(true);
    tw.exec();
}
