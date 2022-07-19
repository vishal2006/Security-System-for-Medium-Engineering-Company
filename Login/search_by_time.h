#ifndef SEARCH_BY_TIME_H
#define SEARCH_BY_TIME_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>


namespace Ui {
class search_by_time;
}

class search_by_time : public QDialog
{
    Q_OBJECT

public:
    explicit search_by_time(QWidget *parent = nullptr);
    ~search_by_time();

private slots:
    void on_search_bt_clicked();

private:
    Ui::search_by_time *ui;
    QSqlDatabase mydb;
};

#endif // SEARCH_BY_TIME_H
