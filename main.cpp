#include "testing.cpp"

//srand (time(NULL)); // to be continued !! - needed for the board randomisation method
int main(){
testing();
//mainLoop(0);    
}

int mainLoop(int stage){
    string responseString;
    int responseInt;
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

        break;
        return 0;
        
    }
}