#ifndef DEVICE_H
#define DEVICE_H

#include <QObject>

class Device : public QObject
{
    Q_OBJECT

    QString m_name{};               //deviceName [sensorName:address]
    QStringList m_values{};  //current variable's values
public:
    explicit Device(QString name, QObject *parent = nullptr);

    QString name() const;
    QString sensorName() const;
    QStringList values() const;

public slots:
    void setValues(const QStringList &);

signals:
    void valuesChanged(QStringList);
};

#endif // DEVICE_H
