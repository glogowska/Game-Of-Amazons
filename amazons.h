#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Amazon{
    private:
    int amazonID;
    int row;
    int col;
    int playerID;
    bool killed;
    bool inMud;

    public:
    Amazon(int amazonID, int playerID);

    void printAmazonInfo();
    void printAmazonInfoBasic();

    //returns true is the amazon is not on the board yet, and false otherwise
    bool freeAmazon();

    //getters
    int getAmazonID();
    int getRow();
    int getColumn();
    int getPlayerID();
    bool getKilled();
    bool getInMud();

    //setters
    void setRow(int row);
    void setCol(int col);
};