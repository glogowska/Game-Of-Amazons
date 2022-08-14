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

int getPlayersCounter();
};