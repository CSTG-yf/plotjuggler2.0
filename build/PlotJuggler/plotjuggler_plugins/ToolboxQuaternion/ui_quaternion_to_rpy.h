/********************************************************************************
** Form generated from reading UI file 'quaternion_to_rpy.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUATERNION_TO_RPY_H
#define UI_QUATERNION_TO_RPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quaternion_to_RPY
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayoutLeft;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QFrame *frame_1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEditX;
    QLabel *label_2;
    QLineEdit *lineEditY;
    QLabel *label_3;
    QLineEdit *lineEditZ;
    QLabel *label_4;
    QLineEdit *lineEditW;
    QLabel *label_6;
    QLineEdit *lineEditOut;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButtonRadians;
    QRadioButton *radioButtonDegrees;
    QCheckBox *checkBoxUnwrap;
    QPushButton *pushButtonSave;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QFrame *framePlotPreview;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *quaternion_to_RPY)
    {
        if (quaternion_to_RPY->objectName().isEmpty())
            quaternion_to_RPY->setObjectName(QString::fromUtf8("quaternion_to_RPY"));
        quaternion_to_RPY->resize(1305, 1050);
        verticalLayout_2 = new QVBoxLayout(quaternion_to_RPY);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, -1, 20, -1);
        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 22, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame = new QFrame(quaternion_to_RPY);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayoutLeft = new QVBoxLayout(frame);
        verticalLayoutLeft->setObjectName(QString::fromUtf8("verticalLayoutLeft"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayoutLeft->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_1 = new QFrame(frame);
        frame_1->setObjectName(QString::fromUtf8("frame_1"));
        formLayout = new QFormLayout(frame_1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(frame_1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditX = new QLineEdit(frame_1);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));
        lineEditX->setMinimumSize(QSize(400, 0));
        lineEditX->setMaximumSize(QSize(600, 16777215));
        lineEditX->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditX);

        label_2 = new QLabel(frame_1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditY = new QLineEdit(frame_1);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));
        lineEditY->setMinimumSize(QSize(400, 0));
        lineEditY->setMaximumSize(QSize(600, 16777215));
        lineEditY->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditY);

        label_3 = new QLabel(frame_1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditZ = new QLineEdit(frame_1);
        lineEditZ->setObjectName(QString::fromUtf8("lineEditZ"));
        lineEditZ->setMinimumSize(QSize(400, 0));
        lineEditZ->setMaximumSize(QSize(600, 16777215));
        lineEditZ->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditZ);

        label_4 = new QLabel(frame_1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEditW = new QLineEdit(frame_1);
        lineEditW->setObjectName(QString::fromUtf8("lineEditW"));
        lineEditW->setMinimumSize(QSize(400, 0));
        lineEditW->setMaximumSize(QSize(600, 16777215));
        lineEditW->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditW);

        label_6 = new QLabel(frame_1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEditOut = new QLineEdit(frame_1);
        lineEditOut->setObjectName(QString::fromUtf8("lineEditOut"));
        lineEditOut->setMinimumSize(QSize(400, 0));
        lineEditOut->setMaximumSize(QSize(600, 16777215));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditOut);


        verticalLayout->addWidget(frame_1);


        verticalLayoutLeft->addLayout(verticalLayout);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(quaternion_to_RPY);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButtonRadians = new QRadioButton(frame_2);
        radioButtonRadians->setObjectName(QString::fromUtf8("radioButtonRadians"));
        radioButtonRadians->setChecked(true);

        verticalLayout_3->addWidget(radioButtonRadians);

        radioButtonDegrees = new QRadioButton(frame_2);
        radioButtonDegrees->setObjectName(QString::fromUtf8("radioButtonDegrees"));

        verticalLayout_3->addWidget(radioButtonDegrees);

        checkBoxUnwrap = new QCheckBox(frame_2);
        checkBoxUnwrap->setObjectName(QString::fromUtf8("checkBoxUnwrap"));

        verticalLayout_3->addWidget(checkBoxUnwrap);

        pushButtonSave = new QPushButton(frame_2);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setEnabled(true);

        verticalLayout_3->addWidget(pushButtonSave);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(frame_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        framePlotPreview = new QFrame(quaternion_to_RPY);
        framePlotPreview->setObjectName(QString::fromUtf8("framePlotPreview"));
        framePlotPreview->setMinimumSize(QSize(0, 100));
        framePlotPreview->setMaximumSize(QSize(16777215, 600));
        framePlotPreview->setFrameShape(QFrame::Box);
        framePlotPreview->setFrameShadow(QFrame::Plain);

        verticalLayout_2->addWidget(framePlotPreview);

        verticalSpacer_2 = new QSpacerItem(139, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 11, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        buttonBox = new QDialogButtonBox(quaternion_to_RPY);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(2, 2);
        verticalLayout_2->setStretch(3, 1);

        retranslateUi(quaternion_to_RPY);

        QMetaObject::connectSlotsByName(quaternion_to_RPY);
    } // setupUi

    void retranslateUi(QWidget *quaternion_to_RPY)
    {
        quaternion_to_RPY->setWindowTitle(QCoreApplication::translate("quaternion_to_RPY", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("quaternion_to_RPY", "Drag and Drop the Quaternion values here:", nullptr));
        label->setText(QCoreApplication::translate("quaternion_to_RPY", "X:", nullptr));
        label_2->setText(QCoreApplication::translate("quaternion_to_RPY", "Y:", nullptr));
        label_3->setText(QCoreApplication::translate("quaternion_to_RPY", "Z:", nullptr));
        label_4->setText(QCoreApplication::translate("quaternion_to_RPY", "W:", nullptr));
        label_6->setText(QCoreApplication::translate("quaternion_to_RPY", "Output:", nullptr));
        radioButtonRadians->setText(QCoreApplication::translate("quaternion_to_RPY", "Radians", nullptr));
        radioButtonDegrees->setText(QCoreApplication::translate("quaternion_to_RPY", "Degrees", nullptr));
        checkBoxUnwrap->setText(QCoreApplication::translate("quaternion_to_RPY", "Unwrap Angles", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("quaternion_to_RPY", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quaternion_to_RPY: public Ui_quaternion_to_RPY {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUATERNION_TO_RPY_H
