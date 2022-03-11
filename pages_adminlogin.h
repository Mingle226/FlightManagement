#ifndef PAGES_ADMINLOGIN_H
#define PAGES_ADMINLOGIN_H

#include <QWidget>

namespace Ui {
class Pages_adminLogin;
}

class Pages_adminLogin : public QWidget
{
    Q_OBJECT

public:
    explicit Pages_adminLogin(QWidget *parent = nullptr);
    ~Pages_adminLogin();

private slots:
    void on_btn_login_clicked();

    void on_pushButton_clicked();

signals:
    void sendLoginAccess();
private:
    Ui::Pages_adminLogin *ui;

};

#endif // PAGES_ADMINLOGIN_H
