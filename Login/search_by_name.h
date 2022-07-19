#ifndef SEARCH_BY_NAME_H
#define SEARCH_BY_NAME_H
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

#include <QDialog>

namespace Ui {
class search_by_name;
}

class search_by_name : public QDialog
{
    Q_OBJECT

public:
    explicit search_by_name(QWidget *parent = nullptr);
    ~search_by_name();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::search_by_name *ui;
    QSqlDatabase mydb;
};

#endif // SEARCH_BY_NAME_H
