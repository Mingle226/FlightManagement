#include "pages_user.h"
#include "ui_pages_user.h"

Pages_User::Pages_User(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pages_User)
{
    ui->setupUi(this);
    InitTable(ui);
    InitComboBox(ui);
}

Pages_User::~Pages_User()
{
    delete ui;
}

void quick_sort2(SqFlight_serve *SqFlightList, int l, int r)
{
    if (l < r)
    {
        int i = l, j = r;
        SqFlight_serve x = SqFlightList[l];
        while (i < j)
        {
            while(i < j && SqFlightList[j].time.toInt()>x.time.toInt()) // 从右向左找第一个小于x的数
                j--;
            if(i < j)
                SqFlightList[i++] = SqFlightList[j];

            while(i < j && SqFlightList[i].time.toInt()<x.time.toInt()) // 从左向右找第一个大于等于x的数
                i++;
            if(i < j)
                SqFlightList[j--] = SqFlightList[i];
        }
        SqFlightList[i] = x;
        quick_sort2(SqFlightList, l, i - 1); // 递归调用
        quick_sort2(SqFlightList, i + 1, r);
    }
}

void Pages_User::on_pushButton_clicked()
{

    FlightList_user=new SqFlight_serve[30];
    cnt=getFlightList_user(FlightList_user,ui->cityFromText->currentText(),ui->cityToText->currentText(),ui->dateEdit->date().day());
    qDebug()<<cnt;
    ui->tableWidget->setRowCount(cnt);

    if(cnt==0)
    {
        QMessageBox::information(this,
            tr("Information消息"),
            tr("暂无符合条件的航班，请更换条件重新尝试"),
            QMessageBox::Ok ,
            QMessageBox::Ok);
    }
    else{

        for(int i=0;i<cnt;i++)
        {
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(FlightList_user[i].cityFrom));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(FlightList_user[i].startTime));
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(FlightList_user[i].cityTo));
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(FlightList_user[i].endTime));
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(FlightList_user[i].id));
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(FlightList_user[i].time));
            ui->tableWidget->setItem(i,6,new QTableWidgetItem(FlightList_user[i].num));
            ui->tableWidget->setItem(i,7,new QTableWidgetItem(FlightList_user[i].vip_num));
        }
    }

    //所有单元格居中显示内容
    showCenterAlign(ui,cnt);
}


void InitTable(Ui::Pages_User *ui)
{

    // QMessageBox::about(NULL,("About消息框"),"更新");
    ui->tableWidget->setColumnCount(8);
//    ui->tableWidget->setRowCount(1500);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "始发城市" << "始发时间"<<"抵达城市"<<"抵达时间"<<"航班号"<<"飞行时长(min)"<<"商务舱"<<"经济舱");
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //设置表格中每一行的内容
}

