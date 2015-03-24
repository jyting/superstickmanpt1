#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QImage>
#include <QTimer>
#include <QPainter>
#include "background.h"
#include "stickman.h"
#include <QPixmap>
#include <QLabel>
#include <QImage>
#include <cstdlib>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
    void nextFrame();

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::Dialog *ui;
    Background m_background;
    QPixmap m_bg_img;
    QPixmap m_stickman_anim[7];
    Stickman m_stickman;
    int m_counter;
};

#endif // DIALOG_H
