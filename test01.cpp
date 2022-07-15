#include "test01.h"
#include <QDebug>
Test01::Test01(QObject *parent) : QObject(parent)
{

}
void Test01::onMsg(ts_Message msg[2][8])
{
    QByteArray arr;

    for(int i =0;i<2;i++){
        for(int j = 0;j<8;j++){
            for(int k = 0;k<msg[i][j].bArray.length ();k++){
                qDebug()<<"qt yyds:"<<endl<<*(msg[i][j].bArray.data ()+k)<<endl;

            }
            Test02::msg[i][j].id = 0;
            Test02::msg[i][j].bArray.clear ();
        }
    }
    for(int i =0;i<2;i++){
        for(int j = 0;j<8;j++){
            qDebug()<<"yyds:"<<endl<<Test02::msg[i][j].id<<Test02::msg[i][j].bArray<<endl;
        }
    }
}
