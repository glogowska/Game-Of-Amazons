#include "players.h"

Player:: Player(int playerID, string playerName){
    this->playerID = playerID;
    this->playerName = playerName;
    this->amazonCounter=0;
    this->coins=0;
    next=nullptr;
    for(int i=0;i<AMAZONSPERPLAYER;i++){
        aPtr[i]=nullptr;
    }
}



bool Player::addAmazonToPlayer(Amazon *aPtr){
    for(int i=0;i<AMAZONSPERPLAYER;i++){
        if(this->aPtr[i]==nullptr){
            this->aPtr[i]=aPtr;
            return true;
        }
    }
    return false;
}

bool Player::addNextAmazonToPlayer(){
    if(this->getAmazonCounter()==AMAZONSPERPLAYER){
        return false;
    }
    Amazon *newAmazon = new Amazon(this->amazonCounter+1,this->playerID);
    addAmazonToPlayer(newAmazon);
    this->increaseAmazonCounter();
    return true;
}

void Player::increaseAmazonCounter(){
    this->amazonCounter=amazonCounter + 1;
}

void Player::printPlayerInfo(){
    cout<<"These are player's "<<this->playerID<<"(name: "<<this->playerName<<")"<<" amazons: "<<endl;
    for(int i=0;i<this->getAmazonCounter();i++){
        this->aPtr[i]->printAmazonInfoBasic();
    }
}

int Player::getplayerID(){
    return this->playerID;
}
int Player::getAmazonCounter(){
    return this->amazonCounter;
}
int Player::getCoins(){
    return this->coins;
}
string Player::getPlayerName(){
    return this->playerName;
}

void Player::addCoins(int amount){
    this->coins = this->coins+amount;
}

Player *&Player::refNextPlayer(){
    return this->next;
}

bool Player::addAllAmazons(){
    for(int i=0;i<AMAZONSPERPLAYER;i++){
        this->addNextAmazonToPlayer();
    }
    return true;/////////////////
}

int Player::freeAmazon(){
    for(int i=0;i<AMAZONSPERPLAYER;i++){
        if(this->freeAmazon()==true){
            return i+1;
        }
    }
    return 0;
}

Amazon *&Player::getAmazon(int amazonID){
    return this->aPtr[amazonID-1];
}