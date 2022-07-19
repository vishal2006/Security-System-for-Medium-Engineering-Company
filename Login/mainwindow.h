#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"secwindow.h"
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    /*QSqlDatabase mydb;
    void connclose(){
        mydb.close();
    }
    bool connopen(){
        QSqlDatabase mydb= QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/devas/Desktop/OOPs/OOPs/Employees.db");
        if(!mydb.open()){
            return false;
        }
        else{
            return true;
        }
    }*/
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_Login_clicked();

    void on_pushButton_Exit_clicked();

private:
    Ui::MainWindow *ui;
    secwindow *secwin;
    //QSqlDatabase mydb;

};
#endif // MAINWINDOW_H
