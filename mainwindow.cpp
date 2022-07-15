#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_test01 = new Test01();
    m_test02 = new Test02();
    qRegisterMetaType<ts_Message>("ts_Message");
    connect (this,&MainWindow::sigTest,m_test02,&Test02::onDealMsg);
    connect (m_test02,&Test02::sigMsg,m_test01,&Test01::onMsg);
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
   emit sigTest ();
}
