#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Close window");
    ui->progressBar->setValue(0);

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));

//    connect(ui->pushButton, SIGNAL(clicked(bool)), close());

    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{

    myDialog = new MyDialog(this);
    myDialog->show();

//    MyDialog myDialog;
//    myDialog.setModal(true);
//    myDialog.exec();
}
