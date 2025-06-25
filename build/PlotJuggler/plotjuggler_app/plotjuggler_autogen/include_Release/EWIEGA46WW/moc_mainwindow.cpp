/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../plotjuggler_app/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[99];
    char stringdata0[2119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "dataSourceRemoved"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "std::string"
QT_MOC_LITERAL(4, 42, 4), // "name"
QT_MOC_LITERAL(5, 47, 17), // "dataSourceUpdated"
QT_MOC_LITERAL(6, 65, 15), // "activateTracker"
QT_MOC_LITERAL(7, 81, 6), // "active"
QT_MOC_LITERAL(8, 88, 17), // "stylesheetChanged"
QT_MOC_LITERAL(9, 106, 10), // "style_name"
QT_MOC_LITERAL(10, 117, 11), // "resizeEvent"
QT_MOC_LITERAL(11, 129, 13), // "QResizeEvent*"
QT_MOC_LITERAL(12, 143, 16), // "onUndoableChange"
QT_MOC_LITERAL(13, 160, 13), // "onUndoInvoked"
QT_MOC_LITERAL(14, 174, 13), // "onRedoInvoked"
QT_MOC_LITERAL(15, 188, 19), // "on_streamingToggled"
QT_MOC_LITERAL(16, 208, 31), // "on_buttonStreamingPause_toggled"
QT_MOC_LITERAL(17, 240, 6), // "paused"
QT_MOC_LITERAL(18, 247, 39), // "on_buttonStreamingNotificatio..."
QT_MOC_LITERAL(19, 287, 32), // "on_streamingSpinBox_valueChanged"
QT_MOC_LITERAL(20, 320, 5), // "value"
QT_MOC_LITERAL(21, 326, 37), // "on_comboStreaming_currentInde..."
QT_MOC_LITERAL(22, 364, 12), // "current_text"
QT_MOC_LITERAL(23, 377, 16), // "on_splitterMoved"
QT_MOC_LITERAL(24, 394, 20), // "onTrackerTimeUpdated"
QT_MOC_LITERAL(25, 415, 13), // "absolute_time"
QT_MOC_LITERAL(26, 429, 9), // "do_replot"
QT_MOC_LITERAL(27, 439, 24), // "onTrackerMovedFromWidget"
QT_MOC_LITERAL(28, 464, 3), // "pos"
QT_MOC_LITERAL(29, 468, 25), // "onTimeSlider_valueChanged"
QT_MOC_LITERAL(30, 494, 8), // "abs_time"
QT_MOC_LITERAL(31, 503, 11), // "onPlotAdded"
QT_MOC_LITERAL(32, 515, 11), // "PlotWidget*"
QT_MOC_LITERAL(33, 527, 4), // "plot"
QT_MOC_LITERAL(34, 532, 14), // "onPlotTabAdded"
QT_MOC_LITERAL(35, 547, 11), // "PlotDocker*"
QT_MOC_LITERAL(36, 559, 6), // "docker"
QT_MOC_LITERAL(37, 566, 17), // "onPlotZoomChanged"
QT_MOC_LITERAL(38, 584, 13), // "modified_plot"
QT_MOC_LITERAL(39, 598, 9), // "new_range"
QT_MOC_LITERAL(40, 608, 22), // "on_tabbedAreaDestroyed"
QT_MOC_LITERAL(41, 631, 6), // "object"
QT_MOC_LITERAL(42, 638, 19), // "updateDataAndReplot"
QT_MOC_LITERAL(43, 658, 18), // "replot_hidden_tabs"
QT_MOC_LITERAL(44, 677, 23), // "onUpdateLeftTableValues"
QT_MOC_LITERAL(45, 701, 22), // "onDeleteMultipleCurves"
QT_MOC_LITERAL(46, 724, 24), // "std::vector<std::string>"
QT_MOC_LITERAL(47, 749, 11), // "curve_names"
QT_MOC_LITERAL(48, 761, 15), // "onAddCustomPlot"
QT_MOC_LITERAL(49, 777, 9), // "plot_name"
QT_MOC_LITERAL(50, 787, 16), // "onEditCustomPlot"
QT_MOC_LITERAL(51, 804, 19), // "onRefreshCustomPlot"
QT_MOC_LITERAL(52, 824, 19), // "onCustomPlotCreated"
QT_MOC_LITERAL(53, 844, 26), // "std::vector<CustomPlotPtr>"
QT_MOC_LITERAL(54, 871, 14), // "onPlaybackLoop"
QT_MOC_LITERAL(55, 886, 13), // "linkedZoomOut"
QT_MOC_LITERAL(56, 900, 34), // "on_actionClearRecentData_trig..."
QT_MOC_LITERAL(57, 935, 36), // "on_actionClearRecentLayout_tr..."
QT_MOC_LITERAL(58, 972, 32), // "on_actionDeleteAllData_triggered"
QT_MOC_LITERAL(59, 1005, 30), // "on_actionClearBuffer_triggered"
QT_MOC_LITERAL(60, 1036, 23), // "on_deleteSerieFromGroup"
QT_MOC_LITERAL(61, 1060, 10), // "group_name"
QT_MOC_LITERAL(62, 1071, 32), // "on_streamingNotificationsChanged"
QT_MOC_LITERAL(63, 1104, 26), // "active_notifications_count"
QT_MOC_LITERAL(64, 1131, 27), // "onActionFullscreenTriggered"
QT_MOC_LITERAL(65, 1159, 28), // "on_actionReportBug_triggered"
QT_MOC_LITERAL(66, 1188, 29), // "on_actionCheatsheet_triggered"
QT_MOC_LITERAL(67, 1218, 37), // "on_actionSupportPlotJuggler_t..."
QT_MOC_LITERAL(68, 1256, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(69, 1281, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(70, 1305, 29), // "on_buttonActivateGrid_toggled"
QT_MOC_LITERAL(71, 1335, 7), // "checked"
QT_MOC_LITERAL(72, 1343, 22), // "on_buttonRatio_toggled"
QT_MOC_LITERAL(73, 1366, 21), // "on_buttonPlay_toggled"
QT_MOC_LITERAL(74, 1388, 28), // "on_buttonUseDateTime_toggled"
QT_MOC_LITERAL(75, 1417, 28), // "on_buttonTimeTracker_pressed"
QT_MOC_LITERAL(76, 1446, 33), // "on_buttonRemoveTimeOffset_tog..."
QT_MOC_LITERAL(77, 1480, 31), // "on_buttonStreamingStart_clicked"
QT_MOC_LITERAL(78, 1512, 20), // "on_stylesheetChanged"
QT_MOC_LITERAL(79, 1533, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(80, 1564, 33), // "on_actionShare_the_love_trigg..."
QT_MOC_LITERAL(81, 1598, 28), // "on_playbackStep_valueChanged"
QT_MOC_LITERAL(82, 1627, 4), // "arg1"
QT_MOC_LITERAL(83, 1632, 33), // "on_actionLoadStyleSheet_trigg..."
QT_MOC_LITERAL(84, 1666, 23), // "on_buttonLegend_clicked"
QT_MOC_LITERAL(85, 1690, 24), // "on_buttonZoomOut_clicked"
QT_MOC_LITERAL(86, 1715, 29), // "on_actionShowPoints_triggered"
QT_MOC_LITERAL(87, 1745, 33), // "on_buttonStreamingOptions_cli..."
QT_MOC_LITERAL(88, 1779, 30), // "on_buttonHideFileFrame_clicked"
QT_MOC_LITERAL(89, 1810, 35), // "on_buttonHideStreamingFrame_c..."
QT_MOC_LITERAL(90, 1846, 36), // "on_buttonHidePublishersFrame_..."
QT_MOC_LITERAL(91, 1883, 27), // "on_buttonRecentData_clicked"
QT_MOC_LITERAL(92, 1911, 29), // "on_buttonRecentLayout_clicked"
QT_MOC_LITERAL(93, 1941, 27), // "on_buttonLoadLayout_clicked"
QT_MOC_LITERAL(94, 1969, 27), // "on_buttonSaveLayout_clicked"
QT_MOC_LITERAL(95, 1997, 29), // "on_buttonLoadDatafile_clicked"
QT_MOC_LITERAL(96, 2027, 34), // "on_actionColorMap_Editor_trig..."
QT_MOC_LITERAL(97, 2062, 27), // "on_buttonReloadData_clicked"
QT_MOC_LITERAL(98, 2090, 28) // "on_buttonCloseStatus_clicked"

    },
    "MainWindow\0dataSourceRemoved\0\0std::string\0"
    "name\0dataSourceUpdated\0activateTracker\0"
    "active\0stylesheetChanged\0style_name\0"
    "resizeEvent\0QResizeEvent*\0onUndoableChange\0"
    "onUndoInvoked\0onRedoInvoked\0"
    "on_streamingToggled\0on_buttonStreamingPause_toggled\0"
    "paused\0on_buttonStreamingNotifications_clicked\0"
    "on_streamingSpinBox_valueChanged\0value\0"
    "on_comboStreaming_currentIndexChanged\0"
    "current_text\0on_splitterMoved\0"
    "onTrackerTimeUpdated\0absolute_time\0"
    "do_replot\0onTrackerMovedFromWidget\0"
    "pos\0onTimeSlider_valueChanged\0abs_time\0"
    "onPlotAdded\0PlotWidget*\0plot\0"
    "onPlotTabAdded\0PlotDocker*\0docker\0"
    "onPlotZoomChanged\0modified_plot\0"
    "new_range\0on_tabbedAreaDestroyed\0"
    "object\0updateDataAndReplot\0"
    "replot_hidden_tabs\0onUpdateLeftTableValues\0"
    "onDeleteMultipleCurves\0std::vector<std::string>\0"
    "curve_names\0onAddCustomPlot\0plot_name\0"
    "onEditCustomPlot\0onRefreshCustomPlot\0"
    "onCustomPlotCreated\0std::vector<CustomPlotPtr>\0"
    "onPlaybackLoop\0linkedZoomOut\0"
    "on_actionClearRecentData_triggered\0"
    "on_actionClearRecentLayout_triggered\0"
    "on_actionDeleteAllData_triggered\0"
    "on_actionClearBuffer_triggered\0"
    "on_deleteSerieFromGroup\0group_name\0"
    "on_streamingNotificationsChanged\0"
    "active_notifications_count\0"
    "onActionFullscreenTriggered\0"
    "on_actionReportBug_triggered\0"
    "on_actionCheatsheet_triggered\0"
    "on_actionSupportPlotJuggler_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionExit_triggered\0"
    "on_buttonActivateGrid_toggled\0checked\0"
    "on_buttonRatio_toggled\0on_buttonPlay_toggled\0"
    "on_buttonUseDateTime_toggled\0"
    "on_buttonTimeTracker_pressed\0"
    "on_buttonRemoveTimeOffset_toggled\0"
    "on_buttonStreamingStart_clicked\0"
    "on_stylesheetChanged\0"
    "on_actionPreferences_triggered\0"
    "on_actionShare_the_love_triggered\0"
    "on_playbackStep_valueChanged\0arg1\0"
    "on_actionLoadStyleSheet_triggered\0"
    "on_buttonLegend_clicked\0"
    "on_buttonZoomOut_clicked\0"
    "on_actionShowPoints_triggered\0"
    "on_buttonStreamingOptions_clicked\0"
    "on_buttonHideFileFrame_clicked\0"
    "on_buttonHideStreamingFrame_clicked\0"
    "on_buttonHidePublishersFrame_clicked\0"
    "on_buttonRecentData_clicked\0"
    "on_buttonRecentLayout_clicked\0"
    "on_buttonLoadLayout_clicked\0"
    "on_buttonSaveLayout_clicked\0"
    "on_buttonLoadDatafile_clicked\0"
    "on_actionColorMap_Editor_triggered\0"
    "on_buttonReloadData_clicked\0"
    "on_buttonCloseStatus_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  359,    2, 0x06 /* Public */,
       5,    1,  362,    2, 0x06 /* Public */,
       6,    1,  365,    2, 0x06 /* Public */,
       8,    1,  368,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  371,    2, 0x0a /* Public */,
      12,    0,  374,    2, 0x0a /* Public */,
      13,    0,  375,    2, 0x0a /* Public */,
      14,    0,  376,    2, 0x0a /* Public */,
      15,    0,  377,    2, 0x0a /* Public */,
      16,    1,  378,    2, 0x0a /* Public */,
      18,    0,  381,    2, 0x0a /* Public */,
      19,    1,  382,    2, 0x0a /* Public */,
      21,    1,  385,    2, 0x0a /* Public */,
      23,    2,  388,    2, 0x0a /* Public */,
      24,    2,  393,    2, 0x0a /* Public */,
      27,    1,  398,    2, 0x0a /* Public */,
      29,    1,  401,    2, 0x0a /* Public */,
      31,    1,  404,    2, 0x0a /* Public */,
      34,    1,  407,    2, 0x0a /* Public */,
      37,    2,  410,    2, 0x0a /* Public */,
      40,    1,  415,    2, 0x0a /* Public */,
      42,    1,  418,    2, 0x0a /* Public */,
      44,    0,  421,    2, 0x0a /* Public */,
      45,    1,  422,    2, 0x0a /* Public */,
      48,    1,  425,    2, 0x0a /* Public */,
      50,    1,  428,    2, 0x0a /* Public */,
      51,    1,  431,    2, 0x0a /* Public */,
      52,    1,  434,    2, 0x0a /* Public */,
      54,    0,  437,    2, 0x0a /* Public */,
      55,    0,  438,    2, 0x0a /* Public */,
      56,    0,  439,    2, 0x0a /* Public */,
      57,    0,  440,    2, 0x0a /* Public */,
      58,    0,  441,    2, 0x0a /* Public */,
      59,    0,  442,    2, 0x0a /* Public */,
      60,    1,  443,    2, 0x0a /* Public */,
      62,    1,  446,    2, 0x0a /* Public */,
      64,    0,  449,    2, 0x0a /* Public */,
      65,    0,  450,    2, 0x0a /* Public */,
      66,    0,  451,    2, 0x0a /* Public */,
      67,    0,  452,    2, 0x0a /* Public */,
      68,    0,  453,    2, 0x0a /* Public */,
      69,    0,  454,    2, 0x0a /* Public */,
      70,    1,  455,    2, 0x0a /* Public */,
      72,    1,  458,    2, 0x0a /* Public */,
      73,    1,  461,    2, 0x0a /* Public */,
      74,    1,  464,    2, 0x0a /* Public */,
      75,    0,  467,    2, 0x0a /* Public */,
      76,    1,  468,    2, 0x0a /* Public */,
      77,    0,  471,    2, 0x0a /* Public */,
      78,    1,  472,    2, 0x08 /* Private */,
      79,    0,  475,    2, 0x08 /* Private */,
      80,    0,  476,    2, 0x08 /* Private */,
      81,    1,  477,    2, 0x08 /* Private */,
      83,    0,  480,    2, 0x08 /* Private */,
      84,    0,  481,    2, 0x08 /* Private */,
      85,    0,  482,    2, 0x08 /* Private */,
      86,    1,  483,    2, 0x08 /* Private */,
      87,    0,  486,    2, 0x08 /* Private */,
      88,    0,  487,    2, 0x08 /* Private */,
      89,    0,  488,    2, 0x08 /* Private */,
      90,    0,  489,    2, 0x08 /* Private */,
      91,    0,  490,    2, 0x08 /* Private */,
      92,    0,  491,    2, 0x08 /* Private */,
      93,    0,  492,    2, 0x08 /* Private */,
      94,    0,  493,    2, 0x08 /* Private */,
      95,    0,  494,    2, 0x08 /* Private */,
      96,    0,  495,    2, 0x08 /* Private */,
      97,    0,  496,    2, 0x08 /* Private */,
      98,    0,  497,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   25,   26,
    QMetaType::Void, QMetaType::QPointF,   28,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 32, QMetaType::QRectF,   38,   39,
    QMetaType::Void, QMetaType::QObjectStar,   41,
    QMetaType::Void, QMetaType::Bool,   43,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 3,   49,
    QMetaType::Void, 0x80000000 | 3,   49,
    QMetaType::Void, 0x80000000 | 3,   49,
    QMetaType::Void, 0x80000000 | 53,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   61,
    QMetaType::Void, QMetaType::Int,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   82,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataSourceRemoved((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->dataSourceUpdated((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->activateTracker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 5: _t->onUndoableChange(); break;
        case 6: _t->onUndoInvoked(); break;
        case 7: _t->onRedoInvoked(); break;
        case 8: _t->on_streamingToggled(); break;
        case 9: _t->on_buttonStreamingPause_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_buttonStreamingNotifications_clicked(); break;
        case 11: _t->on_streamingSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_comboStreaming_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_splitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->onTrackerTimeUpdated((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->onTrackerMovedFromWidget((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 16: _t->onTimeSlider_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->onPlotAdded((*reinterpret_cast< PlotWidget*(*)>(_a[1]))); break;
        case 18: _t->onPlotTabAdded((*reinterpret_cast< PlotDocker*(*)>(_a[1]))); break;
        case 19: _t->onPlotZoomChanged((*reinterpret_cast< PlotWidget*(*)>(_a[1])),(*reinterpret_cast< QRectF(*)>(_a[2]))); break;
        case 20: _t->on_tabbedAreaDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 21: _t->updateDataAndReplot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->onUpdateLeftTableValues(); break;
        case 23: _t->onDeleteMultipleCurves((*reinterpret_cast< const std::vector<std::string>(*)>(_a[1]))); break;
        case 24: _t->onAddCustomPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 25: _t->onEditCustomPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 26: _t->onRefreshCustomPlot((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 27: _t->onCustomPlotCreated((*reinterpret_cast< std::vector<CustomPlotPtr>(*)>(_a[1]))); break;
        case 28: _t->onPlaybackLoop(); break;
        case 29: _t->linkedZoomOut(); break;
        case 30: _t->on_actionClearRecentData_triggered(); break;
        case 31: _t->on_actionClearRecentLayout_triggered(); break;
        case 32: _t->on_actionDeleteAllData_triggered(); break;
        case 33: _t->on_actionClearBuffer_triggered(); break;
        case 34: _t->on_deleteSerieFromGroup((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 35: _t->on_streamingNotificationsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->onActionFullscreenTriggered(); break;
        case 37: _t->on_actionReportBug_triggered(); break;
        case 38: _t->on_actionCheatsheet_triggered(); break;
        case 39: _t->on_actionSupportPlotJuggler_triggered(); break;
        case 40: _t->on_actionAbout_triggered(); break;
        case 41: _t->on_actionExit_triggered(); break;
        case 42: _t->on_buttonActivateGrid_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_buttonRatio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_buttonPlay_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->on_buttonUseDateTime_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_buttonTimeTracker_pressed(); break;
        case 47: _t->on_buttonRemoveTimeOffset_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->on_buttonStreamingStart_clicked(); break;
        case 49: _t->on_stylesheetChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->on_actionPreferences_triggered(); break;
        case 51: _t->on_actionShare_the_love_triggered(); break;
        case 52: _t->on_playbackStep_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 53: _t->on_actionLoadStyleSheet_triggered(); break;
        case 54: _t->on_buttonLegend_clicked(); break;
        case 55: _t->on_buttonZoomOut_clicked(); break;
        case 56: _t->on_actionShowPoints_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->on_buttonStreamingOptions_clicked(); break;
        case 58: _t->on_buttonHideFileFrame_clicked(); break;
        case 59: _t->on_buttonHideStreamingFrame_clicked(); break;
        case 60: _t->on_buttonHidePublishersFrame_clicked(); break;
        case 61: _t->on_buttonRecentData_clicked(); break;
        case 62: _t->on_buttonRecentLayout_clicked(); break;
        case 63: _t->on_buttonLoadLayout_clicked(); break;
        case 64: _t->on_buttonSaveLayout_clicked(); break;
        case 65: _t->on_buttonLoadDatafile_clicked(); break;
        case 66: _t->on_actionColorMap_Editor_triggered(); break;
        case 67: _t->on_buttonReloadData_clicked(); break;
        case 68: _t->on_buttonCloseStatus_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWidget* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotDocker* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::dataSourceRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::dataSourceUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::activateTracker)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stylesheetChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::dataSourceRemoved(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::dataSourceUpdated(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::activateTracker(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::stylesheetChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_PopupMenu_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PopupMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PopupMenu_t qt_meta_stringdata_PopupMenu = {
    {
QT_MOC_LITERAL(0, 0, 9) // "PopupMenu"

    },
    "PopupMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PopupMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PopupMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PopupMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_PopupMenu.data,
    qt_meta_data_PopupMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PopupMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PopupMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PopupMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int PopupMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
