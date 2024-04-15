#ifndef CPPMODEL_H
#define CPPMODEL_H

#include <QtQuick/QQuickPaintedItem>

class CppModel : public QQuickPaintedItem
{
    Q_OBJECT
    //QML_ELEMENT
    Q_DISABLE_COPY(CppModel)
public:
    explicit CppModel(QQuickItem *parent = nullptr);
    void paint(QPainter *painter) override;
    ~CppModel() override;

    // 获得下发记录
    Q_INVOKABLE void readRecordList(int i_Index);
};

#endif // CPPMODEL_H
