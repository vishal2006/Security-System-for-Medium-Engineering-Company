#ifndef EMPSEARCH_H
#define EMPSEARCH_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

namespace Ui {
class empsearch;
}

class empsearch : public QDialog
{
    Q_OBJECT

public:
    explicit empsearch(QWidget *parent = nullptr);
    ~empsearch();

private slots:
    void on_Search_clicked();

    void on_pushButton_clicked();

private:
    Ui::empsearch *ui;
    QSqlDatabase mydb;

};

#endif // EMPSEARCH_H
