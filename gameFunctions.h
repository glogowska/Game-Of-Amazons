#include "boardManager.cpp"
//main loop of the game
int mainLoop(int stage);
////////////dodaj movy dla field, player, boardManagera
bool moveAmazon(int amazonID, int playerID);

//
bool placeAmazon(PlayersManager &PM, BoardManager &BM, int amazonID, int playerID, int row, int col);


//prints out the rules of the game, including the board fields symbols
void printRules();

void addCoins(PlayersManager &PM, BoardManager &BM, int playerID,int row, int col);