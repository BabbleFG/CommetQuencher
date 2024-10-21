/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Middle_pic;
    QPushButton *impressioNeg;
    QLabel *Backround_Pic;
    QPushButton *caffinatedNeg;
    QPushButton *mojitoNeg;
    QPushButton *impressionPos;
    QPushButton *engagementPos;
    QPushButton *caffinatedPos;
    QPushButton *mojitoPos;
    QPushButton *engagementNeg;
    QPushButton *finalResults;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(2117, 1237);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Middle_pic = new QLabel(centralwidget);
        Middle_pic->setObjectName("Middle_pic");
        Middle_pic->setGeometry(QRect(800, 230, 421, 421));
        impressioNeg = new QPushButton(centralwidget);
        impressioNeg->setObjectName("impressioNeg");
        impressioNeg->setGeometry(QRect(10, 10, 341, 131));
        Backround_Pic = new QLabel(centralwidget);
        Backround_Pic->setObjectName("Backround_Pic");
        Backround_Pic->setGeometry(QRect(-50, -290, 2111, 1601));
        caffinatedNeg = new QPushButton(centralwidget);
        caffinatedNeg->setObjectName("caffinatedNeg");
        caffinatedNeg->setGeometry(QRect(10, 290, 341, 131));
        mojitoNeg = new QPushButton(centralwidget);
        mojitoNeg->setObjectName("mojitoNeg");
        mojitoNeg->setGeometry(QRect(10, 430, 341, 131));
        impressionPos = new QPushButton(centralwidget);
        impressionPos->setObjectName("impressionPos");
        impressionPos->setGeometry(QRect(1560, 20, 341, 131));
        engagementPos = new QPushButton(centralwidget);
        engagementPos->setObjectName("engagementPos");
        engagementPos->setGeometry(QRect(1560, 160, 341, 131));
        caffinatedPos = new QPushButton(centralwidget);
        caffinatedPos->setObjectName("caffinatedPos");
        caffinatedPos->setGeometry(QRect(1560, 300, 341, 131));
        mojitoPos = new QPushButton(centralwidget);
        mojitoPos->setObjectName("mojitoPos");
        mojitoPos->setGeometry(QRect(1560, 440, 341, 131));
        engagementNeg = new QPushButton(centralwidget);
        engagementNeg->setObjectName("engagementNeg");
        engagementNeg->setGeometry(QRect(10, 150, 341, 131));
        finalResults = new QPushButton(centralwidget);
        finalResults->setObjectName("finalResults");
        finalResults->setGeometry(QRect(780, 870, 401, 181));
        MainWindow->setCentralWidget(centralwidget);
        Backround_Pic->raise();
        Middle_pic->raise();
        impressioNeg->raise();
        caffinatedNeg->raise();
        mojitoNeg->raise();
        impressionPos->raise();
        engagementPos->raise();
        caffinatedPos->raise();
        mojitoPos->raise();
        engagementNeg->raise();
        finalResults->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 2117, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Middle_pic->setText(QString());
        impressioNeg->setText(QCoreApplication::translate("MainWindow", "Imprresion--", nullptr));
        Backround_Pic->setText(QString());
        caffinatedNeg->setText(QCoreApplication::translate("MainWindow", "Caffinated--", nullptr));
        mojitoNeg->setText(QCoreApplication::translate("MainWindow", "Mojito --", nullptr));
        impressionPos->setText(QCoreApplication::translate("MainWindow", "Impression++", nullptr));
        engagementPos->setText(QCoreApplication::translate("MainWindow", "Engagement++", nullptr));
        caffinatedPos->setText(QCoreApplication::translate("MainWindow", "Caffinated++", nullptr));
        mojitoPos->setText(QCoreApplication::translate("MainWindow", "Mojito++", nullptr));
        engagementNeg->setText(QCoreApplication::translate("MainWindow", "Engagement--", nullptr));
        finalResults->setText(QCoreApplication::translate("MainWindow", "Final Results!!!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
