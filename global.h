#ifndef GLOBAL_H
#define GLOBAL_H
#include "iostream"
#include "qstring.h"
#include "qDebug"

using namespace std;

static QString a[106] = {"三亚","三明","上海","上饶","东京","东营","临沂","丽江","乌海","乌鲁木齐","井冈山","伊宁","克拉玛依","兰州","加格达奇","包头","北海","十堰(武当山)","南京","南充","南宁","南昌","南通","南阳","厦门","合肥","呼和浩特","哈尔滨","喀什","大连","大阪","天津","太原","威海","宁波","安康","宜宾","岳阳","常州","常德","广元","广州","庆阳","延安","张家口","张掖","忻州","怀化","恩施","成都","扬州(泰州)","揭阳","敦煌","文山","无锡","昆明","曼谷","杭州","松原","柳州","桂林","榆林","武汉","武隆(重庆)","沈阳","泉州(晋江)","泸州","洛阳","济南","淮安","深圳","温州","湛江","澳门","烟台","珠海","琼海","白山","盐城","石家庄","石河子","福州","绵阳","舟山","菏泽","衡阳","襄阳","西双版纳","西宁","西安","贵阳","通化","通辽","遵义(茅台)","邯郸","邵阳","郑州","重庆","金边","银川","长春","长沙","阜阳","青岛","首尔","黔江"};

int getId(QString key);


QString getCity(int n);

QString toQString(string s);

string toString(QString qstr);

int partition(QString arr[], int low, int high);

void quick_sort(QString arr[], int start, int end);

void test_getId();

void insert_sort(QString a[],int n);


typedef struct
{
    int year;
    int month;
    int day;

}Date;

class Global
{
public:
    Global();
};

#endif // GLOBAL_H
