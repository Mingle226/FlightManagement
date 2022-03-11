#include "pages_serve.h"
#include "ui_pages_serve.h"
#include "QMessageBox"

#include <QFile>
#include <QKeyEvent>

int partition(SqFlight_serve *SqFlightList, int low, int high) {
    SqFlight_serve key;
    key = SqFlightList[low];
    while (low < high) {
        while (low < high && SqFlightList[high].id.compare(key.id)>0)
            high--;
        if (low < high)
            SqFlightList[low++] = SqFlightList[high];
        while (low < high && SqFlightList[high].id.compare(key.id) <= 0)
            low++;
        if (low < high)
            SqFlightList[high--] = SqFlightList[low];
    }
    SqFlightList[low] = key;
    return low;
}

void quick_sort(SqFlight_serve *SqFlightList, int l, int r)
{
    if (l < r)
    {
        int i = l, j = r;
        SqFlight_serve x = SqFlightList[l];
        while (i < j)
        {
            while(i < j && SqFlightList[j].id.split('C')[1].toInt()>x.id.split('C')[1].toInt()) // 从右向左找第一个小于x的数
                j--;
            if(i < j)
                SqFlightList[i++] = SqFlightList[j];

            while(i < j && SqFlightList[i].id.split('C')[1].toInt()<x.id.split('C')[1].toInt()) // 从左向右找第一个大于等于x的数
                i++;
            if(i < j)
                SqFlightList[j--] = SqFlightList[i];
        }
        SqFlightList[i] = x;
        quick_sort(SqFlightList, l, i - 1); // 递归调用
        quick_sort(SqFlightList, i + 1, r);
    }
}

Pages_Serve::Pages_Serve(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pages_Serve)
{
    ui->setupUi(this);
    InitTable(ui);   
        addCss2();
//    updateTable(ui);
//    connect(&add,SIGNAL(send_AddFlight(Flight)),this,SLOT(f1(Flight)));
    connect(this,SIGNAL(send_editFlight(QString, QString,QString,int,int,int,int)),&edit,SLOT(f1(QString,QString,QString,int,int,int,int)));
    connect(this,SIGNAL(test(int)),&edit,SLOT(testslot(int)));
}

Pages_Serve::~Pages_Serve()
{
    delete ui;
}

void Pages_Serve::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_F6){
        addCss2();
    }
}

void InitTable(Ui::Pages_Serve* ui){
//        QMessageBox::about(NULL,("About消息框"),"更新");
        ui->tableWidget->setColumnCount(8);
        ui->tableWidget->setRowCount(1500);
        ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "始发城市" << "始发时间"<<"抵达城市"<<"抵达时间"<<"航班号"<<"飞行时长(min)"<<"商务舱"<<"经济舱");
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        //设置表格中每一行的内容
}


void updateTable(Ui::Pages_Serve* ui)
{
    qDebug()<<ui->dateEdit->date().day();
    SqFlight_serve *SqFlightList = getSqFlightList(ui->dateEdit->date().day());
    Graph=getGraph();
    ui->tableWidget->setRowCount(Graph->num_edge);
    for(int i=0;i<Graph->num_edge;i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(SqFlightList[i].cityFrom));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(SqFlightList[i].startTime));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(SqFlightList[i].cityTo));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(SqFlightList[i].endTime));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(SqFlightList[i].id));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(SqFlightList[i].time));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(SqFlightList[i].num));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(SqFlightList[i].vip_num));
    }
    //所有单元格居中显示内容
    for (int i=0;i<Graph->num_edge;i++)
    {
     for (int j=0;j<8;j++)
     {
         ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
     }
    }

}
void Pages_Serve::on_pushButton_5_clicked()
{
    updateTable(ui);
}


//添加新的航班
void Pages_Serve::on_pushButton_clicked()
{
    add.show();
}

//void Pages_Serve::f1(Flight flight)
//{
//   ListInsert_L(AllFlight::allFlight[flight.date.day-1],flight);
//   updateTable(ui);
//   QMessageBox::about(this, tr("Tips"),("添加成功"));
//}


