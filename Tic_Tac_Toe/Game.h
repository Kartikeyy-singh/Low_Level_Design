#ifndef Game_H
#define Game_H

#include <bits/stdc++.h>
#include "Player.h"
#include "Board.h"

using namespace std;

class Game{
    private:
        Board *board;
        Player *player1;
        Player *player2;
        Player *currentPlayer;
        bool gameEnd;
        void switchPlayer();
        void makeMove();
        void printResult();
        
    public:
        Game(int boardSize, string Player_1_Name, string Player_2_Name);
        void start();
        void PlayerTurn();
        bool isDraw();  
};


#endif