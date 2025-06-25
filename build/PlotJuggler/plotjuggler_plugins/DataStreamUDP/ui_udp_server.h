/********************************************************************************
** Form generated from reading UI file 'udp_server.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDP_SERVER_H
#define UI_UDP_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UDPServerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEditAddress;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEditPort;
    QLabel *label_2;
    QComboBox *comboBoxProtocol;
    QWidget *boxOptions;
    QVBoxLayout *layoutOptions;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *UDPServerDialog)
    {
        if (UDPServerDialog->objectName().isEmpty())
            UDPServerDialog->setObjectName(QString::fromUtf8("UDPServerDialog"));
        UDPServerDialog->resize(298, 312);
        verticalLayout = new QVBoxLayout(UDPServerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(UDPServerDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        widget_2 = new QWidget(UDPServerDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font1;
        font1.setBold(true);
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        lineEditAddress = new QLineEdit(widget_2);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        horizontalLayout_3->addWidget(lineEditAddress);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(UDPServerDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        lineEditPort = new QLineEdit(widget);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        horizontalLayout_2->addWidget(lineEditPort);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(widget);

        label_2 = new QLabel(UDPServerDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        comboBoxProtocol = new QComboBox(UDPServerDialog);
        comboBoxProtocol->setObjectName(QString::fromUtf8("comboBoxProtocol"));

        verticalLayout->addWidget(comboBoxProtocol);

        boxOptions = new QWidget(UDPServerDialog);
        boxOptions->setObjectName(QString::fromUtf8("boxOptions"));
        layoutOptions = new QVBoxLayout(boxOptions);
        layoutOptions->setObjectName(QString::fromUtf8("layoutOptions"));
        layoutOptions->setContentsMargins(0, 6, 0, 6);
        label_3 = new QLabel(boxOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        layoutOptions->addWidget(label_3);


        verticalLayout->addWidget(boxOptions);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(UDPServerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(UDPServerDialog);

        QMetaObject::connectSlotsByName(UDPServerDialog);
    } // setupUi

    void retranslateUi(QWidget *UDPServerDialog)
    {
        UDPServerDialog->setWindowTitle(QCoreApplication::translate("UDPServerDialog", "UDP Server", nullptr));
        label->setText(QCoreApplication::translate("UDPServerDialog", "UDP Server Settings:", nullptr));
        label_5->setText(QCoreApplication::translate("UDPServerDialog", "Address:", nullptr));
        label_4->setText(QCoreApplication::translate("UDPServerDialog", "Port:", nullptr));
        lineEditPort->setText(QString());
        label_2->setText(QCoreApplication::translate("UDPServerDialog", "Message Protocol:", nullptr));
        label_3->setText(QCoreApplication::translate("UDPServerDialog", "Protocol options:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UDPServerDialog: public Ui_UDPServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDP_SERVER_H
