#include "amazons.h"

Amazon::Amazon(int amazonID, int playerID){
    this->amazonID=amazonID;
    this->row=0;
    this->col=0;
    this->playerID=playerID;
}

void Amazon:: printAmazonInfo(){
    cout<<"Amazon belongs to player no.: "<< this->playerID << " This is their "<< this->amazonID<<" amazon."<<endl;
}

void Amazon::printAmazonInfoBasic(){
    cout<<"Amazon "<<this->amazonID<<endl;
}

bool Amazon::freeAmazon(){
    if(this->row == 0 && this->col == 0){
        return true;
    }
    return false;
}

int Amazon::getAmazonID(){
    return this->amazonID;
}
int Amazon::getRow(){
    return this->row;
}
int Amazon::getColumn(){
    return this->col;
}
int Amazon::getPlayerID(){
    return this->playerID;
}
void Amazon::setRow(int row){
    this->row = row;
}
void Amazon::setCol(int col){
    this->col = col;
}