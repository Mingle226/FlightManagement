#ifndef PAGES_EDIT_H
#define PAGES_EDIT_H

#include <QWidget>
#include "flight.h"
#include "graph.h"

namespace Ui {
class pages_edit;
}

class pages_edit : public QWidget
{
    Q_OBJECT

public:
    explicit pages_edit(QWidget *parent = nullptr);
    ~pages_edit();

private:
    Ui::pages_edit *ui;
    Flight* pflight;
public slots:
    void f1(QString id, QString cityFrom, QString cityTo, int startHour, int startMin, int endHour, int endMin);
    void testslot(int a);
private slots:
    void on_commandLinkButton_clicked();
    void on_btn_yes_clicked();
    void on_btn_no_clicked();
};

void InitComboBox(Ui::pages_edit* ui);
#endif // PAGES_EDIT_H
