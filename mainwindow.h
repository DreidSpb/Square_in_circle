#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent*);
    QRect myrect(int leftPos = 0, int topPos = 0, int width = 200, int height = 200);
    int rad(QRect);
    int sek();
    QSize sz();
};

#endif // MAINWINDOW_H
