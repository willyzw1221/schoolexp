#ifndef WORKER_H
#define WORKER_H

#include <QWidget>

namespace Ui {
class worker;
}

class worker : public QWidget
{
    Q_OBJECT

public:
    explicit worker(QWidget *parent = 0);
    ~worker();

private:
    Ui::worker *ui;
};

#endif // WORKER_H
