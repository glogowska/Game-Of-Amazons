#include "field.h"

Field:: Field(int row, int col){
    this->row = row;
    this->col = col;
    this->artifact=0;
    this->coins=0;
    this->amazonID;
    this->playerID;
    nextField=nullptr;
}

int Field::getRow(){
    return this->row;
}
int Field::getCol(){
    return this->col;
}
int Field::getArtifact(){
    return this->artifact;
}
int Field::getCoins(){
    return this->coins;
}


Field *&Field::refNextField(){
    return this->nextField;
}