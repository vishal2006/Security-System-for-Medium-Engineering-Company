#ifndef DELETEMP_H
#define DELETEMP_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

namespace Ui {
class deletemp;
}

class deletemp : public QDialog
{
    Q_OBJECT

public:
    explicit deletemp(QWidget *parent = nullptr);
    ~deletemp();

private slots:
    void on_delete_but_clicked();

    void on_pushButton_clicked();

private:
    Ui::deletemp *ui;
    QSqlDatabase mydb;
};

#endif // DELETEMP_H
