#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "test01.h"
#include "test02.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//    static MainWindow *mw;
private slots:

    void on_pushButton_clicked();

signals:
    void sigTest();
private:
    Ui::MainWindow *ui;
    Test01 *m_test01;
    Test02 *m_test02;

};
#endif // MAINWINDOW_H
