#include "choosingstory.h"
#include "mainwindow.h"
#include "ui_choosingstory.h"

ChoosingStory::ChoosingStory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ChoosingStory)
{
    ui->setupUi(this);
}

ChoosingStory::~ChoosingStory()
{
    delete ui;
}

void ChoosingStory::on_pushButton_3_clicked()
{
    MainWindow *mainwin = new MainWindow;
    mainwin -> show();
    hide();
}
