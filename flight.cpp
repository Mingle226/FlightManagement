#include "flight.h"


Flight::Flight(QString id, QString cityFrom, QString cityTo,QString startTime,QString endTime,QString time)
{
    this->id=id;
    this->cityFrom=cityFrom.toInt();
    this->cityTo=cityTo.toInt();
    QStringList startList=startTime.split(":");
    this->startHour=startList[0].toInt();
    this->startMin=startList[1].toInt();
    QStringList endList=endTime.split(":");
    this->endHour=endList[0].toInt();
    this->endMin=endList[1].toInt();
    this->time=time.toInt();

    for(int i=0;i<32;i++)
    {
        this->num[i]=60;
        this->num_vip[i]=12;
    }
}

void Flight::buy(int i)
{
    this->num[i]--;
}

void Flight::buy_vip(int i)
{
    this->num_vip[i]--;
}

void Flight::output()
{
    qDebug()<<"This id "<<id;
    qDebug()<<"The cityFrom "<<getCity(cityFrom);
    qDebug()<<"The cityTo "<<getCity(cityTo);
}

//SqFlight_serve Flight::getFlight_server(int i)
//{
//    tmp.cityFrom=getCity(this->cityFrom);
//    tmp.cityTo=getCity(this->cityTo);
//    tmp.startTime=QString::number(this->startHour)+":"+QString::number(this->startMin);
//    tmp.endTime=QString::number(this->endHour)+":"+QString::number(this->endMin);
//    tmp.id=this->id;
//    tmp.num=QString::number(this->num[i]);
//    tmp.vip_num=QString::number(this->num_vip[i]);
//    tmp.time=QString::number(this->time);
//    return tmp;
//}




