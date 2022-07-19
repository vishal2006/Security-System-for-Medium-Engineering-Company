#include "search_with_time.h"
#include "ui_search_with_time.h"
#include<QMessageBox>
#include "searchvisitor2.h"

search_with_time::search_with_time(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search_with_time)
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

search_with_time::~search_with_time()
{
    delete ui;
}

void search_with_time::on_search_button_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry =new QSqlQuery(mydb);
    QString time;
    time=ui->enter_time->text();
    qry->prepare("select * from DB_Visitor where Entry_time glob'" + time +"*"+ "'");
    qry->exec();
    //QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    mydb.close();
    qDebug()<<(model->rowCount());
}

void search_with_time::on_pushButton_clicked()
{
    hide();
    searchvisitor2 sv;
    sv.setModal(true);
    sv.exec();
}
