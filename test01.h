#ifndef TEST01_H
#define TEST01_H

#include <QObject>
#include "test02.h"
class Test01 : public QObject
{
    Q_OBJECT
public:
    explicit Test01(QObject *parent = nullptr);
public slots:
    void onMsg(ts_Message msg[2][8]);
signals:

};

#endif // TEST01_H
