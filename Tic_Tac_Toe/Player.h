#ifndef player_H
#define player_H

#include <bits/stdc++.h>
using namespace std;

class Player{
    private:
        string name;
        char symbol;
    public:
        // Player(string &name, char symbol){
        //     this->name = name;
        //     this->symbol = symbol;
        // }

        // string getName(){
        //     return name;
        // }

        // char getSymbol(){
        //     return symbol;
        // }
        Player(string name, char symbol);
        string getName();
        char getSymbol();
};
#endif