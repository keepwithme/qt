#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdialog.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void closeEvent(QCloseEvent *event){
   std::cout<<"aaaaaaaaaaa";
}
