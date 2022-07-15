#ifndef TEST02_H
#define TEST02_H

#include <QObject>
typedef struct{
   int id;
   QByteArray bArray;
}ts_Message;
Q_DECLARE_METATYPE (ts_Message)
class Test02 : public QObject
{
    Q_OBJECT
public:
    explicit Test02(QObject *parent = nullptr);
    static ts_Message msg[2][8];
public slots:
    void onDealMsg();
signals:
    void sigMsg(ts_Message msg[2][8]);
};

#endif // TEST02_H
