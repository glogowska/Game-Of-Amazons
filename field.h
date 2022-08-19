#include "playersManager.cpp"

class Field{
private:
int row;
int col;
int special; // 0 - normal field, 1 - mud, 2 - power potion, 3 - poisoned arrow,
int coins; //amount of money on this field
int amazonID; //0 - no amazon, ID - 1-4 amazon of a certain player
int playerID;
int arrow; //0- no arrow, 1 - arrow
Field *nextField;


public:
Field(int row, int col);

bool freeField();

int getRow();
int getCol();
int getSpecial();
int getCoins();
int getAmazonID();
int getPlayerID();
int getArrow();

void setSpecial(int num);
void setCoins(int num);
void setAmazonID(int num);
void setPlayerID(int num);

Field *&refNextField();
};