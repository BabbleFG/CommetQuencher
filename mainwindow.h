#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_impressioNeg_clicked();

    void on_impressionPos_clicked();

    void on_engagementNeg_clicked();

    void on_engagementPos_clicked();

    void on_caffinatedPos_clicked();

    void on_caffinatedNeg_clicked();

    void on_mojitoNeg_clicked();

    void on_mojitoPos_clicked();

    void on_finalResults_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
