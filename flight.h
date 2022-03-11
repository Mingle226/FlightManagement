#ifndef FLIGHT_H
#define FLIGHT_H

#pragma once
#include <iostream>
#include "QString"
#include "QStringList"
#include "QDebug"
#include "global.h"
//#include "gragh.h"
using namespace std;
 //元素类型 或节点类型

typedef struct{
    QString id;
    QString cityFrom;
    QString cityTo;
    QString startTime;
    QString endTime;
    QString time;
    QString num;
    QString vip_num;
} SqFlight_serve;


static SqFlight_serve tmp;

class Flight
{
public:
    QString id;
    int cityFrom;
    int cityTo;
    int startHour;
    int startMin;
    int endHour;
    int endMin;
    int time;
    int num[32];//经济舱数量
    int num_vip[32];//商务舱数量
public:
    Flight(QString id, QString cityFrom, QString cityTo,QString startTime,QString endTime,QString time);
    void buy(int i);
    void buy_vip(int i);
    void output();
//    SqFlight_serve getFlight_server(int i);
};


#endif // FLIGHT_H
