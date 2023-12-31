#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QMessageBox"

QString player1name,player2name;
int counter=0;
int board[5][5]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButtonReset->setEnabled(false);
    ui->pushButtonStart->setEnabled(false);
    ui->pushButton_1->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
    ui->pushButton_10->setEnabled(false);
    ui->pushButton_11->setEnabled(false);
    ui->pushButton_12->setEnabled(false);
    ui->pushButton_13->setEnabled(false);
    ui->pushButton_14->setEnabled(false);
    ui->pushButton_15->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
    ui->pushButton_17->setEnabled(false);
    ui->pushButton_18->setEnabled(false);
    ui->pushButton_19->setEnabled(false);
    ui->pushButton_20->setEnabled(false);
    ui->pushButton_21->setEnabled(false);
    ui->pushButton_22->setEnabled(false);
    ui->pushButton_23->setEnabled(false);
    ui->pushButton_24->setEnabled(false);
    ui->pushButton_25->setEnabled(false);
    ui->labelLose->setAlignment(Qt::AlignCenter);
    ui->labelTie->setAlignment(Qt::AlignCenter);
    ui->labelWin->setAlignment(Qt::AlignCenter);
    ui->lineEditWin1->setReadOnly(true);
    ui->lineEditWin2->setReadOnly(true);
    ui->lineEditLose1->setReadOnly(true);
    ui->lineEditLose2->setReadOnly(true);
    ui->lineEditTie1->setReadOnly(true);
    ui->lineEditTie2->setReadOnly(true);
    ui->labelPLayAgain->setAlignment(Qt::AlignCenter);
    ui->labelPLayAgain->setVisible(false);
    ui->radioButtonNo->setVisible(false);
    ui->radioButtonYes->setVisible(false);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lineEditName1_textChanged(const QString &arg1)
{
    if (ui->lineEditName1->text().length()>0 && ui->lineEditName2->text().length()>0)
    {
        ui->pushButtonStart->setEnabled(true);
    }
    else
    {
        ui->pushButtonStart->setEnabled(false);
    }
}


void MainWindow::on_lineEditName2_textChanged(const QString &arg1)
{

    if (ui->lineEditName1->text().length()>0 && ui->lineEditName2->text().length()>0 )
    {
        ui->pushButtonStart->setEnabled(true);
    }
    else
    {
        ui->pushButtonStart->setEnabled(false);
    }
}


void MainWindow::on_pushButtonStart_clicked()
{
    QString temp1 = ui->lineEditName1->text();
    QString temp2 = ui->lineEditName2->text();
    if (temp1 == temp2) {
        QMessageBox::warning(this,"Error","The names cannot be same");
    }
    else {
        player1name=ui->lineEditName1->text();
        player2name=ui->lineEditName2->text();
        ui->labelPlayer1Record->setText(player1name);
        ui->labelPlayer2Record->setText(player2name);
        ui->labelTurn->setText(player1name+"'s turn");
        ui->pushButtonReset->setEnabled(true);
        ui->pushButton_1->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_5->setEnabled(true);
        ui->pushButton_6->setEnabled(true);
        ui->pushButton_7->setEnabled(true);
        ui->pushButton_8->setEnabled(true);
        ui->pushButton_9->setEnabled(true);
        ui->pushButton_10->setEnabled(true);
        ui->pushButton_11->setEnabled(true);
        ui->pushButton_12->setEnabled(true);
        ui->pushButton_13->setEnabled(true);
        ui->pushButton_14->setEnabled(true);
        ui->pushButton_15->setEnabled(true);
        ui->pushButton_16->setEnabled(true);
        ui->pushButton_17->setEnabled(true);
        ui->pushButton_18->setEnabled(true);
        ui->pushButton_19->setEnabled(true);
        ui->pushButton_20->setEnabled(true);
        ui->pushButton_21->setEnabled(true);
        ui->pushButton_22->setEnabled(true);
        ui->pushButton_23->setEnabled(true);
        ui->pushButton_24->setEnabled(true);
        ui->pushButton_25->setEnabled(true);
        ui->pushButtonStart->setEnabled(false);
        ui->labelName1->setStyleSheet("color: blue;");
        ui->labelName2->setStyleSheet("color:red;");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->labelPlayer1Record->setStyleSheet("color:blue;");
        ui->labelPlayer2Record->setStyleSheet("color:red;");
    }
}





void MainWindow::on_pushButton_1_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[0][0]=1;
        ui->pushButton_1->setText("X");
        ui->pushButton_1->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
    }
    else if(counter%2==0)
    {
        board[0][0]=2;
        ui->pushButton_1->setText("O");
        ui->pushButton_1->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
    }

}

void MainWindow::checkForWin()
{
    if(a)
}



void MainWindow::on_pushButton_2_clicked()
{

}

