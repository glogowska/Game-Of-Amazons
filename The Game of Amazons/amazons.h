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

    public:
    Amazon(int amazonID, int playerID);

    void printAmazonInfo();
    void printAmazonInfoBasic();

    //getters
    int getAmazonID();
    int getRow();
    int getColumn();
    int getPlayerID();

    //setters
    void setRow(int row);
    void setCol(int col);
};