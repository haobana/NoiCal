#ifndef ROOM_CAL_TOTAL_H
#define ROOM_CAL_TOTAL_H

#include <QWidget>

namespace Ui {
class room_cal_total;
}

class room_cal_total : public QWidget
{
    Q_OBJECT

public:
    explicit room_cal_total(QWidget *parent = nullptr);
    ~room_cal_total();

    void change_outer_cal();

    void setInfo(QString zhushuqu, QString deck,
                 QString room_number, QString noise_limit, QString duct_num);    //设置基本信息，主竖区、甲板、房间编号、噪声限值、主风管数量
private:
    Ui::room_cal_total *ui;
};

#endif // ROOM_CAL_TOTAL_H
