#include "gameFunctions.cpp"

int testing(){
    // //TESTING AMAZON CLASS:
    // //TEST 1.1 TESTING THE CONSTRUCTOR + PRINTING AMAZON'S INFO
    // {
    //     cout<<"TEST 1.1"<<endl;
    //     Amazon A1(1,1);
    //     A1.printAmazonInfo();
    // }
    // //TEST1.2 ADDING AMAZONS AND CHECKING THEIR INFO
    // cout<<"TEST 1.2"<<endl;
    // {
    //     Player P1(1,"andre");
    //     P1.addNextAmazonToPlayer();
    //     P1.addNextAmazonToPlayer();
    //     //P1.printPlayerInfo();

    //     P1.printPlayerInfo();
    // }
    // //TEST 1.3 ADDING A PLAYER to head and printing the data
    // {
    //     cout<<"TEST 1.3"<<endl;
    //     PlayersManager PM1;
    //     PM1.addPlayer(1,"szyms");
        
    //     PM1.printPlayersList();
    // }
    // //TEST 1.4 ADDING MULTIPLE PLAYERS TO A LIST AND PRINTING THE DATA
    // {
    //     cout<<"TEST 1.4"<<endl;
    //     PlayersManager PM1;
    //     PM1.addPlayer(1, "imie1");
    //     PM1.addPlayer(2, "imie2");
    //     PM1.addPlayer(3, "imie3");
    //     PM1.printPlayersList();
    // }
    // //TEST 1.5 BOARD GENERATION
    // {
    //     cout<<"TEST 1.5"<<endl;
    //     BoardManager BM1;
    //     BM1.generateBoard(3,4);
    //     //BM1.printFields();
        
    //     BM1.printBoard();
    //     BM1.printBoardManager();
        
    // }
    // //TESTING boardManager class:
    // //TEST 3.1
    // {
    //     cout<<"TEST 3.1"<<endl;
    //     BoardManager BM1;
    //     BM1.generateBoard(5,5);
    // }

    // //TESTING gameFunctions.cpp:
    // //TEST 6.1
    // {
    //     cout<<"TEST 6.1"<<endl;
    //     BoardManager BM1;
    //     PlayersManager PM1;
    //     PM1.addPlayer(1,"andre");
    //     PM1.addPlayer(2,"szdla");
    //     //PM1.printPlayersList();
    //     BM1.generateBoard(6,6);
    //     BM1.printBoard();
    //     placeAmazon(PM1,BM1,1,1,1,1);
    //     BM1.printBoard();
    // }

    //TESTS 1 - TESTING AMAZON CLASS:
    {
        //TEST 1.1 - testing the constructor of the amazon and printing the info of the object
        //testing both printing methods
        {
        cout<<"TEST 1.1"<<endl;
        Amazon A1(1,1);
        Amazon A2(0,3);

        A1.printAmazonInfo();
        A2.printAmazonInfoBasic();
        }

        //TEST 1.2 - testing method freeAmazon() - first setting amazon to be free (row and col set to 0)
        //secondly setting row and col of the amazons to >0 and checking if the function returns false
        //
        {
        cout<<"TEST 1.2"<<endl;
        Amazon A1(0,0);
        Amazon A2(1,0);
        Amazon A3(1,1);
        try{
            if(A1.freeAmazon()==true && )

        }
        
        }

        {
        cout<<"TEST 1.3"<<endl;
        }



    }

    //TEST 2 - TESTING PLAYER CLASS
    
    return 0;
}