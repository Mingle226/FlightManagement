#ifndef PAGES_SERVE_H
#define PAGES_SERVE_H

#include <QWidget>
#include "flight.h"
#include "graph.h"
#include "pages_add.h"
#include "pages_edit.h"
#include "qstringlist.h"

namespace Ui {
class Pages_Serve;
}

class Pages_Serve : public QWidget
{
    Q_OBJECT

public:
    explicit Pages_Serve(QWidget *parent = nullptr);
    ~Pages_Serve();

    virtual void keyPressEvent(QKeyEvent *event);


private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

//    void f1(Flight id);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

public:
signals:
//    void send_editFlight(QString id, QString cityFrom, QString cityTo,Date date, int startHour, int startMin, int endHour, int endMin, int price, int price_vip);
    void send_editFlight(QString id,QString cityFrom, QString cityTo,int startHour, int startMin, int endHour, int endMin);
    void test(int a);
private:
    Ui::Pages_Serve *ui;
    pages_add add;
    pages_edit edit;  
    void addCss2();
};

void InitTable(Ui::Pages_Serve* ui);

void updateTable(Ui::Pages_Serve* ui);

int partition(SqFlight_serve *SqFlightList, int low, int high);

void quick_sort(SqFlight_serve *SqFlightList, int start, int end);


#endif // PAGES_SERVE_H
