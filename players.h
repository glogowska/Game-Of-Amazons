#include "amazons.cpp"
#include <string>
#include <cstring>

const int AMAZONSPERPLAYER = 3;

class Player{
private:
int playerID; //unique player ID
string playerName;
int amazonCounter;
Player *next = nullptr;
Amazon *aPtr[AMAZONSPERPLAYER];

//Does not add amazons if amazonCounter exceeds AMAZONSPERPLAYER and returns false, otherwise true.
// bool addAmazonToPlayer(Amazon *aPtr);

public:
Player(int playerID, string playerName);


bool addAmazonToPlayer(Amazon *aPtr);
bool addNextAmazonToPlayer();
bool addAllAmazons();
void printPlayerInfo();
void increaseAmazonCounter();

//returns id of a free amazon or if all amazons are already on some fields on the board, the method
//returns 0
int freeAmazon();

int getplayerID();
int getAmazonCounter();
Player *&refNextPlayer();
Amazon *&getAmazon(int amazonID);

};

