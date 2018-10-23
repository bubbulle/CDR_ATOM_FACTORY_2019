#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream.h>

using namespace std;



MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  cout << "hello wordl";
}

MainWindow::~MainWindow()
{
  delete ui;
}