//修改航班内容
void Pages_Serve::on_pushButton_2_clicked()
{

    edit.show();
    QTableWidgetItem* item;
    int row=ui->tableWidget->currentRow();

//    提取当前选中的行
//    提取航班号
    item=ui->tableWidget->item(row,4);
    QString id=item->text();

//    提取出发地和抵达地
    QString cityFrom;
    QString cityTo;
    item=ui->tableWidget->item(row,0);
    cityFrom=item->text();
    item=ui->tableWidget->item(row,2);
    cityTo=item->text();
//    提取起飞时间
    int startHour;
    int startMin;
    item=ui->tableWidget->item(row,1);
    QStringList stringList = item->text().split(':');
    startHour=stringList[0].toInt();
    startMin=stringList[1].toInt();
//    提取降落时间
    int endHour;
    int endMin;
    item=ui->tableWidget->item(row,3);
    stringList = item->text().split(':');
    endHour=stringList[0].toInt();
    endMin=stringList[1].toInt();
//    Flight* p = searchFlight(id,cityFrom,);
    send_editFlight(id,cityFrom,cityTo,startHour,startMin,endHour,endMin);
    test(5);
}


void Pages_Serve::on_pushButton_3_clicked()
{

    QMessageBox::StandardButton btn;
    btn = QMessageBox::question(this, "提示", "您确认要取消所选航班的飞行计划吗?", QMessageBox::Yes|QMessageBox::No);
    if (btn == QMessageBox::Yes) {
        QTableWidgetItem* item;
        int row=ui->tableWidget->currentRow();

    //    提取当前选中的行
    //    提取航班号
        item=ui->tableWidget->item(row,4);
        QString id=item->text();

    //    提取出发地和抵达地
        QString cityFrom;
        QString cityTo;
        item=ui->tableWidget->item(row,0);
        cityFrom=item->text();
        item=ui->tableWidget->item(row,2);
        cityTo=item->text();
    //    提取起飞时间
        int startHour;
        int startMin;
        item=ui->tableWidget->item(row,1);
        QStringList stringList = item->text().split(':');
        startHour=stringList[0].toInt();
        startMin=stringList[1].toInt();
    //    提取降落时间
        int endHour;
        int endMin;
        item=ui->tableWidget->item(row,3);
        stringList = item->text().split(':');
        endHour=stringList[0].toInt();
        endMin=stringList[1].toInt();
        bool isDeleted = deleteFlight(id,cityFrom,cityTo,startHour,startMin,endHour,endMin);
        updateTable(ui);
        QMessageBox::information(this,
            tr("Information消息"),
            tr("所选航班取消成功"),
            QMessageBox::Ok ,
            QMessageBox::Ok);
    }


}


void Pages_Serve::on_pushButton_6_clicked()
{
    Graph=getGraph();
    ui->tableWidget->setRowCount(Graph->num_edge);
    SqFlight_serve *SqFlightList = getSqFlightList(ui->dateEdit->date().day());
    quick_sort(SqFlightList,0,Graph->num_edge-1);
    for(int i=0;i<Graph->num_edge;i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(SqFlightList[i].cityFrom));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(SqFlightList[i].startTime));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(SqFlightList[i].cityTo));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(SqFlightList[i].endTime));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(SqFlightList[i].id));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(SqFlightList[i].time));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(SqFlightList[i].num));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(SqFlightList[i].vip_num));
    }
    //所有单元格居中显示内容
    for (int i=0;i<Graph->num_edge;i++)
    {
     for (int j=0;j<8;j++)
     {
         ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
     }
    }
}

void Pages_Serve::addCss2()
{
    auto str = QCoreApplication::applicationDirPath();
    QFile f;
    f.setFileName(str+"//"+"style.css");
    f.open(QIODevice::ReadOnly);
    QString str_css = f.readAll();
    this->setStyleSheet(str_css);
    add.setStyleSheet(str_css);
    edit.setStyleSheet(str_css);
}
