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
    ~Amazon();

    //prints info about the amazon (playerID and amazonID)
    void printAmazonInfo();

    //prints info about the amazon (only amazonID)
    void printAmazonInfoBasic();

    //returns true is the amazon is not on the board yet (if row and col set to 0), and false otherwise
    bool freeAmazon();

    //getters
    int getAmazonID();
    int getRow();
    int getCol();
    int getPlayerID();
    bool getKilled();
    bool getInMud();

    //setters
    void setRow(int row);
    void setCol(int col);

    //sets 0 respectively if the attributes are to be true or false
    void setKilled(bool killed);
    void setInMud(bool inMud);
};