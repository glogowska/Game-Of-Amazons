#include "testing.cpp"

//srand (time(NULL)); // to be continued !! - needed for the board randomisation method
int main(){
testing();
//mainLoop(0);    
}

int mainLoop(int stage){
    string responseString;
    int responseInt, responseInt2, responseInt3;
    BoardManager GAME_BM;
    PlayersManager GAME_PM;
    switch (stage)
    {
    //setting stage
    case 0:
        cout<<"WELCOME TO THE GAME OF AMAZONS!"<<endl;
    case 1:
        while(true){
            cout<<"Would you like to see the rules? Type 'yes' or 'no'. ";
            cin>>responseString;
            if(responseString == "yes"){
                printRules();
                break;
            }
            else if (responseString != "no" && responseString != "yes"){
                cout<<"Invalid response."<<endl;
            }
            else if (responseString == "no"){
                break;
            }
        }
    //setting stage
    case 2: 
        while(true){
            cout<<"How many players will be playing?"<<endl;
            cout<<"Type a number from 2-5."<<endl;
            cin>>responseInt;
            if(responseInt >=2 && responseInt <= 5){
                break;
            }
            else{
                cout<<"Invalid response.";
            }
        }
        for(int i = 1; i <= responseInt; i++){
            cout<<"What is the name of player "<<i<<"?: ";
            cin>>responseString;
            GAME_PM.addPlayer(i, responseString);
        }
        //GAME_PM.printPlayersList();
    case 3:
        GAME_BM.generateBoard(3,4);
        GAME_BM.printBoard();
        for(int p = 1; p <= responseInt; p++){
            cout<< "*CHECK HOW MANY PLAYERS*"<<responseInt<<endl;
            cout<<"Player "<<GAME_PM.getPlayerName(p)<<" picks places for amazons."<<endl;
            for(int a = 1; a <= AMAZONSPERPLAYER; a ++){
                cout<<"Amazon "<<a<<endl;
                cout<<"row: ";
                cin>>responseInt2;
                cout<<"column: ";
                cin>>responseInt3;
                placeAmazon(GAME_PM, GAME_BM, a, p, responseInt2, responseInt3);
                cout<<"checkpoint1"<<endl;
                GAME_BM.printBoard();

                //daj tu jedna wspolna funckje ktora bedzie dodawac amazonki do plaszy
            }
        }
        GAME_BM.printBoard();
        break;
        return 0;
        
    }
    return 0;
}