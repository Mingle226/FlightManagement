#ifndef GRAPH_H
#define GRAPH_H
//
// Created by Te Fuir on 2021/10/18.
//
#include <iostream>
#include "flight.h"
using namespace std;
#define MAX 130         //最大顶点数
typedef int Vertex;     // 用顶点下标表示顶点
typedef char DataType;  //存储的数据类型

// 边的定义
typedef struct ENode *PtrToENode;
struct ENode
{
    Vertex V1, V2;     // 有向边 <V1, V2>
    Flight *pflight;
};
typedef PtrToENode Edge;

// 邻接点的定义
typedef struct AdjVNode *PtrToAdjVNode;
struct AdjVNode
{
    Vertex Adjv;        // 邻接点下标
    Flight *pflight;
    PtrToAdjVNode Next; // 下一个邻接点的指针
};

// 顶点表头节点的定义
typedef struct Vnode
{
    PtrToAdjVNode FirstEdge; // 边表头指针
//    DataType Data;           // 存顶节点的数据
    // 注 : 很多时候顶点无数据 此时Data不用出现
} AdjList[MAX];

// 图结点的定义
typedef struct GNode *PtrToGNode;
struct GNode
{
    int num_ver;    // 顶点数
    int num_edge;    // 边数
    AdjList G; // 邻接表  是一个数组
};
typedef PtrToGNode LGraph; // 以邻接表的方式存储的图类型

static LGraph Graph;

static int num_SqFlightList=0;

LGraph CreateGraph();

void InsertEdge(LGraph Graph, Edge E);

void addFlight(QString id,QString cityFrom,QString cityTo,QString startTime,QString endTime,QString time);

void InitGragh();

//遍历整个邻接表 将数据按照出发城市排序 储存到一个数组中
SqFlight_serve* getSqFlightList(int day);

//将Flight类转化为可储存到数组中的形式
SqFlight_serve getFlight_server(int i,Flight* pflight);

LGraph getGraph();

Flight* searchFlight(QString id,QString cityFrome,QString cityTo,int startHour,int startMin,int endHonr,int endMin);

bool deleteFlight(QString id, QString cityFrom, QString cityTo, int startHour, int startMin, int endHour, int endMin);

int getFlightList_user(SqFlight_serve* FlightList_user,QString cityFrom, QString cityTo,int day);

int getFlightList_user(int *citys, QString cityFrom, QString cityTo);

#endif // GRAGH_H
