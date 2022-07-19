#ifndef SEARCHVISITOR2_H
#define SEARCHVISITOR2_H

#include <QDialog>
#include"search_by_name.h"
#include"search_by_date.h"
#include"search_with_time.h"

namespace Ui {
class searchvisitor2;
}

class searchvisitor2 : public QDialog
{
    Q_OBJECT

public:
    explicit searchvisitor2(QWidget *parent = nullptr);
    ~searchvisitor2();

private slots:
    void on_Searchbyname_clicked();

    void on_Searchbydate_clicked();

    void on_searchbytime_clicked();

    void on_pushButton_clicked();

private:
    Ui::searchvisitor2 *ui;
    search_by_name *searchname;
    search_by_date *searchdate;
    search_with_time *searchTime;
};

#endif // SEARCHVISITOR2_H
