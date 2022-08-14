#include "playersManager.h"

PlayersManager::PlayersManager(){
this->head = nullptr;
this->playersCounter = 0;
}

bool PlayersManager::addPlayer(int playerID){
    Player* current = this->head;
    if(this->getPlayersCounter()==8){
        return false;
    }
    if(this->head==nullptr){
        this->head = new Player(this->getPlayersCounter()+1);
        this->head->addAllAmazons();
        this->increasePlayersCounter();
        return true;
    }
    else{
        while(current->refNextPlayer()){
        current=current->refNextPlayer();
        }

        current->refNextPlayer() = new Player(this->getPlayersCounter()+1);
        current->refNextPlayer()->addAllAmazons();
        this->increasePlayersCounter();

        return true;
    }
    return false;
}

void PlayersManager::printPlayersList(){
    cout<<"LIST OF PLAYERS:"<<endl;
    Player* current = this->head;
    while(current){
        cout<<"Player "<<current->getplayerID()<<endl;//amazons??
        current= current->refNextPlayer();
    }
}

void PlayersManager::increasePlayersCounter(){
    this->playersCounter= this->playersCounter+1;
}
int PlayersManager::getPlayersCounter(){
    return this->playersCounter;
}