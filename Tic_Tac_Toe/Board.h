#ifndef Board_H
#define Board_H

#include <bits/stdc++.h>
using namespace std;

class Board{
    private:
        int size;
        vector<vector<char>> board;
    public:
        Board(int size);
        void printBoard();
        bool isFull();
        bool isValidMove(int x, int y);
        void makeMove(int x, int y, char symbol);
        bool checkWin(char symbol);

};

#endif