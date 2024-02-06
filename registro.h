#ifndef REGISTRO_H
#define REGISTRO_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class Registro; }
QT_END_NAMESPACE

class Registro : public QMainWindow
{
    Q_OBJECT

public:
    Registro(QWidget *parent = nullptr);
    ~Registro();

private:
    Ui::Registro *ui;
};
#endif // REGISTRO_H
