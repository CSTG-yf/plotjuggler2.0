    #include "statistics_dialog.h"
#include "ui_statistics_dialog.h"
#include <QTableWidgetItem>
#include <numeric> // for std::accumulate
#include <qwt_text.h>  // 添加QwtText头文件
#include<cmath>
StatisticsDialog::StatisticsDialog(PlotWidget* parent)
    : QDialog(parent), ui(new Ui::statistics_dialog), _parent(parent)
{
    ui->setupUi(this);

    setWindowTitle(QString("Statistics | %1").arg(_parent->windowTitle()));
    setWindowFlag(Qt::Tool);

    // 设置表格列数和标题（9列）
    ui->tableWidget->setColumnCount(9);
    QStringList headers = { "Curve", "Count", "Min", "Max", "Mean", "Median","Std Dev", "68%", "95%"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);

    connect(ui->rangeComboBox, qOverload<int>(&QComboBox::currentIndexChanged), this,
        [this]() {
            auto rect = _parent->currentBoundingRect();
            update({ rect.left(), rect.right() });
        });
}

StatisticsDialog::~StatisticsDialog()
{
    delete ui;
}

bool StatisticsDialog::calcVisibleRange()
{
    return (ui->rangeComboBox->currentIndex() == 0);
}

void StatisticsDialog::update(Range range)
{
    std::map<QString, Statistics> statistics;

    for (const auto& info : _parent->curveList())
    {
        Statistics stat;
        const auto ts = info.curve->data();
        std::vector<double> abs_values; 

        for (size_t i = 0; i < ts->size(); i++)
        {
            const auto p = ts->sample(i);
            if (calcVisibleRange())
            {
                if (p.x() < range.min) continue;
                if (p.x() > range.max) break;
            }
            stat.count++;
            stat.y_values.push_back(p.y());
            abs_values.push_back(std::abs(p.y()));
        }

        if (stat.count > 0)
        {
            // 计算基本统计量
            auto [min_it, max_it] = std::minmax_element(stat.y_values.begin(), stat.y_values.end());
            stat.min = *min_it;
            stat.max = *max_it;
            stat.mean = std::accumulate(stat.y_values.begin(), stat.y_values.end(), 0.0) / stat.count;
            double sum_sq = 0.0;
            for (double y : stat.y_values) {
                sum_sq += (y - stat.mean) * (y - stat.mean);
            }
            stat.std_dev = std::sqrt(sum_sq / stat.count);
            // 排序以计算百分位数
            std::sort(abs_values.begin(), abs_values.end());
            stat.median = abs_values[abs_values.size() / 2];  // 50%中位数
            stat.p68 = abs_values[static_cast<int>(abs_values.size() * 0.68)];  // 68%点
            stat.p95 = abs_values[static_cast<int>(abs_values.size() * 0.95)];  // 95%点
        }

        statistics[info.curve->title().text()] = stat;
    }

    // 更新表格
    ui->tableWidget->setRowCount(statistics.size());
    int row = 0;
    for (const auto& [name, stat] : statistics)
    {
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(name));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(stat.count)));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(stat.min, 'f', 3)));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(stat.max, 'f', 3)));
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(stat.mean, 'f', 3)));
        ui->tableWidget->setItem(row, 5, new QTableWidgetItem(QString::number(stat.std_dev, 'f', 3)));
        ui->tableWidget->setItem(row, 6, new QTableWidgetItem(QString::number(stat.median, 'f', 3)));
        ui->tableWidget->setItem(row, 7, new QTableWidgetItem(QString::number(stat.p68, 'f', 3)));
        ui->tableWidget->setItem(row, 8, new QTableWidgetItem(QString::number(stat.p95, 'f', 3)));
        row++;
    }
}

void StatisticsDialog::setTitle(QString title)
{
    if (title == "...") title = "";
    setWindowTitle(QString("Statistics | %1").arg(title));
}

void StatisticsDialog::closeEvent(QCloseEvent* event)
{
    QWidget::closeEvent(event);
    emit rejected();
}