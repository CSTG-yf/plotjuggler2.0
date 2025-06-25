/********************************************************************************
** Form generated from reading UI file 'dialog_mcap.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MCAP_H
#define UI_DIALOG_MCAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dialog_mcap
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioClamp;
    QRadioButton *radioSkip;
    QCheckBox *checkBoxUseTimestamp;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label_3;
    QRadioButton *radioPubTime;
    QRadioButton *radioLogTime;
    QFrame *line;
    QLabel *label;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *dialog_mcap)
    {
        if (dialog_mcap->objectName().isEmpty())
            dialog_mcap->setObjectName(QString::fromUtf8("dialog_mcap"));
        dialog_mcap->resize(767, 637);
        verticalLayout = new QVBoxLayout(dialog_mcap);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(dialog_mcap);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBox = new QSpinBox(dialog_mcap);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(0);
        spinBox->setMaximum(9999);

        horizontalLayout->addWidget(spinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radioClamp = new QRadioButton(dialog_mcap);
        radioClamp->setObjectName(QString::fromUtf8("radioClamp"));
        radioClamp->setChecked(true);

        horizontalLayout->addWidget(radioClamp);

        radioSkip = new QRadioButton(dialog_mcap);
        radioSkip->setObjectName(QString::fromUtf8("radioSkip"));

        horizontalLayout->addWidget(radioSkip);


        verticalLayout->addLayout(horizontalLayout);

        checkBoxUseTimestamp = new QCheckBox(dialog_mcap);
        checkBoxUseTimestamp->setObjectName(QString::fromUtf8("checkBoxUseTimestamp"));

        verticalLayout->addWidget(checkBoxUseTimestamp);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        label_3 = new QLabel(dialog_mcap);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_1->addWidget(label_3);

        radioPubTime = new QRadioButton(dialog_mcap);
        buttonGroup = new QButtonGroup(dialog_mcap);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioPubTime);
        radioPubTime->setObjectName(QString::fromUtf8("radioPubTime"));
        radioPubTime->setChecked(true);

        horizontalLayout_1->addWidget(radioPubTime);

        radioLogTime = new QRadioButton(dialog_mcap);
        buttonGroup->addButton(radioLogTime);
        radioLogTime->setObjectName(QString::fromUtf8("radioLogTime"));

        horizontalLayout_1->addWidget(radioLogTime);


        verticalLayout->addLayout(horizontalLayout_1);

        line = new QFrame(dialog_mcap);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        label = new QLabel(dialog_mcap);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(dialog_mcap);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setSortingEnabled(true);
        tableWidget->setColumnCount(3);
        tableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableWidget);

        buttonBox = new QDialogButtonBox(dialog_mcap);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(dialog_mcap);
        QObject::connect(buttonBox, SIGNAL(accepted()), dialog_mcap, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dialog_mcap, SLOT(reject()));

        QMetaObject::connectSlotsByName(dialog_mcap);
    } // setupUi

    void retranslateUi(QDialog *dialog_mcap)
    {
        dialog_mcap->setWindowTitle(QCoreApplication::translate("dialog_mcap", "MCAP Parser", nullptr));
        label_2->setText(QCoreApplication::translate("dialog_mcap", "When an array size exceeds:", nullptr));
        radioClamp->setText(QCoreApplication::translate("dialog_mcap", "Clamp", nullptr));
        radioSkip->setText(QCoreApplication::translate("dialog_mcap", "Skip", nullptr));
        checkBoxUseTimestamp->setText(QCoreApplication::translate("dialog_mcap", "Use the timestamp in the message (if present)", nullptr));
        label_3->setText(QCoreApplication::translate("dialog_mcap", "Select the MCAP timestamping mode:", nullptr));
        radioPubTime->setText(QCoreApplication::translate("dialog_mcap", "publish time", nullptr));
        radioLogTime->setText(QCoreApplication::translate("dialog_mcap", "log time", nullptr));
        label->setText(QCoreApplication::translate("dialog_mcap", "Select the channels that you want to load:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("dialog_mcap", "Channel name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("dialog_mcap", "Schema", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("dialog_mcap", "Encoding", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog_mcap: public Ui_dialog_mcap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MCAP_H
