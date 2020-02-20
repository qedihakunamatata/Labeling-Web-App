#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>

mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mainwindow)
{
    ui->setupUi(this);
}

mainwindow::~mainwindow()
{
    delete ui;
}


void mainwindow::on_pushButton_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "All Files(*.*)");

    QMessageBox::information(this, tr("File Name"),filename);
}

void mainwindow::on_pushButton_2_clicked()
{
    QString filename=QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "All Files(*.*);;Text Files(*.txt*)");

    QMessageBox::information(this, tr("File Name"),filename);

}
