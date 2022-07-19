#ifndef VISITORINS_H
#define VISITORINS_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>


namespace Ui {
class visitorins;
}

class visitorins : public QDialog
{
    Q_OBJECT

public:
    explicit visitorins(QWidget *parent = nullptr);
    ~visitorins();

private slots:
    void on_pushButton_clicked();

private:
    Ui::visitorins *ui;
    QSqlDatabase mydb;
    visitorins *visins;
};

#endif // VISITORINS_H