void InitComboBox(Ui::Pages_User* ui)
{
    ui->cityFromText->addItem("安康");
    ui->cityFromText->addItem("澳门");
    ui->cityFromText->addItem("白山");
    ui->cityFromText->addItem("包头");
    ui->cityFromText->addItem("北海");
    ui->cityFromText->addItem("常德");
    ui->cityFromText->addItem("常州");
    ui->cityFromText->addItem("长春");
    ui->cityFromText->addItem("大连");
    ui->cityFromText->addItem("大阪");
    ui->cityFromText->addItem("东京");
    ui->cityFromText->addItem("东营");
    ui->cityFromText->addItem("敦煌");
    ui->cityFromText->addItem("恩施");
    ui->cityFromText->addItem("福州");
    ui->cityFromText->addItem("阜阳");
    ui->cityFromText->addItem("广元");
    ui->cityFromText->addItem("广州");
    ui->cityFromText->addItem("桂林");
    ui->cityFromText->addItem("贵阳");
    ui->cityFromText->addItem("哈尔滨");
    ui->cityFromText->addItem("邯郸");
    ui->cityFromText->addItem("杭州");
    ui->cityFromText->addItem("菏泽");
    ui->cityFromText->addItem("合肥");
    ui->cityFromText->addItem("衡阳");
    ui->cityFromText->addItem("呼和浩特");
    ui->cityFromText->addItem("怀化");
    ui->cityFromText->addItem("淮安");
    ui->cityFromText->addItem("济南");
    ui->cityFromText->addItem("加格达奇");
    ui->cityFromText->addItem("揭阳");
    ui->cityFromText->addItem("金边");
    ui->cityFromText->addItem("井冈山");
    ui->cityFromText->addItem("喀什");
    ui->cityFromText->addItem("克拉玛依");
    ui->cityFromText->addItem("昆明");
    ui->cityFromText->addItem("兰州");
    ui->cityFromText->addItem("丽江");
    ui->cityFromText->addItem("临沂");
    ui->cityFromText->addItem("柳州");
    ui->cityFromText->addItem("洛阳");
    ui->cityFromText->addItem("曼谷");
    ui->cityFromText->addItem("绵阳");
    ui->cityFromText->addItem("南昌");
    ui->cityFromText->addItem("南充");
    ui->cityFromText->addItem("南京");
    ui->cityFromText->addItem("南宁");
    ui->cityFromText->addItem("南通");
    ui->cityFromText->addItem("南阳");
    ui->cityFromText->addItem("宁波");
    ui->cityFromText->addItem("黔江");
    ui->cityFromText->addItem("青岛");
    ui->cityFromText->addItem("庆阳");
    ui->cityFromText->addItem("琼海");
    ui->cityFromText->addItem("泉州(晋江)");
    ui->cityFromText->addItem("三明");
    ui->cityFromText->addItem("三亚");
    ui->cityFromText->addItem("上海");
    ui->cityFromText->addItem("厦门");
    ui->cityFromText->addItem("上饶");
    ui->cityFromText->addItem("邵阳");
    ui->cityFromText->addItem("深圳");
    ui->cityFromText->addItem("沈阳");
    ui->cityFromText->addItem("十堰(武当山)");
    ui->cityFromText->addItem("石河子");
    ui->cityFromText->addItem("石家庄");
    ui->cityFromText->addItem("首尔");
    ui->cityFromText->addItem("松原");
    ui->cityFromText->addItem("太原");
    ui->cityFromText->addItem("天津");
    ui->cityFromText->addItem("通化");
    ui->cityFromText->addItem("通辽");
    ui->cityFromText->addItem("威海");
    ui->cityFromText->addItem("温州");
    ui->cityFromText->addItem("文山");
    ui->cityFromText->addItem("乌海");
    ui->cityFromText->addItem("乌鲁木齐");
    ui->cityFromText->addItem("无锡");
    ui->cityFromText->addItem("武汉");
    ui->cityFromText->addItem("武隆(重庆)");
    ui->cityFromText->addItem("西安");
    ui->cityFromText->addItem("西宁");
    ui->cityFromText->addItem("西双版纳");
    ui->cityFromText->addItem("襄阳");
    ui->cityFromText->addItem("忻州");
    ui->cityFromText->addItem("烟台");
    ui->cityFromText->addItem("盐城");
    ui->cityFromText->addItem("延安");
    ui->cityFromText->addItem("扬州(泰州)");
    ui->cityFromText->addItem("伊宁");
    ui->cityFromText->addItem("宜宾");
    ui->cityFromText->addItem("银川");
    ui->cityFromText->addItem("榆林");
    ui->cityFromText->addItem("岳阳");
    ui->cityFromText->addItem("湛江");
    ui->cityFromText->addItem("张家口");
    ui->cityFromText->addItem("张掖");
    ui->cityFromText->addItem("泸州");
    ui->cityFromText->addItem("长沙");
    ui->cityFromText->addItem("成都");
    ui->cityFromText->addItem("郑州");
    ui->cityFromText->addItem("重庆");
    ui->cityFromText->addItem("舟山");
    ui->cityFromText->addItem("珠海");
    ui->cityFromText->addItem("遵义(茅台)");
    ui->cityToText->addItem("安康");
    ui->cityToText->addItem("澳门");
    ui->cityToText->addItem("白山");
    ui->cityToText->addItem("包头");
    ui->cityToText->addItem("北海");
    ui->cityToText->addItem("常德");
    ui->cityToText->addItem("常州");
    ui->cityToText->addItem("长春");
    ui->cityToText->addItem("大连");
    ui->cityToText->addItem("大阪");
    ui->cityToText->addItem("东京");
    ui->cityToText->addItem("东营");
    ui->cityToText->addItem("敦煌");
    ui->cityToText->addItem("恩施");
    ui->cityToText->addItem("福州");
    ui->cityToText->addItem("阜阳");
    ui->cityToText->addItem("广元");
    ui->cityToText->addItem("广州");
    ui->cityToText->addItem("桂林");
    ui->cityToText->addItem("贵阳");
    ui->cityToText->addItem("哈尔滨");
    ui->cityToText->addItem("邯郸");
    ui->cityToText->addItem("杭州");
    ui->cityToText->addItem("菏泽");
    ui->cityToText->addItem("合肥");
    ui->cityToText->addItem("衡阳");
    ui->cityToText->addItem("呼和浩特");
    ui->cityToText->addItem("怀化");
    ui->cityToText->addItem("淮安");
    ui->cityToText->addItem("济南");
    ui->cityToText->addItem("加格达奇");
    ui->cityToText->addItem("揭阳");
    ui->cityToText->addItem("金边");
    ui->cityToText->addItem("井冈山");
    ui->cityToText->addItem("喀什");
    ui->cityToText->addItem("克拉玛依");
    ui->cityToText->addItem("昆明");
    ui->cityToText->addItem("兰州");
    ui->cityToText->addItem("丽江");
    ui->cityToText->addItem("临沂");
    ui->cityToText->addItem("柳州");
    ui->cityToText->addItem("洛阳");
    ui->cityToText->addItem("曼谷");
    ui->cityToText->addItem("绵阳");
    ui->cityToText->addItem("南昌");
    ui->cityToText->addItem("南充");
    ui->cityToText->addItem("南京");
    ui->cityToText->addItem("南宁");
    ui->cityToText->addItem("南通");
    ui->cityToText->addItem("南阳");
    ui->cityToText->addItem("宁波");
    ui->cityToText->addItem("黔江");
    ui->cityToText->addItem("青岛");
    ui->cityToText->addItem("庆阳");
    ui->cityToText->addItem("琼海");
    ui->cityToText->addItem("泉州(晋江)");
    ui->cityToText->addItem("三明");
    ui->cityToText->addItem("三亚");
    ui->cityToText->addItem("上海");
    ui->cityToText->addItem("厦门");
    ui->cityToText->addItem("上饶");
    ui->cityToText->addItem("邵阳");
    ui->cityToText->addItem("深圳");
    ui->cityToText->addItem("沈阳");
    ui->cityToText->addItem("十堰(武当山)");
    ui->cityToText->addItem("石河子");
    ui->cityToText->addItem("石家庄");
    ui->cityToText->addItem("首尔");
    ui->cityToText->addItem("松原");
    ui->cityToText->addItem("太原");
    ui->cityToText->addItem("天津");
    ui->cityToText->addItem("通化");
    ui->cityToText->addItem("通辽");
    ui->cityToText->addItem("威海");
    ui->cityToText->addItem("温州");
    ui->cityToText->addItem("文山");
    ui->cityToText->addItem("乌海");
    ui->cityToText->addItem("乌鲁木齐");
    ui->cityToText->addItem("无锡");
    ui->cityToText->addItem("武汉");
    ui->cityToText->addItem("武隆(重庆)");
    ui->cityToText->addItem("西安");
    ui->cityToText->addItem("西宁");
    ui->cityToText->addItem("西双版纳");
    ui->cityToText->addItem("襄阳");
    ui->cityToText->addItem("忻州");
    ui->cityToText->addItem("烟台");
    ui->cityToText->addItem("盐城");
    ui->cityToText->addItem("延安");
    ui->cityToText->addItem("扬州(泰州)");
    ui->cityToText->addItem("伊宁");
    ui->cityToText->addItem("宜宾");
    ui->cityToText->addItem("银川");
    ui->cityToText->addItem("榆林");
    ui->cityToText->addItem("岳阳");
    ui->cityToText->addItem("湛江");
    ui->cityToText->addItem("张家口");
    ui->cityToText->addItem("张掖");
    ui->cityToText->addItem("泸州");
    ui->cityToText->addItem("长沙");
    ui->cityToText->addItem("成都");
    ui->cityToText->addItem("郑州");
    ui->cityToText->addItem("重庆");
    ui->cityToText->addItem("舟山");
    ui->cityToText->addItem("珠海");
    ui->cityToText->addItem("遵义(茅台)");
}


