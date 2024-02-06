#ifndef INGRESOFORM_H
#define INGRESOFORM_H

#include <QWidget>

namespace Ui {
class IngresoForm;
}

class IngresoForm : public QWidget
{
    Q_OBJECT

public:
    explicit IngresoForm(QWidget *parent = nullptr);
    ~IngresoForm();

private:
    Ui::IngresoForm *ui;
};

#endif // INGRESOFORM_H
