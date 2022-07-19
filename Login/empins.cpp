#include "empins.h"
#include "ui_empins.h"
#include "thirdwinemp.h"
#include<QMessageBox>
empins::empins(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::empins)
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

empins::~empins()
{
    delete ui;
}

void empins::on_Insert_button_clicked()
{
    QString NAME,AGE,SALARY,CONTACT_NO,POST,ID;
    //int id;
    NAME=ui->line_name->text();
    AGE=ui->lineEdit_age->text();
    SALARY=ui->lineEdit_salary->text();
    CONTACT_NO=ui->lineEdit_contact->text();
    POST=ui->lineEdit_post->text();
    //
    if(!mydb.open()){
        ui->label->setText("Failed to open database");
    }
    QSqlQuery qry,qry1;
    //qry1.prepare("SELECT ID FROM DB_Employee where name=Elliot_Alderdon");
    //qry1.exec();
    //ID=qry1.value();

    //id=query.record();
    qry.prepare("insert into DB_Employee(NAME,AGE,SALARY,CONTACT_NO,POST) values('" + NAME + "','" + AGE + "'," + SALARY + ",'" + CONTACT_NO + "','" + POST + "')");
    if(qry.exec()){

        QMessageBox::information(this,tr("Insert Window"),QString("Entry inserted\n ID alloted'"+ID));
    }
    else{
        QMessageBox::critical(this,tr("Not save"),qry.lastError().text());
    }

}

void empins::on_pushButton_clicked()
{
    hide();
    thirdwinemp twe;
    twe.setModal(true);
    twe.exec();
}
