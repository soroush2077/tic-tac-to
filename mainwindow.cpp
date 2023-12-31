#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "QMessageBox"

QString player1name,player2name;
int counter=0;
int board[5][5]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int win1 = 0, win2 = 0, lose1 = 0, lose2 = 0, tie1 = 0, tie2 = 0;

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
    ui->labelPLayAgain->setAlignment(Qt::AlignCenter);
    ui->labelWinner->setAlignment(Qt::AlignCenter);
    ui->labelPLayAgain->setStyleSheet("font-size: 17px;");
    ui->labelWinner->setStyleSheet("font-size: 17px;");
    ui->radioButtonYes->setStyleSheet("font-size: 17px;");
    ui->radioButtonNo->setStyleSheet("font-size: 17px;");
    ui->labelWinner->setVisible(false);
    ui->lineEditWin1->setReadOnly(true);
    ui->lineEditWin2->setReadOnly(true);
    ui->lineEditLose1->setReadOnly(true);
    ui->lineEditLose2->setReadOnly(true);
    ui->lineEditTie1->setReadOnly(true);
    ui->lineEditTie2->setReadOnly(true);
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
        ui->lineEditName1->setReadOnly(true);
        ui->lineEditName2->setReadOnly(true);
    }
}

void MainWindow::player1win()
{
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
    win1++;
    lose2++;
    QString tempwin1 = QString::number(win1);
    QString templose2 = QString::number(lose2);
    ui->lineEditWin1->setText(tempwin1);
    ui->lineEditLose2->setText(templose2);
    ui->labelWinner->setVisible(true);
    ui->labelWinner->setText("WINNER: "+player1name);
    ui->labelPLayAgain->setVisible(true);
    ui->radioButtonNo->setVisible(true);
    ui->radioButtonYes->setVisible(true);
}

void MainWindow::player2win()
{
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
    win2++;
    lose1++;
    QString tempwin2 = QString::number(win2);
    QString templose1 = QString::number(lose1);
    ui->lineEditWin1->setText(tempwin2);
    ui->lineEditLose2->setText(templose1);
    ui->labelWinner->setVisible(true);
    ui->labelWinner->setText("WINNER: "+player2name);
    ui->labelPLayAgain->setVisible(true);
    ui->radioButtonNo->setVisible(true);
    ui->radioButtonYes->setVisible(true);
}

void MainWindow::tie()
{
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
    tie1++;
    tie2++;
    QString temptie1= QString::number(tie1);
    QString temptie2 = QString::number(tie2);
    ui->lineEditWin1->setText(temptie1);
    ui->lineEditLose2->setText(temptie2);
    ui->labelWinner->setVisible(true);
    ui->labelWinner->setText("TIE");
    ui->labelPLayAgain->setVisible(true);
    ui->radioButtonNo->setVisible(true);
    ui->radioButtonYes->setVisible(true);
}


