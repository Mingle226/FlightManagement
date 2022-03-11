#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTreeWidgetItem"
#include "pages_serve.h"
#include "pages_user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    virtual void keyPressEvent(QKeyEvent *event);

private slots:
//    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

signals:
    void ServerLoginSuccess();
    void UserLoginSuccess();


private:
    Ui::MainWindow *ui;
    Pages_User user;
    Pages_Serve server;

    QTreeWidgetItem *pf;
    QTreeWidgetItem *p1;
    QTreeWidgetItem *p2;
    QTreeWidgetItem *p3;
    void addCss();
};
#endif // MAINWINDOW_H
