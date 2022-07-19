#ifndef EMPINS_H
#define EMPINS_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

namespace Ui {
class empins;
}

class empins : public QDialog
{
    Q_OBJECT

public:
    explicit empins(QWidget *parent = nullptr);
    ~empins();

private slots:
    void on_Insert_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::empins *ui;
    QSqlDatabase mydb;

};

#endif // EMPINS_H
