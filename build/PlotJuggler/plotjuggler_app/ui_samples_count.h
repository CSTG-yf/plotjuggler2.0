/********************************************************************************
** Form generated from reading UI file 'samples_count.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLES_COUNT_H
#define UI_SAMPLES_COUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SamplesCount
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBoxMilliseconds;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SamplesCount)
    {
        if (SamplesCount->objectName().isEmpty())
            SamplesCount->setObjectName(QString::fromUtf8("SamplesCount"));
        SamplesCount->resize(400, 300);
        verticalLayout = new QVBoxLayout(SamplesCount);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SamplesCount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(SamplesCount);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBoxMilliseconds = new QSpinBox(SamplesCount);
        spinBoxMilliseconds->setObjectName(QString::fromUtf8("spinBoxMilliseconds"));
        spinBoxMilliseconds->setMinimumSize(QSize(100, 0));
        spinBoxMilliseconds->setMinimum(1);
        spinBoxMilliseconds->setMaximum(999999);
        spinBoxMilliseconds->setValue(1000);

        horizontalLayout->addWidget(spinBoxMilliseconds);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SamplesCount);

        QMetaObject::connectSlotsByName(SamplesCount);
    } // setupUi

    void retranslateUi(QWidget *SamplesCount)
    {
        SamplesCount->setWindowTitle(QCoreApplication::translate("SamplesCount", "Form", nullptr));
        label->setText(QCoreApplication::translate("SamplesCount", "Count the number of data points in the given time interval:", nullptr));
        label_2->setText(QCoreApplication::translate("SamplesCount", "Milliseconds:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SamplesCount: public Ui_SamplesCount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLES_COUNT_H
