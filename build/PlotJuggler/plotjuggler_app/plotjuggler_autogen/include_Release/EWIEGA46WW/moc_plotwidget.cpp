/****************************************************************************
** Meta object code from reading C++ file 'plotwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../plotjuggler_app/plotwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotWidget_t {
    QByteArrayData data[68];
    char stringdata0[939];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotWidget_t qt_meta_stringdata_PlotWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlotWidget"
QT_MOC_LITERAL(1, 11, 20), // "swapWidgetsRequested"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "PlotWidget*"
QT_MOC_LITERAL(4, 45, 6), // "source"
QT_MOC_LITERAL(5, 52, 11), // "destination"
QT_MOC_LITERAL(6, 64, 11), // "rectChanged"
QT_MOC_LITERAL(7, 76, 4), // "self"
QT_MOC_LITERAL(8, 81, 4), // "rect"
QT_MOC_LITERAL(9, 86, 14), // "undoableChange"
QT_MOC_LITERAL(10, 101, 12), // "trackerMoved"
QT_MOC_LITERAL(11, 114, 3), // "pos"
QT_MOC_LITERAL(12, 118, 16), // "curveListChanged"
QT_MOC_LITERAL(13, 135, 13), // "curvesDropped"
QT_MOC_LITERAL(14, 149, 15), // "splitHorizontal"
QT_MOC_LITERAL(15, 165, 13), // "splitVertical"
QT_MOC_LITERAL(16, 179, 12), // "updateCurves"
QT_MOC_LITERAL(17, 192, 16), // "reset_older_data"
QT_MOC_LITERAL(18, 209, 19), // "onDataSourceRemoved"
QT_MOC_LITERAL(19, 229, 11), // "std::string"
QT_MOC_LITERAL(20, 241, 8), // "src_name"
QT_MOC_LITERAL(21, 250, 15), // "removeAllCurves"
QT_MOC_LITERAL(22, 266, 21), // "onShowPointsTriggered"
QT_MOC_LITERAL(23, 288, 4), // "show"
QT_MOC_LITERAL(24, 293, 9), // "on_panned"
QT_MOC_LITERAL(25, 303, 2), // "dx"
QT_MOC_LITERAL(26, 306, 2), // "dy"
QT_MOC_LITERAL(27, 309, 7), // "zoomOut"
QT_MOC_LITERAL(28, 317, 11), // "emit_signal"
QT_MOC_LITERAL(29, 329, 30), // "on_zoomOutHorizontal_triggered"
QT_MOC_LITERAL(30, 360, 28), // "on_zoomOutVertical_triggered"
QT_MOC_LITERAL(31, 389, 14), // "activateLegend"
QT_MOC_LITERAL(32, 404, 8), // "activate"
QT_MOC_LITERAL(33, 413, 12), // "activateGrid"
QT_MOC_LITERAL(34, 426, 16), // "configureTracker"
QT_MOC_LITERAL(35, 443, 23), // "CurveTracker::Parameter"
QT_MOC_LITERAL(36, 467, 3), // "val"
QT_MOC_LITERAL(37, 471, 13), // "enableTracker"
QT_MOC_LITERAL(38, 485, 6), // "enable"
QT_MOC_LITERAL(39, 492, 16), // "isTrackerEnabled"
QT_MOC_LITERAL(40, 509, 18), // "setTrackerPosition"
QT_MOC_LITERAL(41, 528, 8), // "abs_time"
QT_MOC_LITERAL(42, 537, 19), // "on_changeTimeOffset"
QT_MOC_LITERAL(43, 557, 6), // "offset"
QT_MOC_LITERAL(44, 564, 22), // "on_changeDateTimeScale"
QT_MOC_LITERAL(45, 587, 19), // "on_changeCurveColor"
QT_MOC_LITERAL(46, 607, 10), // "curve_name"
QT_MOC_LITERAL(47, 618, 9), // "new_color"
QT_MOC_LITERAL(48, 628, 10), // "onFlipAxis"
QT_MOC_LITERAL(49, 639, 24), // "onBackgroundColorRequest"
QT_MOC_LITERAL(50, 664, 4), // "name"
QT_MOC_LITERAL(51, 669, 20), // "onShowDataStatistics"
QT_MOC_LITERAL(52, 690, 24), // "onSetXAxisRangeTriggered"
QT_MOC_LITERAL(53, 715, 9), // "setModeXY"
QT_MOC_LITERAL(54, 725, 17), // "on_savePlotToFile"
QT_MOC_LITERAL(55, 743, 18), // "on_copyToClipboard"
QT_MOC_LITERAL(56, 762, 23), // "on_copyAction_triggered"
QT_MOC_LITERAL(57, 786, 24), // "on_pasteAction_triggered"
QT_MOC_LITERAL(58, 811, 26), // "canvasContextMenuTriggered"
QT_MOC_LITERAL(59, 838, 20), // "on_externallyResized"
QT_MOC_LITERAL(60, 859, 8), // "new_rect"
QT_MOC_LITERAL(61, 868, 13), // "curveDistance"
QT_MOC_LITERAL(62, 882, 13), // "QwtPlotCurve*"
QT_MOC_LITERAL(63, 896, 5), // "curve"
QT_MOC_LITERAL(64, 902, 14), // "distanceToLine"
QT_MOC_LITERAL(65, 917, 5), // "point"
QT_MOC_LITERAL(66, 923, 7), // "line_p1"
QT_MOC_LITERAL(67, 931, 7) // "line_p2"

    },
    "PlotWidget\0swapWidgetsRequested\0\0"
    "PlotWidget*\0source\0destination\0"
    "rectChanged\0self\0rect\0undoableChange\0"
    "trackerMoved\0pos\0curveListChanged\0"
    "curvesDropped\0splitHorizontal\0"
    "splitVertical\0updateCurves\0reset_older_data\0"
    "onDataSourceRemoved\0std::string\0"
    "src_name\0removeAllCurves\0onShowPointsTriggered\0"
    "show\0on_panned\0dx\0dy\0zoomOut\0emit_signal\0"
    "on_zoomOutHorizontal_triggered\0"
    "on_zoomOutVertical_triggered\0"
    "activateLegend\0activate\0activateGrid\0"
    "configureTracker\0CurveTracker::Parameter\0"
    "val\0enableTracker\0enable\0isTrackerEnabled\0"
    "setTrackerPosition\0abs_time\0"
    "on_changeTimeOffset\0offset\0"
    "on_changeDateTimeScale\0on_changeCurveColor\0"
    "curve_name\0new_color\0onFlipAxis\0"
    "onBackgroundColorRequest\0name\0"
    "onShowDataStatistics\0onSetXAxisRangeTriggered\0"
    "setModeXY\0on_savePlotToFile\0"
    "on_copyToClipboard\0on_copyAction_triggered\0"
    "on_pasteAction_triggered\0"
    "canvasContextMenuTriggered\0"
    "on_externallyResized\0new_rect\0"
    "curveDistance\0QwtPlotCurve*\0curve\0"
    "distanceToLine\0point\0line_p1\0line_p2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  214,    2, 0x06 /* Public */,
       6,    2,  219,    2, 0x06 /* Public */,
       9,    0,  224,    2, 0x06 /* Public */,
      10,    1,  225,    2, 0x06 /* Public */,
      12,    0,  228,    2, 0x06 /* Public */,
      13,    0,  229,    2, 0x06 /* Public */,
      14,    0,  230,    2, 0x06 /* Public */,
      15,    0,  231,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  232,    2, 0x0a /* Public */,
      18,    1,  235,    2, 0x0a /* Public */,
      21,    0,  238,    2, 0x0a /* Public */,
      22,    1,  239,    2, 0x0a /* Public */,
      24,    2,  242,    2, 0x0a /* Public */,
      27,    1,  247,    2, 0x0a /* Public */,
      29,    1,  250,    2, 0x0a /* Public */,
      29,    0,  253,    2, 0x2a /* Public | MethodCloned */,
      30,    1,  254,    2, 0x0a /* Public */,
      30,    0,  257,    2, 0x2a /* Public | MethodCloned */,
      31,    1,  258,    2, 0x0a /* Public */,
      33,    1,  261,    2, 0x0a /* Public */,
      34,    1,  264,    2, 0x0a /* Public */,
      37,    1,  267,    2, 0x0a /* Public */,
      39,    0,  270,    2, 0x0a /* Public */,
      40,    1,  271,    2, 0x0a /* Public */,
      42,    1,  274,    2, 0x0a /* Public */,
      44,    1,  277,    2, 0x0a /* Public */,
      45,    2,  280,    2, 0x0a /* Public */,
      48,    0,  285,    2, 0x0a /* Public */,
      49,    1,  286,    2, 0x0a /* Public */,
      51,    0,  289,    2, 0x0a /* Public */,
      52,    0,  290,    2, 0x0a /* Public */,
      53,    1,  291,    2, 0x08 /* Private */,
      54,    0,  294,    2, 0x08 /* Private */,
      55,    0,  295,    2, 0x08 /* Private */,
      56,    0,  296,    2, 0x08 /* Private */,
      57,    0,  297,    2, 0x08 /* Private */,
      58,    1,  298,    2, 0x08 /* Private */,
      59,    1,  301,    2, 0x08 /* Private */,
      61,    2,  304,    2, 0x08 /* Private */,
      64,    3,  309,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QRectF,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Double,   41,
    QMetaType::Void, QMetaType::Double,   43,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QColor,   46,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::QRectF,   60,
    QMetaType::Double, 0x80000000 | 62, QMetaType::QPoint,   63,   11,
    QMetaType::Double, QMetaType::QPoint, QMetaType::QPoint, QMetaType::QPoint,   65,   66,   67,

       0        // eod
};

void PlotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlotWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->swapWidgetsRequested((*reinterpret_cast< PlotWidget*(*)>(_a[1])),(*reinterpret_cast< PlotWidget*(*)>(_a[2]))); break;
        case 1: _t->rectChanged((*reinterpret_cast< PlotWidget*(*)>(_a[1])),(*reinterpret_cast< QRectF(*)>(_a[2]))); break;
        case 2: _t->undoableChange(); break;
        case 3: _t->trackerMoved((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->curveListChanged(); break;
        case 5: _t->curvesDropped(); break;
        case 6: _t->splitHorizontal(); break;
        case 7: _t->splitVertical(); break;
        case 8: _t->updateCurves((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onDataSourceRemoved((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 10: _t->removeAllCurves(); break;
        case 11: _t->onShowPointsTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_panned((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->zoomOut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_zoomOutHorizontal_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_zoomOutHorizontal_triggered(); break;
        case 16: _t->on_zoomOutVertical_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->on_zoomOutVertical_triggered(); break;
        case 18: _t->activateLegend((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->activateGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->configureTracker((*reinterpret_cast< CurveTracker::Parameter(*)>(_a[1]))); break;
        case 21: _t->enableTracker((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: { bool _r = _t->isTrackerEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->setTrackerPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->on_changeTimeOffset((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->on_changeDateTimeScale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_changeCurveColor((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 27: _t->onFlipAxis(); break;
        case 28: _t->onBackgroundColorRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: _t->onShowDataStatistics(); break;
        case 30: _t->onSetXAxisRangeTriggered(); break;
        case 31: _t->setModeXY((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_savePlotToFile(); break;
        case 33: _t->on_copyToClipboard(); break;
        case 34: _t->on_copyAction_triggered(); break;
        case 35: _t->on_pasteAction_triggered(); break;
        case 36: _t->canvasContextMenuTriggered((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 37: _t->on_externallyResized((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 38: { double _r = _t->curveDistance((*reinterpret_cast< QwtPlotCurve*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 39: { double _r = _t->distanceToLine((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlotWidget* >(); break;
            }
            break;
        case 1:
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
            using _t = void (PlotWidget::*)(PlotWidget * , PlotWidget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::swapWidgetsRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)(PlotWidget * , QRectF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::rectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::undoableChange)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::trackerMoved)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::curveListChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::curvesDropped)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::splitHorizontal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlotWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlotWidget::splitVertical)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlotWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<PlotWidgetBase::staticMetaObject>(),
    qt_meta_stringdata_PlotWidget.data,
    qt_meta_data_PlotWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotWidget.stringdata0))
        return static_cast<void*>(this);
    return PlotWidgetBase::qt_metacast(_clname);
}

int PlotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlotWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void PlotWidget::swapWidgetsRequested(PlotWidget * _t1, PlotWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlotWidget::rectChanged(PlotWidget * _t1, QRectF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlotWidget::undoableChange()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlotWidget::trackerMoved(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlotWidget::curveListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlotWidget::curvesDropped()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PlotWidget::splitHorizontal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlotWidget::splitVertical()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
