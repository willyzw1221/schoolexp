#ifndef READER_H
#define READER_H

#include <QWidget>

namespace Ui {
class reader;
}

class reader : public QWidget
{
    Q_OBJECT

public:
    explicit reader(QWidget *parent = 0);
    ~reader();

private:
    Ui::reader *ui;
};

#endif // READER_H
