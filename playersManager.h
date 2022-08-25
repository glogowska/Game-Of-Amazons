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
bool placeAmazonPlayer(int playerID, int amazonID, int row, int col);

void printcheck();
//collecting points
bool collectCoins(int amount, int playerID);

int getPlayersCounter();
string getPlayerName(int playerID);
Player *&findPlayerID(int playerID);
};