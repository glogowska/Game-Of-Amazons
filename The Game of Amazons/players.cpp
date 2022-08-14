#include "players.h"

Player:: Player(){
    this->playerID = 0;
    next=nullptr;
    for(int i=0;i<AMAZONSPERPLAYER;i++){
        aPtr[i]=nullptr;
    }
}



bool Player::addAmazonToPlayer(Amazon *aPtr){
    for(int i=0;i<AMAZONSPERPLAYER;i++){
        if(this->aPtr[i]!=nullptr){
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
    cout<<"These are player's "<<this->playerID<<" amazons: "<<endl;
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

