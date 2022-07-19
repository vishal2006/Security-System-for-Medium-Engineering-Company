#include "deletemp.h"
#include "ui_deletemp.h"
#include<QMessageBox>
#include "thirdwinemp.h"
deletemp::deletemp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deletemp)
{
    ui->setupUi(this);
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
     mydb.setDatabaseName("C:/Users/devas/Music/Employees.db");
     if(mydb.open()){
          //ui->label->setText("Failed to open database");
          QMessageBox::information(this,tr("Database Open"),tr("Welcome to Delete Window"));
     }
     else{
         //ui->label->setText("Connected....");
         QMessageBox::critical(this,tr("Database not Open"),tr("Unable to open"));
     }
}

deletemp::~deletemp()
{
    delete ui;
}

void deletemp::on_delete_but_clicked()
{
    QString Delentry;
    Delentry=ui->del_Entry->text();
    QSqlQuery qry;
    qry.prepare("delete from DB_Employee where name='" + Delentry + "'");
    if(qry.exec()){
        QMessageBox::information(this,tr("Entry Deleted"),tr("Welcome to delete window"));
    }
    else{
        QMessageBox::critical(this,tr("Not Deleted"),qry.lastError().text());
    }

}

void deletemp::on_pushButton_clicked()
{
    hide();
    thirdwinemp twe;
    twe.setModal(true);
    twe.exec();

}
