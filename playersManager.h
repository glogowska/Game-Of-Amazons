#include "players.cpp"

class PlayersManager{
private:
Player* head=nullptr;
int playersCounter;

void increasePlayersCounter();

public:
PlayersManager();
bool addPlayer(int playerID);
void printPlayersList();
bool noFreeAmazons(int playerID);/////////
bool moveAmazonToField(int playerID, int amazonID, int row, int col);

int getPlayersCounter();
};