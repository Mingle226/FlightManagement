#include "pages_adminlogin.h"
#include "ui_pages_adminlogin.h"

Pages_adminLogin::Pages_adminLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pages_adminLogin)
{
    ui->setupUi(this);
}

Pages_adminLogin::~Pages_adminLogin()
{
    delete ui;
}

void Pages_adminLogin::on_btn_login_clicked()
{
    sendLoginAccess();
}


void Pages_adminLogin::on_pushButton_clicked()
{
    exit(0);
}