void MainWindow::checkForWin()
{
    if (board[0][0] != 0 && board[0][0] == board[0][1] && board[0][0] == board[0][2] && board[0][0] == board[0][3] && board[0][0] == board[0][4])
    {
        if (board[0][0] == 1)
        {
            player1win();
        }
        else if (board[0][0] == 2)
        {
            player2win();
        }
    }


    else if (board[1][0] != 0 && board[1][0] == board[1][1] && board[1][0] == board[1][2] && board[1][0] == board[1][3] && board[1][0] == board[1][4])
    {
        if (board[1][0] == 1)
        {
            player1win();
        }
        else if (board[1][0] == 2)
        {
            player2win();
        }
    }


    else if (board[2][0] != 0 && board[2][0] == board[2][1] && board[2][0] == board[2][2] && board[2][0] == board[2][3] && board[2][0] == board[2][4])
    {
        if (board[2][0] == 1)
        {
            player1win();
        }
        else if (board[2][0] == 2)
        {
            player2win();
        }
    }


    else if (board[3][0] != 0 && board[3][0] == board[3][1] && board[3][0] == board[3][2] && board[3][0] == board[3][3] && board[3][0] == board[3][4])
    {
        if (board[3][0] == 1)
        {
            player1win();
        }
        else if (board[3][0] == 2)
        {
            player2win();
        }
    }


    else if (board[4][0] != 0 && board[4][0] == board[4][1] && board[4][0] == board[4][2] && board[4][0] == board[4][3] && board[4][0] == board[4][4])
    {
        if (board[4][0] == 1)
        {
            player1win();
        }
        else if (board[4][0] == 2)
        {
            player2win();
        }
    }


    else if (board[0][0] != 0 && board[0][0] == board[1][0] && board[0][0] == board[2][0] && board[0][0] == board[3][0] && board[0][0] == board[4][0])
    {
        if (board[0][0] == 1)
        {
            player1win();
        }
        else if (board[0][0] == 2)
        {
            player2win();
        }
    }


    else if (board[0][1] != 0 && board[0][1] == board[1][1] && board[0][1] == board[2][1] && board[0][1] == board[3][1] && board[0][1] == board[4][1])
    {
        if (board[0][1] == 1)
        {
            player1win();
        }
        else if (board[0][1] == 2)
        {
            player2win();
        }
    }


    else if (board[0][2] != 0 && board[0][2] == board[1][2] && board[0][2] == board[2][2] && board[0][2] == board[3][2] && board[0][2] == board[4][2])
    {
        if (board[0][2] == 1)
        {
            player1win();
        }
        else if (board[0][2] == 2)
        {
            player2win();
        }
    }


    else if (board[0][3] != 0 && board[0][3] == board[1][3] && board[0][3] == board[2][3] && board[0][3] == board[3][3] && board[0][3] == board[4][3])
    {
        if (board[0][3] == 1)
        {
            player1win();
        }
        else if (board[0][3] == 2)
        {
            player2win();
        }
    }


    else if (board[0][4] != 0 && board[0][4] == board[1][4] && board[0][4] == board[2][4] && board[0][4] == board[3][4] && board[0][4] == board[4][4])
    {
        if (board[0][4] == 1)
        {
            player1win();
        }
        else if (board[0][4] == 2)
        {
            player2win();
        }
    }


    else if (board[0][0] != 0 && board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] == board[3][3] && board[0][0] == board[4][4])
    {
        if (board[0][0] == 1)
        {
            player1win();
        }
        else if (board[0][0] == 2)
        {
            player2win();
        }
    }


    else if (board[0][4] != 0 && board[0][4] == board[1][3] && board[0][4] == board[2][2] && board[0][4] == board[3][1] && board[0][4] == board[4][0])
    {
        if (board[0][4] == 1)
        {
            player1win();
        }
        else if (board[0][4] == 2)
        {
            player2win();
        }
    }


    else if (counter == 25)
    {
        tie();
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
        ui->pushButton_1->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[0][0]=2;
        ui->pushButton_1->setText("O");
        ui->pushButton_1->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_1->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_2_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[0][1]=1;
        ui->pushButton_2->setText("X");
        ui->pushButton_2->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_2->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[0][1]=2;
        ui->pushButton_2->setText("O");
        ui->pushButton_2->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_2->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_3_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[0][2]=1;
        ui->pushButton_3->setText("X");
        ui->pushButton_3->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_3->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[0][2]=2;
        ui->pushButton_3->setText("O");
        ui->pushButton_3->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_3->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_4_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[0][3]=1;
        ui->pushButton_4->setText("X");
        ui->pushButton_4->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_4->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[0][3]=2;
        ui->pushButton_4->setText("O");
        ui->pushButton_4->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_4->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_5_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[0][4]=1;
        ui->pushButton_5->setText("X");
        ui->pushButton_5->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_5->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[0][4]=2;
        ui->pushButton_5->setText("O");
        ui->pushButton_5->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_5->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_6_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[1][0]=1;
        ui->pushButton_6->setText("X");
        ui->pushButton_6->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_6->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[1][0]=2;
        ui->pushButton_6->setText("O");
        ui->pushButton_6->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_6->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_7_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[1][1]=1;
        ui->pushButton_7->setText("X");
        ui->pushButton_7->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_7->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[1][1]=2;
        ui->pushButton_7->setText("O");
        ui->pushButton_7->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_7->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_8_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[1][2]=1;
        ui->pushButton_8->setText("X");
        ui->pushButton_8->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_8->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[1][2]=2;
        ui->pushButton_8->setText("O");
        ui->pushButton_8->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_8->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_9_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[1][3]=1;
        ui->pushButton_9->setText("X");
        ui->pushButton_9->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_9->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[1][3]=2;
        ui->pushButton_9->setText("O");
        ui->pushButton_9->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_9->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_10_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[1][4]=1;
        ui->pushButton_10->setText("X");
        ui->pushButton_10->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_10->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[1][4]=2;
        ui->pushButton_10->setText("O");
        ui->pushButton_10->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_10->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_11_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[2][0]=1;
        ui->pushButton_11->setText("X");
        ui->pushButton_11->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_11->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[2][0]=2;
        ui->pushButton_11->setText("O");
        ui->pushButton_11->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_11->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_12_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[2][1]=1;
        ui->pushButton_12->setText("X");
        ui->pushButton_12->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_12->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[2][1]=2;
        ui->pushButton_12->setText("O");
        ui->pushButton_12->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_12->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_13_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[2][2]=1;
        ui->pushButton_13->setText("X");
        ui->pushButton_13->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_13->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[2][2]=2;
        ui->pushButton_13->setText("O");
        ui->pushButton_13->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_13->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_14_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[2][3]=1;
        ui->pushButton_14->setText("X");
        ui->pushButton_14->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_14->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[2][3]=2;
        ui->pushButton_14->setText("O");
        ui->pushButton_14->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_14->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_15_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[2][4]=1;
        ui->pushButton_15->setText("X");
        ui->pushButton_15->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_15->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[2][4]=2;
        ui->pushButton_15->setText("O");
        ui->pushButton_15->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_15->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_16_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[3][0]=1;
        ui->pushButton_16->setText("X");
        ui->pushButton_16->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_16->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[3][0]=2;
        ui->pushButton_16->setText("O");
        ui->pushButton_16->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_16->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_17_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[3][1]=1;
        ui->pushButton_17->setText("X");
        ui->pushButton_17->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_17->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[3][1]=2;
        ui->pushButton_17->setText("O");
        ui->pushButton_17->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_17->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_18_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[3][2]=1;
        ui->pushButton_18->setText("X");
        ui->pushButton_18->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_18->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[3][2]=2;
        ui->pushButton_18->setText("O");
        ui->pushButton_18->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_18->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_19_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[3][3]=1;
        ui->pushButton_19->setText("X");
        ui->pushButton_19->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_19->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[3][3]=2;
        ui->pushButton_19->setText("O");
        ui->pushButton_19->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_19->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_20_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[3][4]=1;
        ui->pushButton_20->setText("X");
        ui->pushButton_20->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_20->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[3][4]=2;
        ui->pushButton_20->setText("O");
        ui->pushButton_20->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_20->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_21_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[4][0]=1;
        ui->pushButton_21->setText("X");
        ui->pushButton_21->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_21->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[4][0]=2;
        ui->pushButton_21->setText("O");
        ui->pushButton_21->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_21->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_22_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[4][1]=1;
        ui->pushButton_22->setText("X");
        ui->pushButton_22->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_22->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[4][1]=2;
        ui->pushButton_22->setText("O");
        ui->pushButton_22->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_22->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_23_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[4][2]=1;
        ui->pushButton_23->setText("X");
        ui->pushButton_23->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_23->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[4][2]=2;
        ui->pushButton_23->setText("O");
        ui->pushButton_23->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_23->setEnabled(false);
    }
        checkForWin();
}


void MainWindow::on_pushButton_24_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[4][3]=1;
        ui->pushButton_24->setText("X");
        ui->pushButton_24->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_24->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[4][3]=2;
        ui->pushButton_24->setText("O");
        ui->pushButton_24->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_24->setEnabled(false);
    }
    checkForWin();
}


void MainWindow::on_pushButton_25_clicked()
{
    counter++;

    if (counter%2==1)
    {
        board[4][4]=1;
        ui->pushButton_25->setText("X");
        ui->pushButton_25->setStyleSheet("font-size:50px;background-color:blue;");
        ui->labelTurn->setText(player2name+"'s turn");
        ui->labelTurn->setStyleSheet("color:red;");
        ui->pushButton_25->setEnabled(false);
    }
    else if(counter%2==0)
    {
        board[4][4]=2;
        ui->pushButton_25->setText("O");
        ui->pushButton_25->setStyleSheet("font-size:50px;background-color:red;");
        ui->labelTurn->setText(player1name+"'s turn");
        ui->labelTurn->setStyleSheet("color:blue;");
        ui->pushButton_25->setEnabled(false);
    }
    checkForWin();
}

