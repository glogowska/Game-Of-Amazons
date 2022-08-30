#include "amazons.h"

Amazon::Amazon(int amazonID, int playerID){
    this->amazonID=amazonID;
    this->row=0;
    this->col=0;
    this->playerID=playerID;
    this->killed = false;
    this->inMud = false; 
}

Amazon::~Amazon(){
    //cout<<"Amazon destroyed"<<endl;
}

void Amazon:: printAmazonInfo(){
    
}

void Amazon::printAmazonInfoBasic(){
    cout<<"Amazon "<<this->amazonID<<endl;
}

bool Amazon::freeAmazon(){
    if(this->row == 0 && this->col == 0){
        return true;
    }
    if(this->row + this->col == 1) throw "row and col equal to 0 and 1 or 1 and 0"; ///remember to catch :))
    return false;
}

int Amazon::getAmazonID(){
    return this->amazonID;
}

int Amazon::getRow(){
    return this->row;
}

int Amazon::getCol(){
    return this->col;
}

int Amazon::getPlayerID(){
    return this->playerID;
}

bool Amazon::getKilled(){
    return this->killed;
}

bool Amazon::getInMud(){
    return this->inMud;
}

void Amazon::setRow(int row){
    this->row = row;
}

void Amazon::setCol(int col){
    this->col = col;
}

void Amazon::setKilled(bool killed){
    this->killed = killed;
}

void Amazon::setInMud(bool inMud){
    this->inMud = inMud;
}
