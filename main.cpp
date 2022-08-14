#include "players.cpp"

int main(){
    //TESTING AMAZON CLASS
    //TEST 1.1 TESTING THE CONSTRUCTOR + PRINTING AMAZON'S INFO
    cout<<"TEST 1.1"<<endl;
    Amazon A1(1,1);
    A1.printAmazonInfo();

    //TEST1.2 ADDING AMAZONS AND CHECKING THEIR INFO
    cout<<"TEST 1.2"<<endl;
    Player P1;
    P1.addNextAmazonToPlayer();
    P1.addNextAmazonToPlayer();
    //P1.printPlayerInfo();

    P1.printPlayerInfo();

}