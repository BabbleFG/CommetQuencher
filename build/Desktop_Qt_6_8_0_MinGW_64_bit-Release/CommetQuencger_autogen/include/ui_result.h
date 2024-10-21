/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName("Result");
        Result->resize(1287, 667);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Result->sizePolicy().hasHeightForWidth());
        Result->setSizePolicy(sizePolicy);
        Result->setMaximumSize(QSize(16777215, 16777215));
        Result->setCursor(QCursor(Qt::CursorShape::SplitVCursor));
        Result->setMouseTracking(false);
        Result->setAutoFillBackground(false);
        Result->setSizeGripEnabled(false);
        Result->setModal(false);

        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QCoreApplication::translate("Result", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
