#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_button_1_ok_clicked();

    void on_button_2_cancel_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
