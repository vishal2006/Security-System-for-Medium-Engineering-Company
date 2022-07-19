#include "search_by_name.h"
#include "ui_search_by_name.h"
#include<QMessageBox>
#include "searchvisitor2.h"

search_by_name::search_by_name(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search_by_name)
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

search_by_name::~search_by_name()
{
    delete ui;
}

void search_by_name::on_pushButton_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery* qry =new QSqlQuery(mydb);
    QString name;
    name=ui->get_s_name->text();
    qry->prepare("select * from DB_Visitor where name glob'" + name +"*"+ "'");
    qry->exec();
    //QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery(*qry);
    ui->tableView->setModel(model);
    mydb.close();
    qDebug()<<(model->rowCount());
}

void search_by_name::on_pushButton_2_clicked()
{
    hide();
    searchvisitor2 sv;
    sv.setModal(true);
    sv.exec();
}
