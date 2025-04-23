/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#ifndef STATISTICS_DIALOG_H
#define STATISTICS_DIALOG_H

#include <QDialog>
#include <QCloseEvent>
#include <vector>
#include <algorithm>
#include "PlotJuggler/plotdata.h"
#include "plotwidget.h"

namespace Ui
{
    class statistics_dialog;
}

struct Statistics
{
    size_t count = 0;       // 数据点数量
    double min = 0;         // 最小值
    double max = 0;         // 最大值
    double mean = 0;        // 平均值
    double median = 0;      // 中位数（50%）
    double p68 = 0;         // 第68%个点
    double p95 = 0;         // 第95%个点
    std::vector<double> y_values; // 存储所有y值
};

class StatisticsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StatisticsDialog(PlotWidget* parent = nullptr);
    ~StatisticsDialog();

    void update(Range range);
    void closeEvent(QCloseEvent* event) override;
    void setTitle(QString title);
    bool calcVisibleRange();

private:
    Ui::statistics_dialog* ui;
    PlotWidget* _parent;
};

#endif // STATISTICS_DIALOG_H