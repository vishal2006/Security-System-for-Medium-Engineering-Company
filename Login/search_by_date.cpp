#include "search_by_date.h"
#include "ui_search_by_date.h"
#include<QMessageBox>
#include "searchvisitor2.h"

search_by_date::search_by_date(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search_by_date)
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

search_by_date::~search_by_date()
{
    delete ui;
}

void search_by_date::on_Search_bd_button_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry =new QSqlQuery(mydb);
    QString date;
    date=ui->search_bd->text();
    qry->prepare("select * from DB_Visitor where Date glob'" + date +"*"+ "'");
    qry->exec();
    //QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    mydb.close();
    qDebug()<<(model->rowCount());
}

void search_by_date::on_pushButton_clicked()
{
    hide();
    searchvisitor2 sv;
    sv.setModal(true);
    sv.exec();
}
