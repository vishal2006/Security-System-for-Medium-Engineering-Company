#ifndef THIRDWINEMP_H
#define THIRDWINEMP_H

#include <QDialog>
#include "empins.h"
#include "empsearch.h"
#include "deletemp.h"

namespace Ui {
class thirdwinemp;
}

class thirdwinemp : public QDialog
{
    Q_OBJECT

public:
    explicit thirdwinemp(QWidget *parent = nullptr);
    ~thirdwinemp();

private slots:
    void on_Search_clicked();

    void on_Insert_clicked();

    void on_Delete_clicked();

    void on_Exit_clicked();

private:
    Ui::thirdwinemp *ui;
    empins *empi;
    empsearch *empsea;
    deletemp *delemp;

};

#endif // THIRDWINEMP_H
