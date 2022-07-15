#include "test02.h"
#include <QDebug>
ts_Message Test02::msg[2][8] = {
    {{1,"11"},{2,"222"},{1,"3333"},{2,"4"},{1,"55"},{2,"66"},{1,"77"},{2,"88"}},
    {{1,"99"},{2,"aa"},{1,"bb"},{2,"cc"},{1,"dd"},{2,"ee"},{1,"ff"},{2,"00"}},
};
Test02::Test02(QObject *parent) : QObject(parent)
{

}
void Test02::onDealMsg()
{
    int i=100;
    char buf[2] = {'1','2'};
    msg[1][1].id = i;
    memcpy (msg[1][1].bArray.data (),buf,2);
    emit sigMsg (msg);
}
