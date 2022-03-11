#include "global.h"

Global::Global()
{

}

int getId(QString key)
{
   int n=106;
   int low = 0;
   int high = n - 1;
   while (low <= high) {
       int mid = (low + high) / 2;
       QString midVal = a[mid];
       if (midVal.compare(key) < 0)
           low = mid + 1;
       else if (midVal.compare(key) > 0)
           high = mid - 1;
       else
           return mid;
   }
   return -1;
}


QString getCity(int n){
    return a[n];
}


string toString(QString qstr)
{
    string s = qstr.toStdString();
    return s;
}

QString toQString(string s)
{
    QString qstr2 = QString::fromStdString(s);
    return qstr2;
}

int partition(QString arr[], int low, int high) {
    QString key;
    key = arr[low];
    while (low < high) {
        while (low < high && arr[high].compare(key) >= 0)
            high--;
        if (low < high)
            arr[low++] = arr[high];
        while (low < high && arr[high].compare(key) <= 0)
            low++;
        if (low < high)
            arr[high--] = arr[low];
    }
    arr[low] = key;
    return low;
}
void quick_sort(QString arr[], int start, int end) {
    int pos;
    if (start < end) {
        pos = partition(arr, start, end);
        quick_sort(arr, start, pos - 1);
        quick_sort(arr, pos + 1, end);
    }
    return;
}

void test_getId()
{
    qDebug()<<getId(QString("三亚"));
    qDebug()<<getId(QString("三明"));
    qDebug()<<getId(QString("东京"));
    qDebug()<<getId(QString("包头"));
    qDebug()<<getId(QString("北海"));
    qDebug()<<getId(QString("大连"));
    qDebug()<<getId(QString("常州"));
    qDebug()<<getId(QString("长春"));
    qDebug()<<getId(QString("大阪"));
    qDebug()<<getId(QString("常德"));
    qDebug()<<getId(QString("东营"));
    qDebug()<<getId(QString("临沂"));
    qDebug()<<getId(QString("丽江"));
    qDebug()<<getId(QString("井冈山"));
    qDebug()<<getId(QString("加格达奇"));
    qDebug()<<getId(QString("合肥"));
    qDebug()<<getId(QString("哈尔滨"));
    qDebug()<<getId(QString("广州"));
    qDebug()<<getId(QString("桂林"));
    qDebug()<<getId(QString("贵阳"));
    qDebug()<<getId(QString("广元"));
    qDebug()<<getId(QString("杭州"));
    qDebug()<<getId(QString("菏泽"));
    qDebug()<<getId(QString("邯郸"));
    qDebug()<<getId(QString("呼和浩特"));
    qDebug()<<getId(QString("衡阳"));
    qDebug()<<getId(QString("怀化"));
    qDebug()<<getId(QString("济南"));
    qDebug()<<getId(QString("淮安"));
    qDebug()<<getId(QString("阜阳"));
    qDebug()<<getId(QString("揭阳"));
    qDebug()<<getId(QString("福州"));
    qDebug()<<getId(QString("金边"));
    qDebug()<<getId(QString("克拉玛依"));
    qDebug()<<getId(QString("喀什"));
    qDebug()<<getId(QString("兰州"));
    qDebug()<<getId(QString("昆明"));
    qDebug()<<getId(QString("恩施"));
    qDebug()<<getId(QString("敦煌"));
    qDebug()<<getId(QString("南京"));
    qDebug()<<getId(QString("南充"));
    qDebug()<<getId(QString("南昌"));
    qDebug()<<getId(QString("曼谷"));
    qDebug()<<getId(QString("绵阳"));
    qDebug()<<getId(QString("洛阳"));
    qDebug()<<getId(QString("柳州"));
    qDebug()<<getId(QString("南宁"));
    qDebug()<<getId(QString("南通"));
    qDebug()<<getId(QString("南阳"));
    qDebug()<<getId(QString("宁波"));
    qDebug()<<getId(QString("庆阳"));
    qDebug()<<getId(QString("青岛"));
    qDebug()<<getId(QString("黔江"));
    qDebug()<<getId(QString("泉州(晋江)"));
    qDebug()<<getId(QString("琼海"));
    qDebug()<<getId(QString("白山"));
    qDebug()<<getId(QString("澳门"));
    qDebug()<<getId(QString("上海"));
    qDebug()<<getId(QString("上饶"));
    qDebug()<<getId(QString("厦门"));
    qDebug()<<getId(QString("乌海"));
    qDebug()<<getId(QString("十堰(武当山)"));
    qDebug()<<getId(QString("沈阳"));
    qDebug()<<getId(QString("深圳"));
    qDebug()<<getId(QString("天津"));
    qDebug()<<getId(QString("太原"));
    qDebug()<<getId(QString("松原"));
    qDebug()<<getId(QString("首尔"));
    qDebug()<<getId(QString("石家庄"));
    qDebug()<<getId(QString("石河子"));
    qDebug()<<getId(QString("威海"));
    qDebug()<<getId(QString("通化"));
    qDebug()<<getId(QString("通辽"));
    qDebug()<<getId(QString("文山"));
    qDebug()<<getId(QString("温州"));
    qDebug()<<getId(QString("邵阳"));
    qDebug()<<getId(QString("乌鲁木齐"));
    qDebug()<<getId(QString("伊宁"));
    qDebug()<<getId(QString("延安"));
    qDebug()<<getId(QString("忻州"));
    qDebug()<<getId(QString("武隆(重庆)"));
    qDebug()<<getId(QString("襄阳"));
    qDebug()<<getId(QString("西双版纳"));
    qDebug()<<getId(QString("西宁"));
    qDebug()<<getId(QString("西安"));
    qDebug()<<getId(QString("武汉"));
    qDebug()<<getId(QString("烟台"));
    qDebug()<<getId(QString("盐城"));
    qDebug()<<getId(QString("扬州(泰州)"));
    qDebug()<<getId(QString("无锡"));
    qDebug()<<getId(QString("安康"));
    qDebug()<<getId(QString("宜宾"));
    qDebug()<<getId(QString("岳阳"));
    qDebug()<<getId(QString("榆林"));
    qDebug()<<getId(QString("张家口"));
    qDebug()<<getId(QString("湛江"));
    qDebug()<<getId(QString("张掖"));
    qDebug()<<getId(QString("成都"));
    qDebug()<<getId(QString("泸州"));
    qDebug()<<getId(QString("长沙"));
    qDebug()<<getId(QString("珠海"));
    qDebug()<<getId(QString("舟山"));
    qDebug()<<getId(QString("重庆"));
    qDebug()<<getId(QString("郑州"));
    qDebug()<<getId(QString("遵义(茅台)"));
    qDebug()<<getId(QString("银川"));
}

void insert_sort(QString a[],int n)//n为数组a的元素个数
{
    //进行N-1轮插入过程
    for(int i=1; i<n; i++)
    {
        //首先找到元素a[i]需要插入的位置
        int j=0;
        while( (a[j].compare(a[i])<0) && (j<i))
        {
            j++;
        }
        //将元素插入到正确的位置
        if(i != j)  //如果i==j，说明a[i]刚好在正确的位置
        {
            QString tmp = a[i];
            for(int k = i; k > j; k--)
            {
                a[k] = a[k-1];
            }
            a[j] = tmp;
        }
    }
}
