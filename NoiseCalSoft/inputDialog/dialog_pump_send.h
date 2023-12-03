#ifndef DIALOG_PUMP_SEND_H
#define DIALOG_PUMP_SEND_H

#include "inputbasedialog.h"
#include <QDialog>
#include <QMap>
#include <QObject>
#include <QMouseEvent>

typedef struct PumpSend_noise
{
    QString number;  //编号
    QString brand;  //品牌
    QString model;   //型号
    QString type;  //类型 圆还是方
    QString diameter;  //直径
    QString length;  //长
    QString width;  //宽
    QString size;  //尺寸
    QString noi_63;     //63hz
    QString noi_125;     //125hz
    QString noi_250;     //250hz
    QString noi_500;     //500hz
    QString noi_1k;     //1khz
    QString noi_2k;     //2khz
    QString noi_4k;     //4khz
    QString noi_8k;     //8khz
    QString noi_total;  //总量
    QString atten_63;     //63hz
    QString atten_125;     //125hz
    QString atten_250;     //250hz
    QString atten_500;     //500hz
    QString atten_1k;     //1khz
    QString atten_2k;     //2khz
    QString atten_4k;     //4khz
    QString atten_8k;     //8khz
    QString refl_63;     //63hz
    QString refl_125;     //125hz
    QString refl_250;     //250hz
    QString refl_500;     //500hz
    QString refl_1k;     //1khz
    QString refl_2k;     //2khz
    QString refl_4k;     //4khz
    QString refl_8k;     //8khz
    QString getMode;    //

}PumpSend_noise;

namespace Ui {
class Dialog_pump_send;
}

class Dialog_pump_send : public InputBaseDialog
{
    Q_OBJECT

public:
    explicit Dialog_pump_send(QString type = "", QWidget *parent = nullptr, int editRow = -1, const PumpSend_noise& data = PumpSend_noise());
    Dialog_pump_send(QWidget *parent = nullptr, int editRow = -1, const PumpSend_noise& data = PumpSend_noise()){}
    ~Dialog_pump_send();
    void total_noi();
    void* getNoi() override;

private slots:
    void on_close_clicked();

    void on_comboBox_model_currentTextChanged(const QString &arg1);

    void calTotalNoise();

    void calReflNoi();

    void on_pushButton_confirm_clicked();

    void on_radioButton_known_clicked();

    void on_radioButton_formula_clicked();

    void on_radioButton_circle_clicked();

    void on_radioButton_rect_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog_pump_send *ui;
    QVector<QString> pumpSendModel;      //保存所有型号
    QMap<int,QString> eightNoi;     //八个分频的噪音,用于数据库获取数据
    int editRow;    //当前修改行，如果是新建就为-1
    PumpSend_noise* noi;     //噪音结构体
};

#endif // DIALOG_PUMP_SEND_H