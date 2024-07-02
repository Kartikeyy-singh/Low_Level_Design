#include "Board.h"
#include <bits/stdc++.h>
using namespace std;


Board::Board(int size){
    this->size = size;
    board.resize(size, vector<char>(size, ' '));
}

void Board::printBoard(){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<board[i][j];
            if(j<size-1){
                cout<<"|";
            }
        }
        cout<<endl;
        if(i<size-1){
            for(int j=0; j<size; j++){
                cout<<"-";
                if(j<size-1){
                    cout<<"+";
                }
            }
            cout<<endl;
        }
    }
}

bool Board::isFull(){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(board[i][j] == ' '){
                return false;
            }
        }
    }
    return true;
}

bool Board::isValidMove(int x, int y){
    if(x>=0 && x<size && y>=0 && y<size && board[x][y] == ' '){
        return true;
    }
    return false;
}

void Board::makeMove(int x, int y, char symbol){
    board[x][y] = symbol;
}

bool Board::checkWin(char symbol){

    // Row wise check
    for(int i=0; i<size; i++){ 
        bool win = true;
        for(int j=0; j<size; j++){
            if(board[i][j] != symbol){
                win = false;
                break;
            }
        }
        if(win){
            return true;
        }
    }

    // Column wise check
    for(int i=0; i<size; i++){
        bool win = true;
        for(int j=0; j<size; j++){
            if(board[j][i] != symbol){
                win = false;
                break;
            }
        }
        if(win){
            return true;
        }
    }

    //  Main Diagonal check
    bool win = true;
    for(int i=0; i<size; i++){
        if(board[i][i] != symbol){
            win = false;
            break;
        }
    }
    if(win){
        return true;
    }

    win = true;
    
    // Anti Diagonal check
    for(int i=0; i<size; i++){
        if(board[i][size-i-1] != symbol){
            win = false;
            break;
        }
    }
    if(win){
        return true;
    }

    return false;
}
