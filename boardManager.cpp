#include "boardManager.h"

BoardManager::BoardManager(){
    this->rows = 0;
    this->cols = 0;
    this->head = nullptr;
}

bool BoardManager::addField(int row, int col){
    Field* current = this->head;
    if(this->head==nullptr){
        this->head = new Field(row,col);
        return true;
    }
    else{
        while(current->refNextField()){
        current=current->refNextField();
        }

        current->refNextField() = new Field(row,col);
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
    //dodac tutaj randomise board i przeniesc metody do private
    return true;///////////////////
    
}

bool BoardManager::randomizeBoard(){
    Field* current=this->head;
    while(current){
        
    }
}

void BoardManager::printBoard(){
    Field* current = this->head;
    int field = 1;
    while(current){
        cout<<"Field: "<<field<<"  Row: "<<current->getRow();
        cout<<"  Col: "<<current->getCol()<<endl;
        current=current->refNextField();
        field++;
    }

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