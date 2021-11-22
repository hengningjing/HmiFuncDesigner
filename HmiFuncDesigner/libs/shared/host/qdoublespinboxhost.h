#ifndef QDOUBLESPINBOXHOST_H
#define QDOUBLESPINBOXHOST_H

#include "qabstractspinboxhost.h"

class QDoubleSpinBoxHost: public QAbstractSpinBoxHost
{
    Q_OBJECT
public:
    Q_INVOKABLE QDoubleSpinBoxHost(QAbstractHost *parent = 0);

    static QString getShowName();
    static QString getShowIcon();
    static QString getShowGroup();

public slots:
    void setValue(float value);
    float value();

    void setSingleStep(float singleStep);
    float singleStep();

    void setDecimals(int decimals);
    int decimals();

protected slots:
    void valueChanged(const QString& value);

protected:
    void initProperty() override;

protected:
    void createObject() override;

    // 控件支持的功能事件
    QStringList supportFuncEvents() override;
};
#endif // QDOUBLESPINBOXHOST_H
