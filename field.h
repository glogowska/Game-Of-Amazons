#include "playersManager.cpp"

class Field{
private:
int row;
int col;
int artifact;
int coins;
int amazonID;
int playerID;
Field *nextField;


public:
Field(int row, int col);

int getRow();
int getCol();
int getArtifact();
int getCoins();

Field *&refNextField();
};