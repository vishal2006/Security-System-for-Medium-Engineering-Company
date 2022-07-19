#include "visitorins.h"
#include "ui_visitorins.h"
#include<QMessageBox>
visitorins::visitorins(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::visitorins)
{
    ui->setupUi(this);
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
     mydb.setDatabaseName("C:/Users/devas/source/repos/OOPs_try/OOPs_try/Employees.db");
     if(mydb.open()){
          //ui->label->setText("Failed to open database");
          QMessageBox::information(this,tr("Database Open"),tr("Welcome to insert Window"));
     }
     else{
         //ui->label->setText("Connected....");
         QMessageBox::critical(this,tr("Database not Open"),tr("Unable to open"));
}
}
visitorins::~visitorins()
{
    delete ui;
}

void visitorins::on_pushButton_clicked()
{
    QString NAME,AGE,SALARY,CONTACT_NO,POST;
    NAME=ui->get
    AGE=ui->get_age->text();
    SALARY=ui->lineEdit_salary->text();
    CONTACT_NO=ui->lineEdit_contact->text();
    POST=ui->lineEdit_post->text();
    if(!mydb.open()){
        ui->label->setText("Failed to open database");
    }
    QSqlQuery qry;
    qry.prepare("insert into DB_Employee(NAME,AGE,SALARY,CONTACT_NO,POST) values('" + NAME + "','" + AGE + "'," + SALARY + ",'" + CONTACT_NO + "','" + POST + "')");
    if(qry.exec()){
        QMessageBox::critical(this,tr("save"),tr("Entry saved"));
    }
    else{
        QMessageBox::critical(this,tr("Not save"),qry.lastError().text());
    }
}
