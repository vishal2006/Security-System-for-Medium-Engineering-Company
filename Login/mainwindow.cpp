#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QPixmap>
#include <QPalette>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if(username=="Security" && password=="123456"){
       hide();
       secwin =new secwindow(this);
       secwin->show();
    }
    else{
      QMessageBox::information(this,"Login","Username and Password is not correct");
    }
}

void MainWindow::on_pushButton_Exit_clicked()
{
    close();
}
