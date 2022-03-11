#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "graph.h"
#include "QTreeWidgetItem"

#include <QFile>
#include <QKeyEvent>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    addCss();
//    清空列表 设置为1列
    ui->treeWidget->clear();
    ui->treeWidget->setColumnCount(1);
//    定义一个StringList
    QStringList qsl;
    qsl<<"航空订票管理系统";

    pf = new QTreeWidgetItem(ui->treeWidget,qsl);
    ui->treeWidget->addTopLevelItem(pf);

    qsl.clear();
    qsl<<"管理员模式";
    p1 = new QTreeWidgetItem(pf,qsl);

    qsl.clear();
    qsl<<"用户模式";
    p2 = new QTreeWidgetItem(pf,qsl);

    qsl.clear();
    qsl<<"使用指南";
    p3 = new QTreeWidgetItem(pf,qsl);

    pf->addChild(p1);
    pf->addChild(p2);
    pf->addChild(p3);

    auto f1 =[&](){
        server.show();
    };
    connect(this,&MainWindow::ServerLoginSuccess,this,f1);

    auto f2 =[&](){
        user.show();
    };
    connect(this,&MainWindow::UserLoginSuccess,this,f2);

    CreateGraph();
    Graph=getGraph();
    InitGragh();

    qDebug()<<Graph->num_edge;
    Graph->G[10].FirstEdge->pflight->output();
    if(Graph->G[10].FirstEdge->Next!=nullptr)
        Graph->G[10].FirstEdge->Next->pflight->output();

    QString labelStr = QString("<p style='line-height:42px'>%1").arg("&emsp;&emsp;您好，欢迎使用春秋航空航班信息查询管理系统，您可以通过本页面进入管理员模式，在下面的文本框中输入正确的密码，即可进入管理员模式，对航班信息进行统一的查询管理，添加航班，修改航班信息，取消航班，以及对航班数据进行任意的合法操作，对此系统有任何的观点，欢迎您来提出意见和反馈，感谢您的使用");
    ui->label->setText(labelStr);
    labelStr = QString("<p style='line-height:42px'>%1").arg("&emsp;&emsp;您好，欢迎使用春秋航空航班信息查询管理系统，通过本系统用户可进行航班信息的查询了解到，指定航班的详细信息查询方式可以通过使肥城市起飞，城市和抵达城市进行搜寻相关符合条件的航班，同时可进行购买操作，再次见面下，您不需要进行登录即可使用。");
    ui->label_2->setText(labelStr);
    labelStr = QString("<p style='line-height:42px'>%1").arg("&emsp;&emsp;您好，欢迎使用春秋航空航班信息查询管理系统，本系统基于C加加语言，qt界面设计进行开发，可在windows MAC等环境下进行运行，管理系统当中包含管理员模式和用户模式相关，后台工作人员可以根据相关的密码进入管理员模式，对航班信息进行添加修改，删除查询等操作，有超级管理员权限用户模式无需登录，可查询相关城市所含有的航班以及其详细信息，在使用过程当中，欢迎您来提出任何意见和反馈，感谢您的使用\n");
    ui->label_3->setText(labelStr);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    addCss();
}

void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    if(item==pf)
        ui->stackedWidget->setCurrentIndex(0);
    if(item==p1)
        ui->stackedWidget->setCurrentIndex(1);
    if(item==p2)
        ui->stackedWidget->setCurrentIndex(2);
    if(item==p3)
        ui->stackedWidget->setCurrentIndex(3);

}


void MainWindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text().compare("admin")==0)
        ServerLoginSuccess();
    else
    {
        QMessageBox::information(this,
            tr("Information消息"),
            tr("密码错误，请重新尝试"),
            QMessageBox::Ok ,
            QMessageBox::Ok);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    UserLoginSuccess();
}


void MainWindow::on_pushButton_3_clicked()
{
    this->destroy();
}

void MainWindow::addCss()
{
    auto str = QCoreApplication::applicationDirPath();
    QFile f;
    f.setFileName(str+"//"+"style.css");
    f.open(QIODevice::ReadOnly);
    QString str_css = f.readAll();
    this->setStyleSheet(str_css);

//        f.setFileName(str+"//"+"style2.css");
//        f.open(QIODevice::ReadOnly);
//        str_css = f.readAll();

    user.setStyleSheet(str_css);
    server.setStyleSheet(str_css);
}
