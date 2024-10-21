#include "result.h"
#include "ui_result.h"

Result::Result(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Result)
{
    ui->setupUi(this);
    // Set the window flags to allow resizing and include close button
    this->setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint);

    // Optional: Set minimum size
    this->setMinimumSize(400, 300); // Adjust these values as needed

    // Enable the full-screen option
    this->setAttribute(Qt::WA_DeleteOnClose); // Automatically delete the object when closed

}

Result::~Result()
{
    delete ui;
}

