/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <menubar.h>
#include <realslider.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionShowPoints;
    QAction *actionAbout;
    QAction *actionReportBug;
    QAction *actionClearBuffer;
    QAction *actionCheatsheet;
    QAction *actionSupportPlotJuggler;
    QAction *actionClearRecentData;
    QAction *actionClearRecentLayout;
    QAction *actionDeleteAllData;
    QAction *actionPreferences;
    QAction *actionShare_the_love;
    QAction *actionLoadStyleSheet;
    QAction *actionColorMap_Editor;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *mainSplitter;
    QFrame *leftMainWindowFrame;
    QVBoxLayout *leftLayout;
    QWidget *widgetLabelLoad;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QPushButton *buttonHideFileFrame;
    QFrame *frameFile;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QPushButton *buttonLoadDatafile;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonReloadData;
    QPushButton *buttonRecentData;
    QCheckBox *checkBoxAddPrefixAndMerge;
    QFrame *line;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QPushButton *buttonLoadLayout;
    QPushButton *buttonSaveLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *buttonRecentLayout;
    QWidget *widgetLabelStreaming;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QPushButton *buttonHideStreamingFrame;
    QFrame *frameStreaming;
    QVBoxLayout *verticalLayout_3;
    QFrame *streamingFrameTop;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboStreaming;
    QPushButton *buttonStreamingOptions;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *buttonStreamingStart;
    QPushButton *buttonStreamingPause;
    QLabel *labelStreamingAnimation;
    QPushButton *buttonStreamingNotifications;
    QLabel *label_3;
    QSpinBox *streamingSpinBox;
    QWidget *widgetLabelPublishers;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QPushButton *buttonHidePublishersFrame;
    QFrame *framePublishers;
    QHBoxLayout *horizontalLayout_10;
    QGridLayout *layoutPublishers;
    QWidget *widgetLabelTimeseries;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *plottingArea;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *widgetStack;
    QWidget *plotPage;
    QVBoxLayout *plottingLayout;
    QWidget *widgetButtons;
    QHBoxLayout *horizontalLayout_5;
    QWidget *spacer;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonZoomOut;
    QPushButton *buttonTimeTracker;
    QPushButton *buttonLegend;
    QPushButton *buttonUseDateTime;
    QPushButton *buttonActivateGrid;
    QPushButton *buttonLink;
    QPushButton *buttonRemoveTimeOffset;
    QPushButton *buttonRatio;
    QSpacerItem *verticalSpacer;
    QWidget *widgetTimescale;
    QHBoxLayout *layoutTimescale;
    QLineEdit *displayTime;
    QWidget *widgetPlay;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *playbackLoop;
    QPushButton *buttonPlay;
    RealSlider *timeSlider;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *playbackRate;
    QLabel *label_2;
    QDoubleSpinBox *playbackStep;
    QWidget *formulaPage;
    QFrame *line_2;
    QWidget *widgetStatusBar;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QLabel *statusLabel;
    QPushButton *buttonCloseStatus;
    MenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuTools;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1058, 830);
        MainWindow->setFocusPolicy(Qt::StrongFocus);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionShowPoints = new QAction(MainWindow);
        actionShowPoints->setObjectName(QString::fromUtf8("actionShowPoints"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/svg/points.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowPoints->setIcon(icon);
        actionShowPoints->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionReportBug = new QAction(MainWindow);
        actionReportBug->setObjectName(QString::fromUtf8("actionReportBug"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/github.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReportBug->setIcon(icon1);
        actionClearBuffer = new QAction(MainWindow);
        actionClearBuffer->setObjectName(QString::fromUtf8("actionClearBuffer"));
        actionCheatsheet = new QAction(MainWindow);
        actionCheatsheet->setObjectName(QString::fromUtf8("actionCheatsheet"));
        actionSupportPlotJuggler = new QAction(MainWindow);
        actionSupportPlotJuggler->setObjectName(QString::fromUtf8("actionSupportPlotJuggler"));
        actionClearRecentData = new QAction(MainWindow);
        actionClearRecentData->setObjectName(QString::fromUtf8("actionClearRecentData"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/style_light/clean_pane.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearRecentData->setIcon(icon2);
        actionClearRecentLayout = new QAction(MainWindow);
        actionClearRecentLayout->setObjectName(QString::fromUtf8("actionClearRecentLayout"));
        actionClearRecentLayout->setIcon(icon2);
        actionDeleteAllData = new QAction(MainWindow);
        actionDeleteAllData->setObjectName(QString::fromUtf8("actionDeleteAllData"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionShare_the_love = new QAction(MainWindow);
        actionShare_the_love->setObjectName(QString::fromUtf8("actionShare_the_love"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShare_the_love->setIcon(icon3);
        actionLoadStyleSheet = new QAction(MainWindow);
        actionLoadStyleSheet->setObjectName(QString::fromUtf8("actionLoadStyleSheet"));
        actionColorMap_Editor = new QAction(MainWindow);
        actionColorMap_Editor->setObjectName(QString::fromUtf8("actionColorMap_Editor"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainSplitter = new QSplitter(centralWidget);
        mainSplitter->setObjectName(QString::fromUtf8("mainSplitter"));
        mainSplitter->setFrameShape(QFrame::NoFrame);
        mainSplitter->setMidLineWidth(0);
        mainSplitter->setOrientation(Qt::Horizontal);
        mainSplitter->setOpaqueResize(true);
        mainSplitter->setHandleWidth(1);
        mainSplitter->setChildrenCollapsible(false);
        leftMainWindowFrame = new QFrame(mainSplitter);
        leftMainWindowFrame->setObjectName(QString::fromUtf8("leftMainWindowFrame"));
        leftMainWindowFrame->setMinimumSize(QSize(300, 0));
        leftLayout = new QVBoxLayout(leftMainWindowFrame);
        leftLayout->setSpacing(2);
        leftLayout->setContentsMargins(11, 11, 11, 11);
        leftLayout->setObjectName(QString::fromUtf8("leftLayout"));
        leftLayout->setContentsMargins(0, 0, 0, -1);
        widgetLabelLoad = new QWidget(leftMainWindowFrame);
        widgetLabelLoad->setObjectName(QString::fromUtf8("widgetLabelLoad"));
        widgetLabelLoad->setMinimumSize(QSize(0, 22));
        widgetLabelLoad->setMaximumSize(QSize(16777215, 22));
        horizontalLayout_2 = new QHBoxLayout(widgetLabelLoad);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 0, 4, 0);
        label_5 = new QLabel(widgetLabelLoad);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(10);
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        buttonHideFileFrame = new QPushButton(widgetLabelLoad);
        buttonHideFileFrame->setObjectName(QString::fromUtf8("buttonHideFileFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonHideFileFrame->sizePolicy().hasHeightForWidth());
        buttonHideFileFrame->setSizePolicy(sizePolicy);
        buttonHideFileFrame->setMinimumSize(QSize(18, 18));
        buttonHideFileFrame->setMaximumSize(QSize(18, 18));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        buttonHideFileFrame->setFont(font1);
        buttonHideFileFrame->setFocusPolicy(Qt::NoFocus);
        buttonHideFileFrame->setFlat(true);

        horizontalLayout_2->addWidget(buttonHideFileFrame);


        leftLayout->addWidget(widgetLabelLoad);

        frameFile = new QFrame(leftMainWindowFrame);
        frameFile->setObjectName(QString::fromUtf8("frameFile"));
        verticalLayout_4 = new QVBoxLayout(frameFile);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(6, 4, 6, 4);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(frameFile);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        buttonLoadDatafile = new QPushButton(frameFile);
        buttonLoadDatafile->setObjectName(QString::fromUtf8("buttonLoadDatafile"));
        buttonLoadDatafile->setMinimumSize(QSize(26, 26));
        buttonLoadDatafile->setMaximumSize(QSize(26, 26));
        buttonLoadDatafile->setFocusPolicy(Qt::NoFocus);
        buttonLoadDatafile->setIconSize(QSize(22, 22));
        buttonLoadDatafile->setFlat(true);

        horizontalLayout_3->addWidget(buttonLoadDatafile);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonReloadData = new QPushButton(frameFile);
        buttonReloadData->setObjectName(QString::fromUtf8("buttonReloadData"));
        buttonReloadData->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/svg/reload.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonReloadData->setIcon(icon4);
        buttonReloadData->setIconSize(QSize(22, 22));
        buttonReloadData->setFlat(true);

        horizontalLayout_3->addWidget(buttonReloadData);

        buttonRecentData = new QPushButton(frameFile);
        buttonRecentData->setObjectName(QString::fromUtf8("buttonRecentData"));
        buttonRecentData->setMinimumSize(QSize(26, 26));
        buttonRecentData->setMaximumSize(QSize(26, 26));
        buttonRecentData->setIconSize(QSize(12, 12));
        buttonRecentData->setFlat(true);

        horizontalLayout_3->addWidget(buttonRecentData);

        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_3);

        checkBoxAddPrefixAndMerge = new QCheckBox(frameFile);
        checkBoxAddPrefixAndMerge->setObjectName(QString::fromUtf8("checkBoxAddPrefixAndMerge"));
        checkBoxAddPrefixAndMerge->setFocusPolicy(Qt::NoFocus);

        verticalLayout_4->addWidget(checkBoxAddPrefixAndMerge);

        line = new QFrame(frameFile);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_4->addWidget(line);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 10, -1, -1);
        label_9 = new QLabel(frameFile);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        buttonLoadLayout = new QPushButton(frameFile);
        buttonLoadLayout->setObjectName(QString::fromUtf8("buttonLoadLayout"));
        buttonLoadLayout->setMinimumSize(QSize(26, 26));
        buttonLoadLayout->setMaximumSize(QSize(26, 26));
        buttonLoadLayout->setFocusPolicy(Qt::NoFocus);
        buttonLoadLayout->setIconSize(QSize(22, 22));
        buttonLoadLayout->setFlat(true);

        horizontalLayout_11->addWidget(buttonLoadLayout);

        buttonSaveLayout = new QPushButton(frameFile);
        buttonSaveLayout->setObjectName(QString::fromUtf8("buttonSaveLayout"));
        buttonSaveLayout->setMinimumSize(QSize(26, 26));
        buttonSaveLayout->setMaximumSize(QSize(26, 26));
        buttonSaveLayout->setFocusPolicy(Qt::NoFocus);
        buttonSaveLayout->setIconSize(QSize(22, 22));
        buttonSaveLayout->setFlat(true);

        horizontalLayout_11->addWidget(buttonSaveLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);

        buttonRecentLayout = new QPushButton(frameFile);
        buttonRecentLayout->setObjectName(QString::fromUtf8("buttonRecentLayout"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonRecentLayout->sizePolicy().hasHeightForWidth());
        buttonRecentLayout->setSizePolicy(sizePolicy1);
        buttonRecentLayout->setMinimumSize(QSize(26, 26));
        buttonRecentLayout->setMaximumSize(QSize(26, 26));
        buttonRecentLayout->setIconSize(QSize(12, 12));
        buttonRecentLayout->setFlat(true);

        horizontalLayout_11->addWidget(buttonRecentLayout);


        verticalLayout_4->addLayout(horizontalLayout_11);


        leftLayout->addWidget(frameFile);

        widgetLabelStreaming = new QWidget(leftMainWindowFrame);
        widgetLabelStreaming->setObjectName(QString::fromUtf8("widgetLabelStreaming"));
        widgetLabelStreaming->setMinimumSize(QSize(0, 22));
        widgetLabelStreaming->setMaximumSize(QSize(16777215, 22));
        horizontalLayout_4 = new QHBoxLayout(widgetLabelStreaming);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(9, 0, 4, 0);
        label_6 = new QLabel(widgetLabelStreaming);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setFont(font);

        horizontalLayout_4->addWidget(label_6);

        buttonHideStreamingFrame = new QPushButton(widgetLabelStreaming);
        buttonHideStreamingFrame->setObjectName(QString::fromUtf8("buttonHideStreamingFrame"));
        sizePolicy.setHeightForWidth(buttonHideStreamingFrame->sizePolicy().hasHeightForWidth());
        buttonHideStreamingFrame->setSizePolicy(sizePolicy);
        buttonHideStreamingFrame->setMinimumSize(QSize(18, 18));
        buttonHideStreamingFrame->setMaximumSize(QSize(18, 18));
        buttonHideStreamingFrame->setFont(font1);
        buttonHideStreamingFrame->setFocusPolicy(Qt::NoFocus);
        buttonHideStreamingFrame->setFlat(true);

        horizontalLayout_4->addWidget(buttonHideStreamingFrame);


        leftLayout->addWidget(widgetLabelStreaming);

        frameStreaming = new QFrame(leftMainWindowFrame);
        frameStreaming->setObjectName(QString::fromUtf8("frameStreaming"));
        frameStreaming->setFrameShape(QFrame::NoFrame);
        frameStreaming->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frameStreaming);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 4, 6, 4);
        streamingFrameTop = new QFrame(frameStreaming);
        streamingFrameTop->setObjectName(QString::fromUtf8("streamingFrameTop"));
        horizontalLayout_7 = new QHBoxLayout(streamingFrameTop);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        comboStreaming = new QComboBox(streamingFrameTop);
        comboStreaming->setObjectName(QString::fromUtf8("comboStreaming"));
        comboStreaming->setEnabled(false);
        comboStreaming->setMinimumSize(QSize(0, 22));
        comboStreaming->setEditable(false);

        horizontalLayout_7->addWidget(comboStreaming);

        buttonStreamingOptions = new QPushButton(streamingFrameTop);
        buttonStreamingOptions->setObjectName(QString::fromUtf8("buttonStreamingOptions"));
        buttonStreamingOptions->setEnabled(true);
        buttonStreamingOptions->setMinimumSize(QSize(26, 26));
        buttonStreamingOptions->setMaximumSize(QSize(26, 26));
        buttonStreamingOptions->setIconSize(QSize(16, 16));
        buttonStreamingOptions->setFlat(true);

        horizontalLayout_7->addWidget(buttonStreamingOptions);

        horizontalLayout_7->setStretch(0, 1);

        verticalLayout_3->addWidget(streamingFrameTop);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, -1, 0, -1);
        buttonStreamingStart = new QPushButton(frameStreaming);
        buttonStreamingStart->setObjectName(QString::fromUtf8("buttonStreamingStart"));
        buttonStreamingStart->setEnabled(false);
        sizePolicy.setHeightForWidth(buttonStreamingStart->sizePolicy().hasHeightForWidth());
        buttonStreamingStart->setSizePolicy(sizePolicy);
        buttonStreamingStart->setMinimumSize(QSize(60, 30));
        buttonStreamingStart->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(9);
        buttonStreamingStart->setFont(font2);
        buttonStreamingStart->setFocusPolicy(Qt::NoFocus);
        buttonStreamingStart->setCheckable(true);

        horizontalLayout_8->addWidget(buttonStreamingStart);

        buttonStreamingPause = new QPushButton(frameStreaming);
        buttonStreamingPause->setObjectName(QString::fromUtf8("buttonStreamingPause"));
        buttonStreamingPause->setEnabled(false);
        buttonStreamingPause->setMinimumSize(QSize(26, 26));
        buttonStreamingPause->setMaximumSize(QSize(26, 26));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setStyleStrategy(QFont::PreferAntialias);
        buttonStreamingPause->setFont(font3);
        buttonStreamingPause->setFocusPolicy(Qt::NoFocus);
        buttonStreamingPause->setIconSize(QSize(27, 22));
        buttonStreamingPause->setCheckable(true);
        buttonStreamingPause->setFlat(true);

        horizontalLayout_8->addWidget(buttonStreamingPause);

        labelStreamingAnimation = new QLabel(frameStreaming);
        labelStreamingAnimation->setObjectName(QString::fromUtf8("labelStreamingAnimation"));
        labelStreamingAnimation->setMinimumSize(QSize(26, 26));
        labelStreamingAnimation->setMaximumSize(QSize(26, 26));

        horizontalLayout_8->addWidget(labelStreamingAnimation);

        buttonStreamingNotifications = new QPushButton(frameStreaming);
        buttonStreamingNotifications->setObjectName(QString::fromUtf8("buttonStreamingNotifications"));
        buttonStreamingNotifications->setEnabled(false);
        buttonStreamingNotifications->setMinimumSize(QSize(26, 26));
        buttonStreamingNotifications->setMaximumSize(QSize(26, 26));
        buttonStreamingNotifications->setFocusPolicy(Qt::NoFocus);
        buttonStreamingNotifications->setIconSize(QSize(27, 22));
        buttonStreamingNotifications->setCheckable(false);
        buttonStreamingNotifications->setFlat(true);

        horizontalLayout_8->addWidget(buttonStreamingNotifications);

        label_3 = new QLabel(frameStreaming);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));
        label_3->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Ubuntu"));
        label_3->setFont(font4);

        horizontalLayout_8->addWidget(label_3);

        streamingSpinBox = new QSpinBox(frameStreaming);
        streamingSpinBox->setObjectName(QString::fromUtf8("streamingSpinBox"));
        streamingSpinBox->setMinimumSize(QSize(60, 30));
        streamingSpinBox->setMaximumSize(QSize(16777215, 16777215));
        streamingSpinBox->setFocusPolicy(Qt::ClickFocus);
        streamingSpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        streamingSpinBox->setAccelerated(true);
        streamingSpinBox->setCorrectionMode(QAbstractSpinBox::CorrectToPreviousValue);
        streamingSpinBox->setMinimum(5);
        streamingSpinBox->setMaximum(999);
        streamingSpinBox->setValue(30);

        horizontalLayout_8->addWidget(streamingSpinBox);

        horizontalLayout_8->setStretch(4, 1);

        verticalLayout_3->addLayout(horizontalLayout_8);


        leftLayout->addWidget(frameStreaming);

        widgetLabelPublishers = new QWidget(leftMainWindowFrame);
        widgetLabelPublishers->setObjectName(QString::fromUtf8("widgetLabelPublishers"));
        widgetLabelPublishers->setMinimumSize(QSize(0, 22));
        widgetLabelPublishers->setMaximumSize(QSize(16777215, 22));
        horizontalLayout_9 = new QHBoxLayout(widgetLabelPublishers);
        horizontalLayout_9->setSpacing(4);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, 4, 0);
        label_8 = new QLabel(widgetLabelPublishers);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_9->addWidget(label_8);

        buttonHidePublishersFrame = new QPushButton(widgetLabelPublishers);
        buttonHidePublishersFrame->setObjectName(QString::fromUtf8("buttonHidePublishersFrame"));
        sizePolicy.setHeightForWidth(buttonHidePublishersFrame->sizePolicy().hasHeightForWidth());
        buttonHidePublishersFrame->setSizePolicy(sizePolicy);
        buttonHidePublishersFrame->setMinimumSize(QSize(18, 18));
        buttonHidePublishersFrame->setMaximumSize(QSize(18, 18));
        buttonHidePublishersFrame->setFont(font1);
        buttonHidePublishersFrame->setFocusPolicy(Qt::NoFocus);
        buttonHidePublishersFrame->setFlat(true);

        horizontalLayout_9->addWidget(buttonHidePublishersFrame);


        leftLayout->addWidget(widgetLabelPublishers);

        framePublishers = new QFrame(leftMainWindowFrame);
        framePublishers->setObjectName(QString::fromUtf8("framePublishers"));
        framePublishers->setFrameShape(QFrame::NoFrame);
        framePublishers->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(framePublishers);
        horizontalLayout_10->setSpacing(4);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(6, 4, 6, 4);
        layoutPublishers = new QGridLayout();
        layoutPublishers->setSpacing(6);
        layoutPublishers->setObjectName(QString::fromUtf8("layoutPublishers"));
        layoutPublishers->setHorizontalSpacing(2);
        layoutPublishers->setVerticalSpacing(4);

        horizontalLayout_10->addLayout(layoutPublishers);


        leftLayout->addWidget(framePublishers);

        widgetLabelTimeseries = new QWidget(leftMainWindowFrame);
        widgetLabelTimeseries->setObjectName(QString::fromUtf8("widgetLabelTimeseries"));
        widgetLabelTimeseries->setMinimumSize(QSize(0, 22));
        widgetLabelTimeseries->setMaximumSize(QSize(16777215, 22));
        verticalLayout_7 = new QVBoxLayout(widgetLabelTimeseries);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(9, 0, 9, 0);
        label_7 = new QLabel(widgetLabelTimeseries);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));

        verticalLayout_7->addWidget(label_7);


        leftLayout->addWidget(widgetLabelTimeseries);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        leftLayout->addItem(verticalSpacer_2);

        mainSplitter->addWidget(leftMainWindowFrame);
        plottingArea = new QWidget(mainSplitter);
        plottingArea->setObjectName(QString::fromUtf8("plottingArea"));
        verticalLayout_2 = new QVBoxLayout(plottingArea);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetStack = new QStackedWidget(plottingArea);
        widgetStack->setObjectName(QString::fromUtf8("widgetStack"));
        widgetStack->setFrameShape(QFrame::NoFrame);
        plotPage = new QWidget();
        plotPage->setObjectName(QString::fromUtf8("plotPage"));
        plottingLayout = new QVBoxLayout(plotPage);
        plottingLayout->setSpacing(4);
        plottingLayout->setContentsMargins(11, 11, 11, 11);
        plottingLayout->setObjectName(QString::fromUtf8("plottingLayout"));
        plottingLayout->setContentsMargins(10, 10, 10, 10);
        widgetButtons = new QWidget(plotPage);
        widgetButtons->setObjectName(QString::fromUtf8("widgetButtons"));
        widgetButtons->setMinimumSize(QSize(0, 34));
        widgetButtons->setMaximumSize(QSize(16777215, 34));
        horizontalLayout_5 = new QHBoxLayout(widgetButtons);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 6);
        spacer = new QWidget(widgetButtons);
        spacer->setObjectName(QString::fromUtf8("spacer"));
        spacer->setMinimumSize(QSize(40, 0));

        horizontalLayout_5->addWidget(spacer);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        buttonZoomOut = new QPushButton(widgetButtons);
        buttonZoomOut->setObjectName(QString::fromUtf8("buttonZoomOut"));
        buttonZoomOut->setMinimumSize(QSize(28, 28));
        buttonZoomOut->setMaximumSize(QSize(28, 28));
        buttonZoomOut->setFocusPolicy(Qt::NoFocus);
        buttonZoomOut->setIconSize(QSize(26, 26));
        buttonZoomOut->setFlat(true);

        horizontalLayout_5->addWidget(buttonZoomOut);

        buttonTimeTracker = new QPushButton(widgetButtons);
        buttonTimeTracker->setObjectName(QString::fromUtf8("buttonTimeTracker"));
        buttonTimeTracker->setMinimumSize(QSize(28, 28));
        buttonTimeTracker->setMaximumSize(QSize(28, 28));
        buttonTimeTracker->setFocusPolicy(Qt::NoFocus);
        buttonTimeTracker->setStyleSheet(QString::fromUtf8(""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/style_light/line_tracker_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonTimeTracker->setIcon(icon5);
        buttonTimeTracker->setIconSize(QSize(26, 26));
        buttonTimeTracker->setFlat(true);

        horizontalLayout_5->addWidget(buttonTimeTracker);

        buttonLegend = new QPushButton(widgetButtons);
        buttonLegend->setObjectName(QString::fromUtf8("buttonLegend"));
        buttonLegend->setMinimumSize(QSize(28, 28));
        buttonLegend->setMaximumSize(QSize(28, 28));
        buttonLegend->setFocusPolicy(Qt::NoFocus);
        buttonLegend->setIconSize(QSize(26, 26));
        buttonLegend->setFlat(true);

        horizontalLayout_5->addWidget(buttonLegend);

        buttonUseDateTime = new QPushButton(widgetButtons);
        buttonUseDateTime->setObjectName(QString::fromUtf8("buttonUseDateTime"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonUseDateTime->sizePolicy().hasHeightForWidth());
        buttonUseDateTime->setSizePolicy(sizePolicy2);
        buttonUseDateTime->setMinimumSize(QSize(28, 28));
        buttonUseDateTime->setMaximumSize(QSize(28, 28));
        buttonUseDateTime->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/style_light/datetime.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonUseDateTime->setIcon(icon6);
        buttonUseDateTime->setIconSize(QSize(26, 26));
        buttonUseDateTime->setCheckable(true);
        buttonUseDateTime->setFlat(true);

        horizontalLayout_5->addWidget(buttonUseDateTime);

        buttonActivateGrid = new QPushButton(widgetButtons);
        buttonActivateGrid->setObjectName(QString::fromUtf8("buttonActivateGrid"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonActivateGrid->sizePolicy().hasHeightForWidth());
        buttonActivateGrid->setSizePolicy(sizePolicy3);
        buttonActivateGrid->setMinimumSize(QSize(28, 28));
        buttonActivateGrid->setMaximumSize(QSize(28, 28));
        buttonActivateGrid->setFocusPolicy(Qt::NoFocus);
        buttonActivateGrid->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/style_light/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonActivateGrid->setIcon(icon7);
        buttonActivateGrid->setIconSize(QSize(26, 26));
        buttonActivateGrid->setCheckable(true);
        buttonActivateGrid->setFlat(true);

        horizontalLayout_5->addWidget(buttonActivateGrid);

        buttonLink = new QPushButton(widgetButtons);
        buttonLink->setObjectName(QString::fromUtf8("buttonLink"));
        buttonLink->setMinimumSize(QSize(28, 28));
        buttonLink->setMaximumSize(QSize(28, 28));
        buttonLink->setFocusPolicy(Qt::NoFocus);
        buttonLink->setIconSize(QSize(26, 26));
        buttonLink->setCheckable(true);
        buttonLink->setChecked(false);
        buttonLink->setFlat(true);

        horizontalLayout_5->addWidget(buttonLink);

        buttonRemoveTimeOffset = new QPushButton(widgetButtons);
        buttonRemoveTimeOffset->setObjectName(QString::fromUtf8("buttonRemoveTimeOffset"));
        sizePolicy2.setHeightForWidth(buttonRemoveTimeOffset->sizePolicy().hasHeightForWidth());
        buttonRemoveTimeOffset->setSizePolicy(sizePolicy2);
        buttonRemoveTimeOffset->setMinimumSize(QSize(28, 28));
        buttonRemoveTimeOffset->setMaximumSize(QSize(28, 28));
        buttonRemoveTimeOffset->setFocusPolicy(Qt::NoFocus);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/svg/t0.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRemoveTimeOffset->setIcon(icon8);
        buttonRemoveTimeOffset->setIconSize(QSize(26, 26));
        buttonRemoveTimeOffset->setCheckable(true);
        buttonRemoveTimeOffset->setChecked(false);
        buttonRemoveTimeOffset->setFlat(true);

        horizontalLayout_5->addWidget(buttonRemoveTimeOffset);

        buttonRatio = new QPushButton(widgetButtons);
        buttonRatio->setObjectName(QString::fromUtf8("buttonRatio"));
        sizePolicy1.setHeightForWidth(buttonRatio->sizePolicy().hasHeightForWidth());
        buttonRatio->setSizePolicy(sizePolicy1);
        buttonRatio->setMinimumSize(QSize(28, 28));
        buttonRatio->setMaximumSize(QSize(28, 28));
        buttonRatio->setFocusPolicy(Qt::NoFocus);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/svg/ratio.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRatio->setIcon(icon9);
        buttonRatio->setIconSize(QSize(26, 26));
        buttonRatio->setCheckable(true);
        buttonRatio->setChecked(false);
        buttonRatio->setFlat(true);

        horizontalLayout_5->addWidget(buttonRatio);


        plottingLayout->addWidget(widgetButtons);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        plottingLayout->addItem(verticalSpacer);

        widgetTimescale = new QWidget(plotPage);
        widgetTimescale->setObjectName(QString::fromUtf8("widgetTimescale"));
        widgetTimescale->setMaximumSize(QSize(16777215, 40));
        layoutTimescale = new QHBoxLayout(widgetTimescale);
        layoutTimescale->setSpacing(6);
        layoutTimescale->setContentsMargins(11, 11, 11, 11);
        layoutTimescale->setObjectName(QString::fromUtf8("layoutTimescale"));
        layoutTimescale->setContentsMargins(0, 0, 0, 0);
        displayTime = new QLineEdit(widgetTimescale);
        displayTime->setObjectName(QString::fromUtf8("displayTime"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(displayTime->sizePolicy().hasHeightForWidth());
        displayTime->setSizePolicy(sizePolicy4);
        displayTime->setMinimumSize(QSize(80, 30));
        displayTime->setMaximumSize(QSize(200, 30));
        QFont font5;
        font5.setPointSize(11);
        displayTime->setFont(font5);
        displayTime->setAlignment(Qt::AlignCenter);
        displayTime->setReadOnly(true);

        layoutTimescale->addWidget(displayTime);

        widgetPlay = new QWidget(widgetTimescale);
        widgetPlay->setObjectName(QString::fromUtf8("widgetPlay"));
        horizontalLayout_6 = new QHBoxLayout(widgetPlay);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        playbackLoop = new QPushButton(widgetPlay);
        playbackLoop->setObjectName(QString::fromUtf8("playbackLoop"));
        playbackLoop->setMinimumSize(QSize(28, 28));
        playbackLoop->setMaximumSize(QSize(28, 28));
        playbackLoop->setFocusPolicy(Qt::NoFocus);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/style_light/loop.png"), QSize(), QIcon::Normal, QIcon::Off);
        playbackLoop->setIcon(icon10);
        playbackLoop->setIconSize(QSize(22, 22));
        playbackLoop->setCheckable(true);
        playbackLoop->setFlat(true);

        horizontalLayout_6->addWidget(playbackLoop);

        buttonPlay = new QPushButton(widgetPlay);
        buttonPlay->setObjectName(QString::fromUtf8("buttonPlay"));
        buttonPlay->setMinimumSize(QSize(28, 28));
        buttonPlay->setMaximumSize(QSize(28, 28));
        buttonPlay->setFocusPolicy(Qt::NoFocus);
        buttonPlay->setStyleSheet(QString::fromUtf8("QPushButton:checked {\n"
"    background-color: transparent;\n"
"    border:  0px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/style_light/play_arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon11.addFile(QString::fromUtf8(":/style_light/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        buttonPlay->setIcon(icon11);
        buttonPlay->setIconSize(QSize(26, 26));
        buttonPlay->setCheckable(true);
        buttonPlay->setChecked(false);
        buttonPlay->setFlat(true);

        horizontalLayout_6->addWidget(buttonPlay);

        timeSlider = new RealSlider(widgetPlay);
        timeSlider->setObjectName(QString::fromUtf8("timeSlider"));
        timeSlider->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(timeSlider->sizePolicy().hasHeightForWidth());
        timeSlider->setSizePolicy(sizePolicy5);
        timeSlider->setMinimumSize(QSize(0, 40));
        timeSlider->setMaximumSize(QSize(16777215, 40));
        timeSlider->setFocusPolicy(Qt::WheelFocus);
        timeSlider->setMaximum(0);
        timeSlider->setOrientation(Qt::Horizontal);
        timeSlider->setTickPosition(QSlider::NoTicks);
        timeSlider->setTickInterval(1);

        horizontalLayout_6->addWidget(timeSlider);


        layoutTimescale->addWidget(widgetPlay);

        frame = new QFrame(widgetTimescale);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(16777215, 40));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 2, 4, 2);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font6;
        font6.setBold(true);
        label->setFont(font6);

        horizontalLayout->addWidget(label);

        playbackRate = new QDoubleSpinBox(frame);
        playbackRate->setObjectName(QString::fromUtf8("playbackRate"));
        playbackRate->setMinimumSize(QSize(0, 30));
        playbackRate->setMaximumSize(QSize(16777215, 30));
        playbackRate->setFocusPolicy(Qt::WheelFocus);
        playbackRate->setDecimals(1);
        playbackRate->setMinimum(0.100000000000000);
        playbackRate->setMaximum(10.000000000000000);
        playbackRate->setSingleStep(0.100000000000000);
        playbackRate->setValue(1.000000000000000);

        horizontalLayout->addWidget(playbackRate);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font6);

        horizontalLayout->addWidget(label_2);

        playbackStep = new QDoubleSpinBox(frame);
        playbackStep->setObjectName(QString::fromUtf8("playbackStep"));
        playbackStep->setMinimumSize(QSize(0, 30));
        playbackStep->setFocusPolicy(Qt::WheelFocus);
        playbackStep->setDecimals(3);
        playbackStep->setMaximum(10.000000000000000);
        playbackStep->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(playbackStep);


        layoutTimescale->addWidget(frame);


        plottingLayout->addWidget(widgetTimescale);

        widgetStack->addWidget(plotPage);
        formulaPage = new QWidget();
        formulaPage->setObjectName(QString::fromUtf8("formulaPage"));
        widgetStack->addWidget(formulaPage);

        verticalLayout_2->addWidget(widgetStack);

        mainSplitter->addWidget(plottingArea);

        verticalLayout->addWidget(mainSplitter);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line_2);

        widgetStatusBar = new QWidget(centralWidget);
        widgetStatusBar->setObjectName(QString::fromUtf8("widgetStatusBar"));
        widgetStatusBar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 252, 152);"));
        horizontalLayout_12 = new QHBoxLayout(widgetStatusBar);
        horizontalLayout_12->setSpacing(12);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 2, 2, 2);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        statusLabel = new QLabel(widgetStatusBar);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        statusLabel->setMinimumSize(QSize(100, 0));
        statusLabel->setTextFormat(Qt::RichText);
        statusLabel->setOpenExternalLinks(true);
        statusLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);

        horizontalLayout_12->addWidget(statusLabel);

        buttonCloseStatus = new QPushButton(widgetStatusBar);
        buttonCloseStatus->setObjectName(QString::fromUtf8("buttonCloseStatus"));
        buttonCloseStatus->setMaximumSize(QSize(22, 22));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/svg/close-button.svg"), QSize(), QIcon::Normal, QIcon::Off);
        buttonCloseStatus->setIcon(icon12);
        buttonCloseStatus->setFlat(true);

        horizontalLayout_12->addWidget(buttonCloseStatus);


        verticalLayout->addWidget(widgetStatusBar);

        verticalLayout->setStretch(0, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new MenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1058, 26));
        menuBar->setMinimumSize(QSize(0, 25));
        menuBar->setFont(font5);
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(false);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionClearBuffer);
        menuFile->addAction(actionDeleteAllData);
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionCheatsheet);
        menuHelp->addAction(actionSupportPlotJuggler);
        menuHelp->addAction(actionShare_the_love);
        menuHelp->addAction(actionReportBug);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuTools->addSeparator();
        menuTools->addAction(actionLoadStyleSheet);
        menuTools->addAction(actionColorMap_Editor);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PlotJuggler", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShowPoints->setText(QCoreApplication::translate("MainWindow", "Show Points", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionReportBug->setText(QCoreApplication::translate("MainWindow", "Report a problem", nullptr));
#if QT_CONFIG(tooltip)
        actionReportBug->setToolTip(QCoreApplication::translate("MainWindow", "Report issue on GitHub", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClearBuffer->setText(QCoreApplication::translate("MainWindow", "Clear data points", nullptr));
#if QT_CONFIG(shortcut)
        actionClearBuffer->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCheatsheet->setText(QCoreApplication::translate("MainWindow", "Cheatsheet", nullptr));
        actionSupportPlotJuggler->setText(QCoreApplication::translate("MainWindow", "Support PlotJuggler", nullptr));
        actionClearRecentData->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        actionClearRecentLayout->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        actionDeleteAllData->setText(QCoreApplication::translate("MainWindow", "Delete everything", nullptr));
#if QT_CONFIG(shortcut)
        actionDeleteAllData->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreferences->setText(QCoreApplication::translate("MainWindow", "Preferences...", nullptr));
        actionShare_the_love->setText(QCoreApplication::translate("MainWindow", "Share the love", nullptr));
        actionLoadStyleSheet->setText(QCoreApplication::translate("MainWindow", "Load StyleSheet", nullptr));
        actionColorMap_Editor->setText(QCoreApplication::translate("MainWindow", "ColorMap Editor", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
#if QT_CONFIG(tooltip)
        buttonHideFileFrame->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Hide/Show</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonHideFileFrame->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Data:", nullptr));
#if QT_CONFIG(tooltip)
        buttonLoadDatafile->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Load data from file</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonLoadDatafile->setText(QString());
#if QT_CONFIG(tooltip)
        buttonReloadData->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">Quick Reload</span></p><p>Reload the last file, keeping exactly the same configuration.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonReloadData->setText(QString());
#if QT_CONFIG(tooltip)
        buttonRecentData->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Recent data files</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonRecentData->setText(QString());
#if QT_CONFIG(tooltip)
        checkBoxAddPrefixAndMerge->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Useful when comparing 2 or more files containing the same timeseries.<br/><br/>You will be asked to add a prefix to the name of the timeseries, and you will <span style=\" font-weight:700;\">not</span> remove previously loaded data.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBoxAddPrefixAndMerge->setText(QCoreApplication::translate("MainWindow", "Add prefix and merge", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Layout:", nullptr));
#if QT_CONFIG(tooltip)
        buttonLoadLayout->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Load data and window/plots layout</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonLoadLayout->setText(QString());
#if QT_CONFIG(tooltip)
        buttonSaveLayout->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Save window/plots layout</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonSaveLayout->setText(QString());
#if QT_CONFIG(tooltip)
        buttonRecentLayout->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Recent layout files</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonRecentLayout->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Streaming", nullptr));
#if QT_CONFIG(tooltip)
        buttonHideStreamingFrame->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Hide/Show</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonHideStreamingFrame->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(tooltip)
        comboStreaming->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Select the streaming plugin.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonStreamingOptions->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Plugin specific options...</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonStreamingOptions->setText(QString());
#if QT_CONFIG(tooltip)
        buttonStreamingStart->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Start/Stop the streaming plugin.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonStreamingStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
#if QT_CONFIG(tooltip)
        buttonStreamingPause->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Start/Stop streaming</p><p>( <span style=\" font-weight:600;\">CTRL+Space </span>)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonStreamingPause->setText(QString());
#if QT_CONFIG(tooltip)
        labelStreamingAnimation->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Blinks when new messages are being received</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelStreamingAnimation->setText(QString());
#if QT_CONFIG(tooltip)
        buttonStreamingNotifications->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>View streaming alerts</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonStreamingNotifications->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Buffer:", nullptr));
#if QT_CONFIG(tooltip)
        streamingSpinBox->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Size of the  Buffer (seconds) during streaming.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        streamingSpinBox->setSuffix(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Publishers", nullptr));
#if QT_CONFIG(tooltip)
        buttonHidePublishersFrame->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Hide/Show</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonHidePublishersFrame->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Timeseries List", nullptr));
#if QT_CONFIG(tooltip)
        buttonZoomOut->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Zoom Out All</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonZoomOut->setText(QCoreApplication::translate("MainWindow", "zo", nullptr));
#if QT_CONFIG(tooltip)
        buttonTimeTracker->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Change the amount of information displayed with the vertical TimeTracker</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonTimeTracker->setText(QCoreApplication::translate("MainWindow", "tt", nullptr));
#if QT_CONFIG(tooltip)
        buttonLegend->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Hide/Mode/show the Legend</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonLegend->setText(QCoreApplication::translate("MainWindow", "lg", nullptr));
#if QT_CONFIG(tooltip)
        buttonUseDateTime->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>If active, visualize the current time as DateTime ( YYYY/MM/DD:m::s::ms)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonUseDateTime->setText(QCoreApplication::translate("MainWindow", "dt", nullptr));
#if QT_CONFIG(tooltip)
        buttonActivateGrid->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Show/Hide the grid</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonActivateGrid->setText(QCoreApplication::translate("MainWindow", "gr", nullptr));
#if QT_CONFIG(tooltip)
        buttonLink->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>When active, the zoom of all the plots is synchronized.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonLink->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
#if QT_CONFIG(tooltip)
        buttonRemoveTimeOffset->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>If checked, an offset will be applied to each timeseries to ensure that the first time instant is equal to zero.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonRemoveTimeOffset->setText(QString());
#if QT_CONFIG(tooltip)
        buttonRatio->setToolTip(QCoreApplication::translate("MainWindow", "Keep the aspect ratio of XY plots", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonRatio->setText(QString());
#if QT_CONFIG(tooltip)
        playbackLoop->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Loop</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        playbackLoop->setText(QCoreApplication::translate("MainWindow", "lo", nullptr));
#if QT_CONFIG(tooltip)
        buttonPlay->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Start/Stop player</p><p>( <span style=\" font-weight:600;\">Space </span>)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonPlay->setText(QCoreApplication::translate("MainWindow", "pl", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Speed:", nullptr));
#if QT_CONFIG(tooltip)
        playbackRate->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Rate (speed multiplier)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("MainWindow", "Step size:", nullptr));
#if QT_CONFIG(tooltip)
        playbackStep->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Step size to move the time tracker (use the LEFT/RIGHT arrows)</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        statusLabel->setText(QString());
        buttonCloseStatus->setText(QString());
#if QT_CONFIG(tooltip)
        menuFile->setToolTip(QCoreApplication::translate("MainWindow", "File Menu (ALT+F)", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "App", nullptr));
#if QT_CONFIG(tooltip)
        menuHelp->setToolTip(QCoreApplication::translate("MainWindow", "Help (ALT+H)", nullptr));
#endif // QT_CONFIG(tooltip)
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
