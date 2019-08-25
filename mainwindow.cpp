#include "mainwindow.h"
#include <QRect>
#include <QPainter>
#include <cmath>
#include <QDateTime>
#include <iostream>
using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

MainWindow::~MainWindow()
{

}
void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter image;
    image.begin(this);
    image.drawEllipse(myrect().center(), rad(myrect()), rad(myrect()));
    image.rotate(sek());
    image.drawRect(myrect());
    image.end();
    update();
}

QRect MainWindow::myrect(int leftPos, int topPos, int width, int height)
{
    return QRect(leftPos, topPos, width, height);
}

int MainWindow::rad(QRect)
{
    return int(ceil(sqrt(pow(myrect().height(), 2)/2)));
}

int MainWindow::sek()
{
    QDateTime a;
    cout << a.currentSecsSinceEpoch()% 360 << endl;
    return int(a.currentSecsSinceEpoch() % 360);

}
