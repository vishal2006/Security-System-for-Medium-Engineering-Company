#ifndef THIRDWIN_H
#define THIRDWIN_H

#include <QDialog>
#include"visitorinsert_win.h"
#include"searchvisitor2.h"
namespace Ui {
class thirdwin;
}

class thirdwin : public QDialog
{
    Q_OBJECT

public:
    explicit thirdwin(QWidget *parent = nullptr);
    ~thirdwin();

private slots:
    void on_InsVisButton_clicked();

    void on_SearchVis_button_clicked();

    void on_Exit_button_clicked();

    void on_DelVisButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::thirdwin *ui;
    visitorinsert_win *visinsert;

    searchvisitor2 *searchvisitor;
};

#endif // THIRDWIN_H
