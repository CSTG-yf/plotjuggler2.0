/********************************************************************************
** Form generated from reading UI file 'changelog_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGELOG_DIALOG_H
#define UI_CHANGELOG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangelogDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *buttonChangelog;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangelogDialog)
    {
        if (ChangelogDialog->objectName().isEmpty())
            ChangelogDialog->setObjectName(QString::fromUtf8("ChangelogDialog"));
        ChangelogDialog->resize(500, 300);
        ChangelogDialog->setMinimumSize(QSize(500, 300));
        ChangelogDialog->setMaximumSize(QSize(500, 300));
        verticalLayout = new QVBoxLayout(ChangelogDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ChangelogDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        buttonChangelog = new QPushButton(ChangelogDialog);
        buttonChangelog->setObjectName(QString::fromUtf8("buttonChangelog"));

        verticalLayout->addWidget(buttonChangelog);

        checkBox = new QCheckBox(ChangelogDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        buttonBox = new QDialogButtonBox(ChangelogDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChangelogDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangelogDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangelogDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangelogDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangelogDialog)
    {
        ChangelogDialog->setWindowTitle(QCoreApplication::translate("ChangelogDialog", "PlotJuggler", nullptr));
        label->setText(QCoreApplication::translate("ChangelogDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">New Version Installed<br/><br/></span><span style=\" font-size:12pt;\">The latest release of PlotJuggler includes several bug fixed and new features.</span></p></body></html>", nullptr));
        buttonChangelog->setText(QCoreApplication::translate("ChangelogDialog", "See changelog", nullptr));
        checkBox->setText(QCoreApplication::translate("ChangelogDialog", "Don't show again", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangelogDialog: public Ui_ChangelogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGELOG_DIALOG_H
