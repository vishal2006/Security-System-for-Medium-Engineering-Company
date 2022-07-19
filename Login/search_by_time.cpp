#include "search_by_time.h"
#include "ui_search_by_time.h"
#include<QMessageBox>
search_by_time::search_by_time(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search_by_time)
{
    ui->setupUi(this);
    ui->setupUi(this);
    QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/devas/source/repos/OOPs_try/OOPs_try/Employees.db");
    if(mydb.open()){
         //ui->label->setText("Failed to open database");
         QMessageBox::information(this,tr("Database Open"),tr("Welcome to Search window"));
    }
    else{
        //ui->label->setText("Connected....");
        QMessageBox::critical(this,tr("Database not Open"),tr("Unable to open"));
    }
}

search_by_time::~search_by_time()
{
    delete ui;
}

void search_by_time::on_search_bt_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry =new QSqlQuery(mydb);
    QString time;
    time=ui->Enter_time->text();
    qry->prepare("select * from DB_Visitor where Entry_time glob'" + time +"*"+ "'");
    qry->exec();
    //QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    mydb.close();
    qDebug()<<(model->rowCount());
}
