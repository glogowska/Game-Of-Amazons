#include "field.cpp"

class BoardManager{
    private:
    Field* head;
    int rows;
    int cols;

    public:
    BoardManager();
    bool addField(int row, int col);
    bool generateBoard(int rows,int cols);
    bool randomizeBoard();
    void printBoard();
    bool doesFieldExist(int row, int col);

    bool moveAmazonToField(int playerID, int amazonID,int row, int col);

};