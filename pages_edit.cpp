#include "pages_edit.h"
#include "ui_pages_edit.h"

pages_edit::pages_edit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pages_edit)
{
    ui->setupUi(this);    
    InitComboBox(ui);
//    connect(nullptr,SIGNAL(send_editFlight(QString)),SLOT(pages_edit::f1(QString)));
}

pages_edit::~pages_edit()
{
    delete ui;
}

void pages_edit::f1(QString id,QString cityFrom, QString cityTo, int startHour, int startMin, int endHour, int endMin)
{
    qDebug()<<"Conect";
    pflight = searchFlight(id,cityFrom,cityTo,startHour,startMin,endHour,endMin);
    ui->cityFrom->setCurrentText(getCity(pflight->cityFrom));
    ui->cityTo->setCurrentText(getCity(pflight->cityTo));
    ui->text_id->setText(pflight->id);
    ui->startTime->setTime(QTime(pflight->startHour,pflight->startMin));
    ui->endTime->setTime(QTime(pflight->endHour,pflight->endMin));
}

void pages_edit::testslot(int a)
{
    qDebug()<<"a"<<a;
}

void InitComboBox(Ui::pages_edit *ui)

{
    ui->cityFrom->addItem("安康");
    ui->cityFrom->addItem("澳门");
    ui->cityFrom->addItem("白山");
    ui->cityFrom->addItem("包头");
    ui->cityFrom->addItem("北海");
    ui->cityFrom->addItem("常德");
    ui->cityFrom->addItem("常州");
    ui->cityFrom->addItem("长春");
    ui->cityFrom->addItem("大连");
    ui->cityFrom->addItem("大阪");
    ui->cityFrom->addItem("东京");
    ui->cityFrom->addItem("东营");
    ui->cityFrom->addItem("敦煌");
    ui->cityFrom->addItem("恩施");
    ui->cityFrom->addItem("福州");
    ui->cityFrom->addItem("阜阳");
    ui->cityFrom->addItem("广元");
    ui->cityFrom->addItem("广州");
    ui->cityFrom->addItem("桂林");
    ui->cityFrom->addItem("贵阳");
    ui->cityFrom->addItem("哈尔滨");
    ui->cityFrom->addItem("邯郸");
    ui->cityFrom->addItem("杭州");
    ui->cityFrom->addItem("菏泽");
    ui->cityFrom->addItem("合肥");
    ui->cityFrom->addItem("衡阳");
    ui->cityFrom->addItem("呼和浩特");
    ui->cityFrom->addItem("怀化");
    ui->cityFrom->addItem("淮安");
    ui->cityFrom->addItem("济南");
    ui->cityFrom->addItem("加格达奇");
    ui->cityFrom->addItem("揭阳");
    ui->cityFrom->addItem("金边");
    ui->cityFrom->addItem("井冈山");
    ui->cityFrom->addItem("喀什");
    ui->cityFrom->addItem("克拉玛依");
    ui->cityFrom->addItem("昆明");
    ui->cityFrom->addItem("兰州");
    ui->cityFrom->addItem("丽江");
    ui->cityFrom->addItem("临沂");
    ui->cityFrom->addItem("柳州");
    ui->cityFrom->addItem("洛阳");
    ui->cityFrom->addItem("曼谷");
    ui->cityFrom->addItem("绵阳");
    ui->cityFrom->addItem("南昌");
    ui->cityFrom->addItem("南充");
    ui->cityFrom->addItem("南京");
    ui->cityFrom->addItem("南宁");
    ui->cityFrom->addItem("南通");
    ui->cityFrom->addItem("南阳");
    ui->cityFrom->addItem("宁波");
    ui->cityFrom->addItem("黔江");
    ui->cityFrom->addItem("青岛");
    ui->cityFrom->addItem("庆阳");
    ui->cityFrom->addItem("琼海");
    ui->cityFrom->addItem("泉州(晋江)");
    ui->cityFrom->addItem("三明");
    ui->cityFrom->addItem("三亚");
    ui->cityFrom->addItem("上海");
    ui->cityFrom->addItem("厦门");
    ui->cityFrom->addItem("上饶");
    ui->cityFrom->addItem("邵阳");
    ui->cityFrom->addItem("深圳");
    ui->cityFrom->addItem("沈阳");
    ui->cityFrom->addItem("十堰(武当山)");
    ui->cityFrom->addItem("石河子");
    ui->cityFrom->addItem("石家庄");
    ui->cityFrom->addItem("首尔");
    ui->cityFrom->addItem("松原");
    ui->cityFrom->addItem("太原");
    ui->cityFrom->addItem("天津");
    ui->cityFrom->addItem("通化");
    ui->cityFrom->addItem("通辽");
    ui->cityFrom->addItem("威海");
    ui->cityFrom->addItem("温州");
    ui->cityFrom->addItem("文山");
    ui->cityFrom->addItem("乌海");
    ui->cityFrom->addItem("乌鲁木齐");
    ui->cityFrom->addItem("无锡");
    ui->cityFrom->addItem("武汉");
    ui->cityFrom->addItem("武隆(重庆)");
    ui->cityFrom->addItem("西安");
    ui->cityFrom->addItem("西宁");
    ui->cityFrom->addItem("西双版纳");
    ui->cityFrom->addItem("襄阳");
    ui->cityFrom->addItem("忻州");
    ui->cityFrom->addItem("烟台");
    ui->cityFrom->addItem("盐城");
    ui->cityFrom->addItem("延安");
    ui->cityFrom->addItem("扬州(泰州)");
    ui->cityFrom->addItem("伊宁");
    ui->cityFrom->addItem("宜宾");
    ui->cityFrom->addItem("银川");
    ui->cityFrom->addItem("榆林");
    ui->cityFrom->addItem("岳阳");
    ui->cityFrom->addItem("湛江");
    ui->cityFrom->addItem("张家口");
    ui->cityFrom->addItem("张掖");
    ui->cityFrom->addItem("泸州");
    ui->cityFrom->addItem("长沙");
    ui->cityFrom->addItem("成都");
    ui->cityFrom->addItem("郑州");
    ui->cityFrom->addItem("重庆");
    ui->cityFrom->addItem("舟山");
    ui->cityFrom->addItem("珠海");
    ui->cityFrom->addItem("遵义(茅台)");
    ui->cityTo->addItem("安康");
    ui->cityTo->addItem("澳门");
    ui->cityTo->addItem("白山");
    ui->cityTo->addItem("包头");
    ui->cityTo->addItem("北海");
    ui->cityTo->addItem("常德");
    ui->cityTo->addItem("常州");
    ui->cityTo->addItem("长春");
    ui->cityTo->addItem("大连");
    ui->cityTo->addItem("大阪");
    ui->cityTo->addItem("东京");
    ui->cityTo->addItem("东营");
    ui->cityTo->addItem("敦煌");
    ui->cityTo->addItem("恩施");
    ui->cityTo->addItem("福州");
    ui->cityTo->addItem("阜阳");
    ui->cityTo->addItem("广元");
    ui->cityTo->addItem("广州");
    ui->cityTo->addItem("桂林");
    ui->cityTo->addItem("贵阳");
    ui->cityTo->addItem("哈尔滨");
    ui->cityTo->addItem("邯郸");
    ui->cityTo->addItem("杭州");
    ui->cityTo->addItem("菏泽");
    ui->cityTo->addItem("合肥");
    ui->cityTo->addItem("衡阳");
    ui->cityTo->addItem("呼和浩特");
    ui->cityTo->addItem("怀化");
    ui->cityTo->addItem("淮安");
    ui->cityTo->addItem("济南");
    ui->cityTo->addItem("加格达奇");
    ui->cityTo->addItem("揭阳");
    ui->cityTo->addItem("金边");
    ui->cityTo->addItem("井冈山");
    ui->cityTo->addItem("喀什");
    ui->cityTo->addItem("克拉玛依");
    ui->cityTo->addItem("昆明");
    ui->cityTo->addItem("兰州");
    ui->cityTo->addItem("丽江");
    ui->cityTo->addItem("临沂");
    ui->cityTo->addItem("柳州");
    ui->cityTo->addItem("洛阳");
    ui->cityTo->addItem("曼谷");
    ui->cityTo->addItem("绵阳");
    ui->cityTo->addItem("南昌");
    ui->cityTo->addItem("南充");
    ui->cityTo->addItem("南京");
    ui->cityTo->addItem("南宁");
    ui->cityTo->addItem("南通");
    ui->cityTo->addItem("南阳");
    ui->cityTo->addItem("宁波");
    ui->cityTo->addItem("黔江");
    ui->cityTo->addItem("青岛");
    ui->cityTo->addItem("庆阳");
    ui->cityTo->addItem("琼海");
    ui->cityTo->addItem("泉州(晋江)");
    ui->cityTo->addItem("三明");
    ui->cityTo->addItem("三亚");
    ui->cityTo->addItem("上海");
    ui->cityTo->addItem("厦门");
    ui->cityTo->addItem("上饶");
    ui->cityTo->addItem("邵阳");
    ui->cityTo->addItem("深圳");
    ui->cityTo->addItem("沈阳");
    ui->cityTo->addItem("十堰(武当山)");
    ui->cityTo->addItem("石河子");
    ui->cityTo->addItem("石家庄");
    ui->cityTo->addItem("首尔");
    ui->cityTo->addItem("松原");
    ui->cityTo->addItem("太原");
    ui->cityTo->addItem("天津");
    ui->cityTo->addItem("通化");
    ui->cityTo->addItem("通辽");
    ui->cityTo->addItem("威海");
    ui->cityTo->addItem("温州");
    ui->cityTo->addItem("文山");
    ui->cityTo->addItem("乌海");
    ui->cityTo->addItem("乌鲁木齐");
    ui->cityTo->addItem("无锡");
    ui->cityTo->addItem("武汉");
    ui->cityTo->addItem("武隆(重庆)");
    ui->cityTo->addItem("西安");
    ui->cityTo->addItem("西宁");
    ui->cityTo->addItem("西双版纳");
    ui->cityTo->addItem("襄阳");
    ui->cityTo->addItem("忻州");
    ui->cityTo->addItem("烟台");
    ui->cityTo->addItem("盐城");
    ui->cityTo->addItem("延安");
    ui->cityTo->addItem("扬州(泰州)");
    ui->cityTo->addItem("伊宁");
    ui->cityTo->addItem("宜宾");
    ui->cityTo->addItem("银川");
    ui->cityTo->addItem("榆林");
    ui->cityTo->addItem("岳阳");
    ui->cityTo->addItem("湛江");
    ui->cityTo->addItem("张家口");
    ui->cityTo->addItem("张掖");
    ui->cityTo->addItem("泸州");
    ui->cityTo->addItem("长沙");
    ui->cityTo->addItem("成都");
    ui->cityTo->addItem("郑州");
    ui->cityTo->addItem("重庆");
    ui->cityTo->addItem("舟山");
    ui->cityTo->addItem("珠海");
    ui->cityTo->addItem("遵义(茅台)");
}


void pages_edit::on_commandLinkButton_clicked()
{
    ui->cityFrom->setCurrentText(getCity(pflight->cityFrom));
    ui->cityTo->setCurrentText(getCity(pflight->cityTo));
    ui->text_id->setText(pflight->id);
    ui->startTime->setTime(QTime(pflight->startHour,pflight->startMin));
    ui->endTime->setTime(QTime(pflight->endHour,pflight->endMin));
}


void pages_edit::on_btn_yes_clicked()
{

    pflight->id=ui->text_id->text();
    pflight->cityFrom=getId(ui->cityFrom->currentText());
    pflight->cityTo=getId(ui->cityTo->currentText());
    QString startTime=ui->startTime->text();
    QString endTime=ui->endTime->text();
    QStringList time1=startTime.split(":");
    QStringList time2=endTime.split(":");
    pflight->time=-(time1[0].toInt()-time2[0].toInt())*60-(time1[1].toInt()-time2[1].toInt());
    pflight->startHour=time1[0].toInt();
    pflight->startMin=time1[1].toInt();
    pflight->endHour=time2[0].toInt();
    pflight->endMin=time2[1].toInt();

    this->hide();
}


void pages_edit::on_btn_no_clicked()
{
    this->hide();
}

