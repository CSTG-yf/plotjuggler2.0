/********************************************************************************
** Form generated from reading UI file 'dataload_csv.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATALOAD_CSV_H
#define UI_DATALOAD_CSV_H

#include <QCodeEditor>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogCSV
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonIndex;
    QRadioButton *radioButtonSelect;
    QFrame *line;
    QLabel *label_3;
    QListWidget *listWidgetSeries;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioAutoTime;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioCustomTime;
    QLineEdit *lineEditDateFormat;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *dateTimeHelpButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QLabel *label_2;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_7;
    QTableView *tableView;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_9;
    QCodeEditor *rawText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogCSV)
    {
        if (DialogCSV->objectName().isEmpty())
            DialogCSV->setObjectName(QString::fromUtf8("DialogCSV"));
        DialogCSV->resize(1107, 640);
        verticalLayout_3 = new QVBoxLayout(DialogCSV);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(DialogCSV);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 10, 0);
        radioButtonIndex = new QRadioButton(layoutWidget);
        radioButtonIndex->setObjectName(QString::fromUtf8("radioButtonIndex"));

        verticalLayout->addWidget(radioButtonIndex);

        radioButtonSelect = new QRadioButton(layoutWidget);
        radioButtonSelect->setObjectName(QString::fromUtf8("radioButtonSelect"));
        radioButtonSelect->setChecked(true);

        verticalLayout->addWidget(radioButtonSelect);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        listWidgetSeries = new QListWidget(layoutWidget);
        listWidgetSeries->setObjectName(QString::fromUtf8("listWidgetSeries"));

        verticalLayout->addWidget(listWidgetSeries);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        radioAutoTime = new QRadioButton(layoutWidget1);
        radioAutoTime->setObjectName(QString::fromUtf8("radioAutoTime"));
        radioAutoTime->setChecked(true);

        verticalLayout_2->addWidget(radioAutoTime);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        radioCustomTime = new QRadioButton(layoutWidget1);
        radioCustomTime->setObjectName(QString::fromUtf8("radioCustomTime"));

        horizontalLayout_2->addWidget(radioCustomTime);

        lineEditDateFormat = new QLineEdit(layoutWidget1);
        lineEditDateFormat->setObjectName(QString::fromUtf8("lineEditDateFormat"));
        lineEditDateFormat->setEnabled(false);

        horizontalLayout_2->addWidget(lineEditDateFormat);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        dateTimeHelpButton = new QPushButton(layoutWidget1);
        dateTimeHelpButton->setObjectName(QString::fromUtf8("dateTimeHelpButton"));
        dateTimeHelpButton->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(dateTimeHelpButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line_2 = new QFrame(layoutWidget1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        tabWidget = new QTabWidget(layoutWidget1);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_7 = new QVBoxLayout(tab_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setLayoutDirection(Qt::LeftToRight);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setProperty("showDropIndicator", QVariant(false));
        tableView->setDragDropOverwriteMode(false);
        tableView->setWordWrap(true);
        tableView->verticalHeader()->setStretchLastSection(false);

        verticalLayout_7->addWidget(tableView);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_9 = new QVBoxLayout(tab_3);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        rawText = new QCodeEditor(tab_3);
        rawText->setObjectName(QString::fromUtf8("rawText"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(rawText->sizePolicy().hasHeightForWidth());
        rawText->setSizePolicy(sizePolicy1);
        rawText->setLineWrapMode(QTextEdit::NoWrap);
        rawText->setReadOnly(true);

        verticalLayout_9->addWidget(rawText);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);

        buttonBox = new QDialogButtonBox(DialogCSV);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DialogCSV);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogCSV, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogCSV, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogCSV);
    } // setupUi

    void retranslateUi(QDialog *DialogCSV)
    {
        DialogCSV->setWindowTitle(QCoreApplication::translate("DialogCSV", "CSV Loader", nullptr));
        radioButtonIndex->setText(QCoreApplication::translate("DialogCSV", "Use row number as X axis", nullptr));
        radioButtonSelect->setText(QCoreApplication::translate("DialogCSV", "Select a column to be used as X axis", nullptr));
        label_3->setText(QCoreApplication::translate("DialogCSV", "Columns:", nullptr));
        label->setText(QCoreApplication::translate("DialogCSV", "Delimiter:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DialogCSV", "\",\" (comma)", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DialogCSV", "\";\" (semicolon)", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DialogCSV", "\" \" (space)", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("DialogCSV", "\"\\t\" (tab)", nullptr));

        radioAutoTime->setText(QCoreApplication::translate("DialogCSV", "Detect timestamp format automatically", nullptr));
        radioCustomTime->setText(QCoreApplication::translate("DialogCSV", "Custom Format", nullptr));
        lineEditDateFormat->setText(QCoreApplication::translate("DialogCSV", "yyyy-MM-dd hh:mm:ss", nullptr));
        lineEditDateFormat->setPlaceholderText(QCoreApplication::translate("DialogCSV", "yyyy-MM-dd hh:mm:ss", nullptr));
        dateTimeHelpButton->setText(QCoreApplication::translate("DialogCSV", "Date Format Help", nullptr));
        label_2->setText(QCoreApplication::translate("DialogCSV", "Preview (first 100 lines at most):", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("DialogCSV", "Table View", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("DialogCSV", "Raw Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogCSV: public Ui_DialogCSV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATALOAD_CSV_H
