#ifndef STATICLIBCLOCK_H
#define STATICLIBCLOCK_H

#include <QWidget>

class staticlibclock : public QWidget
{
    Q_OBJECT

public:
    staticlibclock(QWidget *parent = nullptr);


protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // STATICLIBCLOCK_H
