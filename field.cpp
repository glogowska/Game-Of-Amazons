#include "field.h"

Field:: Field(int row, int col){
    this->row = row;
    this->col = col;
    this->special=0;
    this->coins=0;
    this->arrow=0;
    this->amazonID;
    this->playerID;
    nextField=nullptr;
}

bool Field::freeField(){
    if(this->amazonID==0 && this->playerID==0 && this->special == 0 && this->coins == 0 && this->arrow == 0){
        return true;
    }
    else{
        return false;
    }
}

int Field::getRow(){
    return this->row;
}
int Field::getCol(){
    return this->col;
}
int Field::getSpecial(){
    return this->special;
}
int Field::getCoins(){
    return this->coins;
}
int Field::getAmazonID(){
    return this->amazonID;
}
int Field::getPlayerID(){
    return this->playerID;
}

int Field::getArrow(){
    return this->arrow;
}

void Field::setSpecial(int num){
    this->special =  num;
}
void Field::setCoins(int num){
    this->coins = num;
}



Field *&Field::refNextField(){
    return this->nextField;
}