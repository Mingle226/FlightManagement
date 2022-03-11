#ifndef ADD_FLIGHT_H
#define ADD_FLIGHT_H

#include <QWidget>
#include "flight.h"
namespace Ui {
class Add_Flight;
}

class Add_Flight : public QWidget
{
    Q_OBJECT

public:
    explicit Add_Flight(QWidget *parent = nullptr);
    ~Add_Flight();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

signals:
    void send_AddFlight(Flight flight);

private:
    Ui::Add_Flight *ui;
};

#endif // ADD_FLIGHT_H
