#include "boardManager.h"

BoardManager::BoardManager(){
    this->rows = 0;
    this->cols = 0;
    this->roundsPlayed = 0;
    this->playersOnBoard = 0;
    this->head = nullptr;

}

void BoardManager::increasePlayersOnBoardCount(){
    this->playersOnBoard = this->playersOnBoard +1;
}

bool BoardManager::addField(int row, int col){
    Field* current = this->head;
    if(this->head==nullptr){
        this->head = new Field(row,col);
        this->setRows(row);
        this->setCols(col);
        return true;
    }
    else{
        while(current->refNextField()){
        current=current->refNextField();
        }

        current->refNextField() = new Field(row,col);
        this->setRows(row);
        this->setCols(col);
        return true;
    }
    return false;
}

bool BoardManager::generateBoard(int rows,int cols){

    for(int i=1;i<=rows;i++){
        for(int k=1;k<=cols;k++){
            this->addField(i,k);
        }
    }
    randomizeBoard(rows,cols);
    return true;///////////////////
    
}

bool BoardManager::randomizeBoard(int rows, int cols){
    int specialAndCoinsArray [2][10] = {0, 0, 0, 0, 0, 0, 1, 2, 1, 2, 0, 0, 0, 10, 10 ,15, 10, 10 ,15, 20};
    //int randNum = rand()%(max-min + 1) + min;
    
    Field* current=this->head;
    
    while(current){
        int randPosition0 = rand()%(9-0 + 1) + 0;
        current->setSpecial(specialAndCoinsArray[0][randPosition0]);
        if(current->freeField()){
            int randPosition1 = rand()%(9-0 + 1) + 0;
            current->setCoins(specialAndCoinsArray[1][randPosition1]);
        }
        current = current->refNextField();
    }
    return true;
}

void BoardManager::printFields(){
    Field* current = this->head;
    int field = 1;
    while(current){
        cout<<"Field: "<<field<<"  Row: "<<current->getRow();
        cout<<"  Col: "<<current->getCol();
        cout<<" Special: "<<current->getSpecial();
        cout<<" Coins: "<<current->getCoins()<<endl;
        current=current->refNextField();
        field++;
    }

}

void BoardManager::printBoard(){
    Field* current = this->head;
    int currentRow = 1;
    while(current){
        if(current->getRow() != currentRow){
            cout<<endl;
        }
        currentRow = current->getRow();
        if(current->freeField()) cout<<"[    ]";
        else if(current->getAmazonID()!=0){
            cout<<"[P"<<current->getPlayerID()<<"A"<<current->getAmazonID()<<"]";
        }
        else if(current->getArrow() != 0) cout<<"[ >< ]";
        else if(current->getCoins() > 0) cout<<"[*"<<current->getCoins()<<"*]";
        else if(current->getSpecial() == 1) cout<<"[ MU ]";
        else if(current->getSpecial() == 2) cout<<"[ PP ]";
        else if(current->getSpecial() == 3) cout<<"[ PA ]";
        current = current->refNextField();

    }
    cout<<endl;
}

bool BoardManager::doesFieldExist(int row, int col){
    Field* current = this->head;
    while(current){
        if(current->getRow()==row && current->getCol()==col){
            return true;
        }
        current=current->refNextField();
    }
    return false;
}

void BoardManager::printBoardManager(){
    cout<<"Rows: "<<this->rows<<" Cols:"<<this->cols<<" Rounds: "<< this->roundsPlayed;
    cout<<" Players: "<< this->playersOnBoard<<endl;
}

void BoardManager::clearField(int row, int col){
    Field *current = this->findField(row,col);
    current->setCoins(0);
    current->setSpecial(0);
}

bool BoardManager::isField(int row, int col){
    Field* current = this->head;
    while(current){
        if(current->getRow()==row && current->getCol()==col) return true;
        else current = current->refNextField();
    }
    return false;
}

Field *&BoardManager::findField(int row, int col){
    Field*& current = this->head;
    while(current){
        if(current->getRow()==row && current->getCol()==col) return current;
        else current = current->refNextField();
    }
    return current;
}

void BoardManager::setRows(int rows){
    this->rows = rows;
}
void BoardManager::setCols(int cols){
    this->cols = cols;
}
