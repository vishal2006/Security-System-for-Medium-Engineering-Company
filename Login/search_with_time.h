#ifndef SEARCH_WITH_TIME_H
#define SEARCH_WITH_TIME_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

namespace Ui {
class search_with_time;
}

class search_with_time : public QDialog
{
    Q_OBJECT

public:
    explicit search_with_time(QWidget *parent = nullptr);
    ~search_with_time();

private slots:
    void on_search_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::search_with_time *ui;
    QSqlDatabase mydb;
};

#endif // SEARCH_WITH_TIME_H
