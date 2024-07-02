#include<bits/stdc++.h>
#include "Game.h"
using namespace std;


int main(){

    int boardSize;
    string Player_1_Name;
    string Player_2_Name;

    cout<<"Enter the size of the board: ";
    cin>>boardSize;

    cout<<"Enter the name of Player 1: ";
    cin>>Player_1_Name;

    cout<<"Enter the name of Player 2: ";
    cin>>Player_2_Name;

    Game TicTacToe(boardSize, Player_1_Name, Player_2_Name);
    TicTacToe.start();

}

