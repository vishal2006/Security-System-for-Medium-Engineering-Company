#include "empsearch.h"
#include "ui_empsearch.h"
#include "thirdwinemp.h"
#include<QMessageBox>
#include<QTableView>
empsearch::empsearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::empsearch)
{
    ui->setupUi(this);
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/devas/Music/Employees.db");
    if(mydb.open()){
         //ui->label->setText("Failed to open database");
         QMessageBox::information(this,tr("Database Open"),tr("Welcome to Search window"));
    }
    else{
        //ui->label->setText("Connected....");
        QMessageBox::critical(this,tr("Database not Open"),tr("Unable to open"));
    }
}

empsearch::~empsearch()
{
    delete ui;
}

void empsearch::on_Search_clicked()
{
    //QSqlQuery *qry;
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry =new QSqlQuery(mydb);
    QString name;
    name=ui->lineEdit_emsear->text();
    qry->prepare("select * from DB_Employee where name glob'" + name +"*"+ "'");
    qry->exec();
    //QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    mydb.close();
    qDebug()<<(model->rowCount());
}

void empsearch::on_pushButton_clicked()
{
    hide();
    thirdwinemp twe;
    twe.setModal(true);
    twe.exec();
}
