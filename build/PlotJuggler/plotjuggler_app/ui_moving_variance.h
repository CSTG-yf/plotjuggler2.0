/********************************************************************************
** Form generated from reading UI file 'moving_variance.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVING_VARIANCE_H
#define UI_MOVING_VARIANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MovingVarianceFilter
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QSpinBox *spinBoxSamples;
    QLabel *label_2;
    QCheckBox *checkBoxStdDev;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MovingVarianceFilter)
    {
        if (MovingVarianceFilter->objectName().isEmpty())
            MovingVarianceFilter->setObjectName(QString::fromUtf8("MovingVarianceFilter"));
        MovingVarianceFilter->resize(425, 300);
        verticalLayout = new QVBoxLayout(MovingVarianceFilter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MovingVarianceFilter);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        spinBoxSamples = new QSpinBox(MovingVarianceFilter);
        spinBoxSamples->setObjectName(QString::fromUtf8("spinBoxSamples"));
        spinBoxSamples->setMaximumSize(QSize(100, 16777215));
        spinBoxSamples->setMinimum(1);
        spinBoxSamples->setMaximum(1000);
        spinBoxSamples->setValue(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxSamples);

        label_2 = new QLabel(MovingVarianceFilter);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);


        verticalLayout->addLayout(formLayout);

        checkBoxStdDev = new QCheckBox(MovingVarianceFilter);
        checkBoxStdDev->setObjectName(QString::fromUtf8("checkBoxStdDev"));

        verticalLayout->addWidget(checkBoxStdDev);

        label_3 = new QLabel(MovingVarianceFilter);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(MovingVarianceFilter);

        QMetaObject::connectSlotsByName(MovingVarianceFilter);
    } // setupUi

    void retranslateUi(QWidget *MovingVarianceFilter)
    {
        MovingVarianceFilter->setWindowTitle(QCoreApplication::translate("MovingVarianceFilter", "Form", nullptr));
        label->setText(QCoreApplication::translate("MovingVarianceFilter", "Select the size of the window", nullptr));
        label_2->setText(QCoreApplication::translate("MovingVarianceFilter", "Window size:", nullptr));
        checkBoxStdDev->setText(QCoreApplication::translate("MovingVarianceFilter", "Apply square root", nullptr));
        label_3->setText(QCoreApplication::translate("MovingVarianceFilter", "(i.e., convert to standard deviation)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MovingVarianceFilter: public Ui_MovingVarianceFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVING_VARIANCE_H
