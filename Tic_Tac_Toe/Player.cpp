#include "Player.h"
using namespace std;

Player::Player(string name, char symbol){
    this->name = name;
    this->symbol = symbol;
}

string Player::getName(){
    return name;
}

char Player::getSymbol(){
    return symbol;
}

