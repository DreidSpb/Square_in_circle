#include "mainwindow.h"
#include <QDateTime>
#include <QPainter>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {}

MainWindow::~MainWindow() {}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter image;
    image.begin(this);
    image.translate(rect().center());
    image.drawEllipse(QPoint(0, 0), rad, rad);
    image.rotate(QDateTime::currentMSecsSinceEpoch() / 10 % 360);
    image.drawRect(r);
    image.end();
    update();
}

void MainWindow::resizeEvent(QResizeEvent *)
{
    int s = qMin(width(), height()) * 0.9;
    rad = s / 2;
    int sqSide = s / sqrt(2);
    r = QRect(-sqSide / 2, -sqSide / 2, sqSide, sqSide);
}
