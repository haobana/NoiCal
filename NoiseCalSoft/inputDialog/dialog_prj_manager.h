#ifndef DIALOG_PRJ_MANAGER_H
#define DIALOG_PRJ_MANAGER_H

#include <QDialog>
#include <QMouseEvent>

namespace Ui {
class Dialog_prj_manager;
}

class Dialog_prj_manager : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_prj_manager(QWidget *parent = nullptr);
    ~Dialog_prj_manager();
protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);


private slots:
    void on_close_clicked();

    void on_pushButton_create_prj_clicked();


    void on_pushButton_switch_clicked();

    void on_pushButton_del_clicked();

private:
    QPoint last;
    int canmove=0;
private:
    Ui::Dialog_prj_manager *ui;
    void initComboBox();
};

#endif // DIALOG_PRJ_MANAGER_H
