#include "field.cpp"
#include <stdio.h>      /* NULL */
#include <cstdlib>   /* srand, rand */
#include <time.h>       /* time */

class BoardManager{
    private:
    Field* head;
    int rows;
    int cols;
    int roundsPlayed;
    int playersOnBoard;
    //friend class PlayersManager; /// check if the placement is correct

    void setRows(int rows);
    void setCols(int cols);

    public:
    BoardManager();
    bool addField(int row, int col);
    bool generateBoard(int rows,int cols);
    bool randomizeBoard(int rows, int cols);
    void printFields();
    void printBoard();
    bool doesFieldExist(int row, int col);
    bool moveAmazonToField(int playerID, int amazonID,int row, int col);
    void printBoardManager();
    bool isField(int row, int col);

    //
    bool placeAmazon(int row, int col, int playerID, int amazonID);

    
    void increasePlayersOnBoardCount();
    void increaseRounds();

    //clearing a field from coins and specials
    void clearFieldSpecialCoins(int row, int col);
    bool clearFieldAmazonPlayer(int playerID, int amazonID);

    int getCoins(int row, int col);
    int getRowAmazon(int playerID, int amazonID);
    int getColAmazon(int playerID, int amazonID);

    Field *&findFieldRowCol(int row, int col);
    Field *&findFieldAmazonPlayer(int playerID, int amazonID);

};