#ifndef PAGES_ADD_H
#define PAGES_ADD_H

#include <QWidget>
#include "flight.h"
#include "graph.h"

namespace Ui {
class pages_add;
}

class pages_add : public QWidget
{
    Q_OBJECT

public:
    explicit pages_add(QWidget *parent = nullptr);
    ~pages_add();

private slots:
    void on_btn_yes_clicked();

    void on_btn_no_clicked();

signals:
    void send_AddFlight(Flight flight);
private:
    Ui::pages_add *ui;
};

void InitComboBox(Ui::pages_add* ui);

#endif // PAGES_ADD_H
