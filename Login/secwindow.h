#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QDialog>
#include "thirdwinemp.h"
#include "thirdwin.h"

namespace Ui {
class secwindow;
}

class secwindow : public QDialog
{
    Q_OBJECT

public:
    explicit secwindow(QWidget *parent = nullptr);
    ~secwindow();

private slots:
    void on_Employee_clicked();

    void on_Visitor_clicked();

private:
    Ui::secwindow *ui;
    thirdwinemp *thirdwinem;
    thirdwin *thirdwinvis;
};

#endif // SECWINDOW_H
