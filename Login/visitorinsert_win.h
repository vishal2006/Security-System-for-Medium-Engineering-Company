#ifndef VISITORINSERT_WIN_H
#define VISITORINSERT_WIN_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

namespace Ui {
class visitorinsert_win;
}

class visitorinsert_win : public QDialog
{
    Q_OBJECT

public:
    explicit visitorinsert_win(QWidget *parent = nullptr);
    ~visitorinsert_win();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::visitorinsert_win *ui;
    QSqlDatabase mydb;
};

#endif // VISITORINSERT_WIN_H
