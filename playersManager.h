#include "players.cpp"

class PlayersManager{
private:
Player* head=nullptr;
int playersCounter;

void increasePlayersCounter();

public:
PlayersManager();
bool addPlayer(int playerID, string playerName);
void printPlayersList();
bool noFreeAmazons(int playerID);/////////
bool doesAmazonExist(int playerID,int amazonID);
bool moveAmazonToField(int playerID, int amazonID, int row, int col);
bool changeFieldAmazonPlayer(int playerID, int amazonID, int row, int col);

int getPlayersCounter();
};