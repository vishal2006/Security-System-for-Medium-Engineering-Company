#ifndef SEARCH_BY_DATE_H
#define SEARCH_BY_DATE_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>


namespace Ui {
class search_by_date;
}

class search_by_date : public QDialog
{
    Q_OBJECT

public:
    explicit search_by_date(QWidget *parent = nullptr);
    ~search_by_date();

private slots:
    void on_Search_bd_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::search_by_date *ui;
    QSqlDatabase mydb;
};

#endif // SEARCH_BY_DATE_H
