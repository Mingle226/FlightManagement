#ifndef PAGES_USER_H
#define PAGES_USER_H

#include <QWidget>
#include "flight.h"
#include "graph.h"
#include "QMessageBox"

namespace Ui {
class Pages_User;
}

class Pages_User : public QWidget
{
    Q_OBJECT

public:
    explicit Pages_User(QWidget *parent = nullptr);
    ~Pages_User();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Pages_User *ui;
};

static int cnt;
static SqFlight_serve* FlightList_user;

//初始化表头
void InitTable(Ui::Pages_User* ui);

//始发城市、抵达城市载入内容
void InitComboBox(Ui::Pages_User* ui);

int partition(SqFlight_serve *SqFlightList, int low, int high);

void quick_sort2(SqFlight_serve *SqFlightList, int start, int end);

void showCenterAlign(Ui::Pages_User* ui,int cnt);

#endif // PAGES_USER_H
