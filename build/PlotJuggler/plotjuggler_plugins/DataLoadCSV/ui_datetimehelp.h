/********************************************************************************
** Form generated from reading UI file 'datetimehelp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATETIMEHELP_H
#define UI_DATETIMEHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateTimeHelp
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout;
    QLabel *exampleDateTimeLabel;
    QDateTimeEdit *exampleDateTimeDateTimeEdit;
    QLabel *exampleFormatStringLabel;
    QLineEdit *exampleFormatStringLineEdit;
    QLabel *resultLabel;
    QLineEdit *resultLineEdit;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QTableWidget *dateFormatTable;
    QLabel *label_3;
    QTableWidget *timeFormatTable;
    QCheckBox *autoCloseCheckBox;

    void setupUi(QDialog *DateTimeHelp)
    {
        if (DateTimeHelp->objectName().isEmpty())
            DateTimeHelp->setObjectName(QString::fromUtf8("DateTimeHelp"));
        DateTimeHelp->resize(984, 652);
        DateTimeHelp->setAcceptDrops(false);
        verticalLayout_2 = new QVBoxLayout(DateTimeHelp);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DateTimeHelp);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        exampleDateTimeLabel = new QLabel(groupBox);
        exampleDateTimeLabel->setObjectName(QString::fromUtf8("exampleDateTimeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, exampleDateTimeLabel);

        exampleDateTimeDateTimeEdit = new QDateTimeEdit(groupBox);
        exampleDateTimeDateTimeEdit->setObjectName(QString::fromUtf8("exampleDateTimeDateTimeEdit"));
        exampleDateTimeDateTimeEdit->setCalendarPopup(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, exampleDateTimeDateTimeEdit);

        exampleFormatStringLabel = new QLabel(groupBox);
        exampleFormatStringLabel->setObjectName(QString::fromUtf8("exampleFormatStringLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, exampleFormatStringLabel);

        exampleFormatStringLineEdit = new QLineEdit(groupBox);
        exampleFormatStringLineEdit->setObjectName(QString::fromUtf8("exampleFormatStringLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, exampleFormatStringLineEdit);

        resultLabel = new QLabel(groupBox);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, resultLabel);

        resultLineEdit = new QLineEdit(groupBox);
        resultLineEdit->setObjectName(QString::fromUtf8("resultLineEdit"));
        resultLineEdit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, resultLineEdit);


        verticalLayout_4->addLayout(formLayout);


        verticalLayout->addWidget(groupBox);

        scrollArea = new QScrollArea(DateTimeHelp);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 937, 1084));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_6->addWidget(label_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        dateFormatTable = new QTableWidget(groupBox_2);
        if (dateFormatTable->columnCount() < 2)
            dateFormatTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        dateFormatTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        dateFormatTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (dateFormatTable->rowCount() < 10)
            dateFormatTable->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        dateFormatTable->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        dateFormatTable->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        dateFormatTable->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        dateFormatTable->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        dateFormatTable->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        dateFormatTable->setItem(2, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        dateFormatTable->setItem(2, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        dateFormatTable->setItem(3, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        dateFormatTable->setItem(3, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        dateFormatTable->setItem(4, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        dateFormatTable->setItem(4, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        dateFormatTable->setItem(5, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        dateFormatTable->setItem(5, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        dateFormatTable->setItem(6, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        dateFormatTable->setItem(6, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        dateFormatTable->setItem(7, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        dateFormatTable->setItem(7, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        dateFormatTable->setItem(8, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        dateFormatTable->setItem(8, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        dateFormatTable->setItem(9, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        dateFormatTable->setItem(9, 1, __qtablewidgetitem31);
        dateFormatTable->setObjectName(QString::fromUtf8("dateFormatTable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateFormatTable->sizePolicy().hasHeightForWidth());
        dateFormatTable->setSizePolicy(sizePolicy);
        dateFormatTable->setMinimumSize(QSize(0, 0));
        dateFormatTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        dateFormatTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        dateFormatTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dateFormatTable->setProperty("showDropIndicator", QVariant(false));
        dateFormatTable->setAlternatingRowColors(true);
        dateFormatTable->horizontalHeader()->setStretchLastSection(true);
        dateFormatTable->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(dateFormatTable);


        verticalLayout_6->addLayout(verticalLayout_5);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_6->addWidget(label_3);

        timeFormatTable = new QTableWidget(groupBox_2);
        if (timeFormatTable->columnCount() < 2)
            timeFormatTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        timeFormatTable->setHorizontalHeaderItem(0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        timeFormatTable->setHorizontalHeaderItem(1, __qtablewidgetitem33);
        if (timeFormatTable->rowCount() < 12)
            timeFormatTable->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(3, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(4, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(5, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(6, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(7, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(8, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(9, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(10, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        timeFormatTable->setVerticalHeaderItem(11, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        timeFormatTable->setItem(0, 0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        timeFormatTable->setItem(0, 1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        timeFormatTable->setItem(1, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        timeFormatTable->setItem(1, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        timeFormatTable->setItem(2, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        timeFormatTable->setItem(2, 1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        timeFormatTable->setItem(3, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        timeFormatTable->setItem(3, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        timeFormatTable->setItem(4, 0, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        timeFormatTable->setItem(4, 1, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        timeFormatTable->setItem(5, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        timeFormatTable->setItem(5, 1, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        timeFormatTable->setItem(6, 0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        timeFormatTable->setItem(6, 1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        timeFormatTable->setItem(7, 0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        timeFormatTable->setItem(7, 1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        timeFormatTable->setItem(8, 0, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        timeFormatTable->setItem(8, 1, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        timeFormatTable->setItem(9, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        timeFormatTable->setItem(9, 1, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        timeFormatTable->setItem(10, 0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        timeFormatTable->setItem(10, 1, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        timeFormatTable->setItem(11, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        timeFormatTable->setItem(11, 1, __qtablewidgetitem69);
        timeFormatTable->setObjectName(QString::fromUtf8("timeFormatTable"));
        timeFormatTable->setMinimumSize(QSize(0, 0));
        timeFormatTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        timeFormatTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        timeFormatTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        timeFormatTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        timeFormatTable->setAlternatingRowColors(true);
        timeFormatTable->horizontalHeader()->setStretchLastSection(true);
        timeFormatTable->verticalHeader()->setVisible(false);

        verticalLayout_6->addWidget(timeFormatTable);


        verticalLayout_7->addWidget(groupBox_2);


        horizontalLayout_3->addLayout(verticalLayout_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        autoCloseCheckBox = new QCheckBox(DateTimeHelp);
        autoCloseCheckBox->setObjectName(QString::fromUtf8("autoCloseCheckBox"));
        autoCloseCheckBox->setChecked(true);

        verticalLayout->addWidget(autoCloseCheckBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DateTimeHelp);

        QMetaObject::connectSlotsByName(DateTimeHelp);
    } // setupUi

    void retranslateUi(QDialog *DateTimeHelp)
    {
        DateTimeHelp->setWindowTitle(QCoreApplication::translate("DateTimeHelp", "Date-Time Format", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DateTimeHelp", "Date-Time Example", nullptr));
        exampleDateTimeLabel->setText(QCoreApplication::translate("DateTimeHelp", "Example Date-Time (Format: M/d/yyyy h:mm:ss.zzz AP):", nullptr));
        exampleDateTimeDateTimeEdit->setDisplayFormat(QCoreApplication::translate("DateTimeHelp", "M/d/yyyy h:mm:ss.zzz AP", nullptr));
        exampleFormatStringLabel->setText(QCoreApplication::translate("DateTimeHelp", "Example Format String", nullptr));
        exampleFormatStringLineEdit->setText(QCoreApplication::translate("DateTimeHelp", "d-MM-yyyy h:mm:ss", nullptr));
        resultLabel->setText(QCoreApplication::translate("DateTimeHelp", "Result", nullptr));
        groupBox_2->setTitle(QString());
        label_5->setText(QCoreApplication::translate("DateTimeHelp", "All other input characters will be treated as text. Any non-empty sequence of characters enclosed in single quotes will also be treated (stripped of the quotes) as text and not be interpreted as expressions.", nullptr));
        label_4->setText(QCoreApplication::translate("DateTimeHelp", "Date Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem = dateFormatTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DateTimeHelp", "Expression", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = dateFormatTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DateTimeHelp", "Output", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = dateFormatTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DateTimeHelp", "row1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = dateFormatTable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DateTimeHelp", "row2", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = dateFormatTable->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DateTimeHelp", "row3", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = dateFormatTable->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DateTimeHelp", "row4", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = dateFormatTable->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DateTimeHelp", "row5", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = dateFormatTable->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DateTimeHelp", "row6", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = dateFormatTable->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DateTimeHelp", "row7", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = dateFormatTable->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DateTimeHelp", "row8", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = dateFormatTable->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DateTimeHelp", "row9", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = dateFormatTable->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DateTimeHelp", "row10", nullptr));

        const bool __sortingEnabled = dateFormatTable->isSortingEnabled();
        dateFormatTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = dateFormatTable->item(0, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DateTimeHelp", "d", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = dateFormatTable->item(0, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DateTimeHelp", "The day as a number without a leading zero (1 to 31)", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = dateFormatTable->item(1, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DateTimeHelp", "dd", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = dateFormatTable->item(1, 1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DateTimeHelp", "The day as a number with a leading zero (01 to 31)", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = dateFormatTable->item(2, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DateTimeHelp", "ddd", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = dateFormatTable->item(2, 1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DateTimeHelp", "The abbreviated localized day name (e.g. 'Mon' to 'Sun')", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = dateFormatTable->item(3, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("DateTimeHelp", "dddd", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = dateFormatTable->item(3, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("DateTimeHelp", "The long localized day name (e.g. 'Monday' to 'Sunday').", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = dateFormatTable->item(4, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("DateTimeHelp", "M", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = dateFormatTable->item(4, 1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("DateTimeHelp", "The month as a number without a leading zero (1 to 12)", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = dateFormatTable->item(5, 0);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("DateTimeHelp", "MM", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = dateFormatTable->item(5, 1);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("DateTimeHelp", "The month as a number with a leading zero (01 to 12)", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = dateFormatTable->item(6, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("DateTimeHelp", "MMM", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = dateFormatTable->item(6, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("DateTimeHelp", "The abbreviated localized month name (e.g. 'Jan' to 'Dec')", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = dateFormatTable->item(7, 0);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("DateTimeHelp", "MMMM", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = dateFormatTable->item(7, 1);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("DateTimeHelp", "The long localized month name (e.g. 'January' to 'December')", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = dateFormatTable->item(8, 0);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("DateTimeHelp", "yy", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = dateFormatTable->item(8, 1);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("DateTimeHelp", "The year as a two digit number (00 to 99)", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = dateFormatTable->item(9, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("DateTimeHelp", "yyyy", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = dateFormatTable->item(9, 1);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("DateTimeHelp", "The year as a four digit number, possibly plus a leading minus sign for negative years.", nullptr));
        dateFormatTable->setSortingEnabled(__sortingEnabled);

        label_3->setText(QCoreApplication::translate("DateTimeHelp", "Time Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = timeFormatTable->horizontalHeaderItem(0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("DateTimeHelp", "Expression", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = timeFormatTable->horizontalHeaderItem(1);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("DateTimeHelp", "Output", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = timeFormatTable->verticalHeaderItem(0);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("DateTimeHelp", "row1", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = timeFormatTable->verticalHeaderItem(1);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("DateTimeHelp", "row2", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = timeFormatTable->verticalHeaderItem(2);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("DateTimeHelp", "row3", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = timeFormatTable->verticalHeaderItem(3);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("DateTimeHelp", "row4", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = timeFormatTable->verticalHeaderItem(4);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("DateTimeHelp", "row5", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = timeFormatTable->verticalHeaderItem(5);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("DateTimeHelp", "row6", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = timeFormatTable->verticalHeaderItem(6);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("DateTimeHelp", "row7", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = timeFormatTable->verticalHeaderItem(7);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("DateTimeHelp", "row8", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = timeFormatTable->verticalHeaderItem(8);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("DateTimeHelp", "row9", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = timeFormatTable->verticalHeaderItem(9);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("DateTimeHelp", "row10", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = timeFormatTable->verticalHeaderItem(10);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("DateTimeHelp", "row11", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = timeFormatTable->verticalHeaderItem(11);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("DateTimeHelp", "row12", nullptr));

        const bool __sortingEnabled1 = timeFormatTable->isSortingEnabled();
        timeFormatTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem46 = timeFormatTable->item(0, 0);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("DateTimeHelp", "h", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = timeFormatTable->item(0, 1);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("DateTimeHelp", "The hour without a leading zero (0 to 23 or 1 to 12 if AM/PM display)", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = timeFormatTable->item(1, 0);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("DateTimeHelp", "hh", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = timeFormatTable->item(1, 1);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("DateTimeHelp", "The hour with a leading zero (00 to 23 or 01 to 12 if AM/PM display)", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = timeFormatTable->item(2, 0);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("DateTimeHelp", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = timeFormatTable->item(2, 1);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("DateTimeHelp", "The hour without a leading zero (0 to 23, even with AM/PM display)", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = timeFormatTable->item(3, 0);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("DateTimeHelp", "HH", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = timeFormatTable->item(3, 1);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("DateTimeHelp", "The hour with a leading zero (00 to 23, even with AM/PM display)", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = timeFormatTable->item(4, 0);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("DateTimeHelp", "m", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = timeFormatTable->item(4, 1);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("DateTimeHelp", "The minute without a leading zero (0 to 59)", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = timeFormatTable->item(5, 0);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("DateTimeHelp", "mm", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = timeFormatTable->item(5, 1);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("DateTimeHelp", "The minute with a leading zero (00 to 59)", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = timeFormatTable->item(6, 0);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("DateTimeHelp", "s", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = timeFormatTable->item(6, 1);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("DateTimeHelp", "The whole second, without any leading zero (0 to 59)", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = timeFormatTable->item(7, 0);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("DateTimeHelp", "ss", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = timeFormatTable->item(7, 1);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("DateTimeHelp", "The whole second, with a leading zero where applicable (00 to 59)", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = timeFormatTable->item(8, 0);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("DateTimeHelp", "z", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = timeFormatTable->item(8, 1);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("DateTimeHelp", "The fractional part of the second, to go after a decimal point, without trailing zeroes (0 to 999). Thus \"s.z\" reports the seconds to full available (millisecond) precision without trailing zeroes.", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = timeFormatTable->item(9, 0);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("DateTimeHelp", "zzz", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = timeFormatTable->item(9, 1);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("DateTimeHelp", "The fractional part of the second, to millisecond precision, including trailing zeroes where applicable (000 to 999).", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = timeFormatTable->item(10, 0);
        ___qtablewidgetitem66->setText(QCoreApplication::translate("DateTimeHelp", "AP or A", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = timeFormatTable->item(10, 1);
        ___qtablewidgetitem67->setText(QCoreApplication::translate("DateTimeHelp", "Interpret as an AM/PM time. A/AP will match an upper-case version of either QLocale::amText() or QLocale::pmText().", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = timeFormatTable->item(11, 0);
        ___qtablewidgetitem68->setText(QCoreApplication::translate("DateTimeHelp", "ap or a", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = timeFormatTable->item(11, 1);
        ___qtablewidgetitem69->setText(QCoreApplication::translate("DateTimeHelp", "Interpret as an am/pm time. a/ap will match a lower-case version of either QLocale::amText() or QLocale::pmText().", nullptr));
        timeFormatTable->setSortingEnabled(__sortingEnabled1);

        autoCloseCheckBox->setText(QCoreApplication::translate("DateTimeHelp", "Close window automatically", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateTimeHelp: public Ui_DateTimeHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATETIMEHELP_H
