#pragma once
#include <QObject>

class QuickFutureUnitTests : public QObject
{
    Q_OBJECT
public:
    explicit QuickFutureUnitTests(QObject *parent = 0);

private slots:
    void typeChecking();

    void test_QFVariantWrapper();
};

