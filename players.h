#include "amazons.cpp"

const int AMAZONSPERPLAYER = 4;

class Player{
private:
int playerID; //unique player ID
int amazonCounter;
Player *next = nullptr;
Amazon *aPtr[AMAZONSPERPLAYER];

//Does not add amazons if amazonCounter exceeds AMAZONSPERPLAYER and returns false, otherwise true.
// bool addAmazonToPlayer(Amazon *aPtr);

public:
Player(int playerID);


bool addAmazonToPlayer(Amazon *aPtr);
bool addNextAmazonToPlayer();
bool addAllAmazons();
void printPlayerInfo();
void increaseAmazonCounter();

int getplayerID();
int getAmazonCounter();
Player *&refNextPlayer();

};