void Pages_User::on_pushButton_2_clicked()
{
    //按照飞行时间排序
    FlightList_user=new SqFlight_serve[30];
    cnt=getFlightList_user(FlightList_user,ui->cityFromText->currentText(),ui->cityToText->currentText(),ui->dateEdit->date().day());
    quick_sort2(FlightList_user,0,cnt-1);

    for(int i=0;i<cnt;i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(FlightList_user[i].cityFrom));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(FlightList_user[i].startTime));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(FlightList_user[i].cityTo));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(FlightList_user[i].endTime));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(FlightList_user[i].id));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(FlightList_user[i].time));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(FlightList_user[i].num));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(FlightList_user[i].vip_num));
    }

    showCenterAlign(ui,cnt);

}




void Pages_User::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton btn;
    btn = QMessageBox::question(this, "提示", "您确认要购买所选航班的经济舱飞行计划吗?", QMessageBox::Yes|QMessageBox::No);
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

        int day;
        day=ui->dateEdit->date().day();

        Flight *pflight = searchFlight(id,cityFrom,cityTo,startHour,startMin,endHour,endMin);
        pflight->buy(day);
        ui->tableWidget->setItem(row,6,new QTableWidgetItem(QString::number(pflight->num[day])));
        showCenterAlign(ui,cnt);
    }
}


void showCenterAlign(Ui::Pages_User* ui,int cnt)
{
    for (int i=0;i<cnt;i++)
    {
     for (int j=0;j<8;j++)
     {
         ui->tableWidget->item(i,j)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
     }
    }
}

void Pages_User::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton btn;
    btn = QMessageBox::question(this, "提示", "您确认要购买所选航班的商务舱飞行计划吗?", QMessageBox::Yes|QMessageBox::No);
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

        int day;
        day=ui->dateEdit->date().day();

        Flight *pflight = searchFlight(id,cityFrom,cityTo,startHour,startMin,endHour,endMin);
        pflight->buy_vip(day);
        ui->tableWidget->setItem(row,7,new QTableWidgetItem(QString::number(pflight->num_vip[day])));
        showCenterAlign(ui,cnt);
    }
}

