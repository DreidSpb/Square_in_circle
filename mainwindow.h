#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent*);

private:
    void resizeEvent(QResizeEvent *);

    int rad;
    QRect r;
};

#endif // MAINWINDOW_H
