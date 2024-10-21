#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <iostream>
#include "result.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
using namespace std;
MainWindow::MainWindow(QWidget *parent)

    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QPixmap pix(":/resources/img/CommetQImg.png");
    int bh=ui->Middle_pic->height();
    int bw=ui->Middle_pic->width();
    ui->Middle_pic->setPixmap(pix.scaled(bw,bh,Qt::KeepAspectRatio));

    QPixmap pixel(":/resources/img/utDallasColors.png");
    int mh= ui->Backround_Pic->height();
    int mw=ui->Backround_Pic->width();
    ui->Backround_Pic->setPixmap(pixel.scaled(mw,mh,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

int impression=0,engagement=0,caffinated=0,mojito=0;

void MainWindow::on_impressioNeg_clicked()
{
    if (impression > 0) {
        impression--;
    }
    ui->impressioNeg->setText("Impression: " + QString::number(impression)); // Update text on negative button
    ui->impressionPos->setText("Impression: " + QString::number(impression)); // Update text on positive button
}

void MainWindow::on_impressionPos_clicked()
{
    impression++;
    ui->impressioNeg->setText("Impression: " + QString::number(impression)); // Update text on negative button
    ui->impressionPos->setText("Impression: " + QString::number(impression)); // Update text on positive button
}

void MainWindow::on_engagementNeg_clicked()
{
    if (engagement > 0) {
        engagement--;
    }
    ui->engagementNeg->setText("Engagement: " + QString::number(engagement)); // Update text on negative button
    ui->engagementPos->setText("Engagement: " + QString::number(engagement)); // Update text on positive button
}

void MainWindow::on_engagementPos_clicked()
{
    engagement++;
    ui->engagementNeg->setText("Engagement: " + QString::number(engagement)); // Update text on negative button
    ui->engagementPos->setText("Engagement: " + QString::number(engagement)); // Update text on positive button
}

void MainWindow::on_caffinatedNeg_clicked()
{
    if (caffinated > 0) {
        caffinated--;
    }
    ui->caffinatedNeg->setText("Caffinated: " + QString::number(caffinated)); // Update text on negative button
    ui->caffinatedPos->setText("Caffinated: " + QString::number(caffinated)); // Update text on positive button
}

void MainWindow::on_caffinatedPos_clicked()
{
    caffinated++;
    ui->caffinatedNeg->setText("Caffinated: " + QString::number(caffinated)); // Update text on negative button
    ui->caffinatedPos->setText("Caffinated: " + QString::number(caffinated)); // Update text on positive button
}

void MainWindow::on_mojitoNeg_clicked()
{
    if (mojito > 0) {
        mojito--;
    }
    ui->mojitoNeg->setText("Mojito: " + QString::number(mojito)); // Update text on negative button
    ui->mojitoPos->setText("Mojito: " + QString::number(mojito)); // Update text on positive button
}

void MainWindow::on_mojitoPos_clicked()
{
    mojito++;
    ui->mojitoNeg->setText("Mojito: " + QString::number(mojito)); // Update text on negative button
    ui->mojitoPos->setText("Mojito: " + QString::number(mojito)); // Update text on positive button
}

void MainWindow::on_finalResults_clicked()
{
    Result result;
    result.setModal(true);
    result.exec();
}

