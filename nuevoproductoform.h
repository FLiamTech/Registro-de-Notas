#ifndef NUEVOPRODUCTOFORM_H
#define NUEVOPRODUCTOFORM_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QList>

#include <inventario.h>

namespace Ui {
class NuevoProductoForm;
}

class NuevoProductoForm : public QWidget
{
    Q_OBJECT

public:
    explicit NuevoProductoForm(QWidget *parent = nullptr);
    ~NuevoProductoForm();

signals:
    void productoAgregado(QString sku, QString nombre, double precioCompra, int existencias);

private slots:
    void on_btnBox_accepted();

private:
    Ui::NuevoProductoForm *ui;
    QList <Productos *> m_productos;
};

#endif // NUEVOPRODUCTOFORM_H
