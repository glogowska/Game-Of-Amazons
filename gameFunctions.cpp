#include "gameFunctions.h"

void printRules(){
    cout<<"RULES OF THE GAME OF AMAZONS:"<<endl;
}

bool placeAmazon(PlayersManager& PM, BoardManager& BM, int playerID, int amazonID, int row, int col){
    PM.printcheck();
    cout<<PM.findPlayerID(playerID)->getCoins()<<endl;
    
    PM.placeAmazonPlayer(playerID,amazonID,row,col);
    //cout<<PM.findPlayerID(playerID)->getCoins()<<endl;
    BM.placeAmazon(row,col,playerID,amazonID);
    return true;
    //addCoins(PM,BM,playerID,row,col);
}

void addCoins(PlayersManager& PM, BoardManager& BM, int playerID,int row, int col){
    int coins = BM.getCoins(row,col);
    PM.collectCoins(coins,playerID);
    BM.clearFieldSpecialCoins(row,col);
}