#include "Game.h"
// #include "Player.h"
// #include "Board.h"
#include <bits/stdc++.h>
using namespace std;

Game :: Game(int boardSize, string Player_1_Name, string Player_2_Name){
    board = new Board(boardSize);
    player1 = new Player(Player_1_Name, 'X');
    player2 = new Player(Player_2_Name, 'O');
    currentPlayer = player1;
    gameEnd = false;
};

void Game :: start(){
    while(!gameEnd){
        board->printBoard();
        PlayerTurn();
        if(board->checkWin(currentPlayer->getSymbol())){ 
            printResult();
            cout<<currentPlayer->getName()<<" wins!! "<<endl;
            break;
        }
        if(board->isFull()){
            cout<<"Game is a draw"<<endl;
            break;
        }
        switchPlayer();
    }
}

void Game :: PlayerTurn(){
    int x, y;
    cout<<currentPlayer->getName()<<"'s turn"<<endl;
    cout<<"Enter the row and column number: ";
    cin>>x>>y;
    if(board->isValidMove(x, y)){
        board->makeMove(x, y, currentPlayer->getSymbol());
    }
    else{
        cout<<"Invalid Move"<<endl;
        // return;
        PlayerTurn();
    }
} 

void Game :: switchPlayer(){
    if(currentPlayer == player1){
        currentPlayer = player2;
    }
    else{
        currentPlayer = player1;
    }
}

void Game :: printResult(){
    board->printBoard();
}

bool Game :: isDraw(){
    return board->isFull() && !board->checkWin(player1->getSymbol()) && !board->checkWin(player2->getSymbol());
}