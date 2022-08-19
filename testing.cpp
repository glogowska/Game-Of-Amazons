#include "gameFunctions.cpp"

int testing(){
    //TESTING AMAZON CLASS
    //TEST 1.1 TESTING THE CONSTRUCTOR + PRINTING AMAZON'S INFO
    {
        cout<<"TEST 1.1"<<endl;
        Amazon A1(1,1);
        A1.printAmazonInfo();
    }
    //TEST1.2 ADDING AMAZONS AND CHECKING THEIR INFO
    cout<<"TEST 1.2"<<endl;
    {
        Player P1(1,"andre");
        P1.addNextAmazonToPlayer();
        P1.addNextAmazonToPlayer();
        //P1.printPlayerInfo();

        P1.printPlayerInfo();
    }
    //TEST 1.3 ADDING A PLAYER to head and printing the data
    {
        cout<<"TEST 1.3"<<endl;
        PlayersManager PM1;
        PM1.addPlayer(1,"szyms");
        
        PM1.printPlayersList();
    }
    //TEST 1.4 ADDING MULTIPLE PLAYERS TO A LIST AND PRINTING THE DATA
    {
        cout<<"TEST 1.4"<<endl;
        PlayersManager PM1;
        PM1.addPlayer(1, "imie1");
        PM1.addPlayer(2, "imie2");
        PM1.addPlayer(3, "imie3");
        PM1.printPlayersList();
    }
    //TEST 1.5 BOARD GENERATION
    {
        cout<<"TEST 1.5"<<endl;
        BoardManager BM1;
        BM1.generateBoard(3,4);
        //BM1.printFields();
        
        BM1.printBoard();
        BM1.printBoardManager();
        
    }
    return 0;
}