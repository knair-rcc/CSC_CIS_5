/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 30, 2024, 10:13 PM
 * Purpose: Simulate card game "War"
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all variables
    unsigned short vC1,vC2,vC3,vC4,vC5;
    unsigned short vC6,vC7,vC8,vC9,vC10;
    unsigned char nCards;
    fstream input;
    string card1,card2,card3,card4,card5;
    string card6,card7,card8,card9,card10;
    string fileName;
    
    //Initialize file parameters
    fileName="card.dat";
    input.open(fileName.c_str(),ios::in);
    
    //Initialize variables
    nCards=52;
    vC1=rand()%nCards+1;
    
    //Unique Value for first 2 cards
    do {
        vC2=rand()%nCards+1;
    }
    while(vC1==vC2);
    //Order the first 2
    if (vC1>vC2) {
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Unique Value for Card 3
    do {
        vC3=rand()%nCards+1;
    }
    while(vC1==vC3||vC2==vC3);
    //Order the first 3
    if (vC2>vC3) {
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if (vC1>vC2) {
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Unique Value for Card 4
    do {
        vC4=rand()%nCards+1;
    }
    while(vC1==vC4||vC2==vC4||vC3==vC4);
    //Order the first 4
    if (vC3>vC4) {
        unsigned short temp=vC3;
        vC3=vC4;
        vC4=temp;
    }
    if (vC2>vC3) {
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if (vC1>vC2) {
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    //Unique Value for Card 5
    do {
        vC5=rand()%nCards+1;
    }
    while(vC1==vC5||vC2==vC5||vC3==vC5||vC4==vC5);
    //Order the first 5
    if (vC4>vC5) {
        unsigned short temp=vC4;
        vC4=vC5;
        vC5=temp;
    }
    if (vC3>vC4) {
        unsigned short temp=vC3;
        vC3=vC4;
        vC4=temp;
    }
    if (vC2>vC3) {
        unsigned short temp=vC2;
        vC2=vC3;
        vC3=temp;
    }
    if (vC1>vC2) {
        unsigned short temp=vC1;
        vC1=vC2;
        vC2=temp;
    }
    
    
    //Player 2    
    //Unique Value for first 2 cards
    vC6=rand()%nCards+1;
    do {
        vC7=rand()%nCards+1;
    }
    while (vC6==vC7);

    // Order the first 2
    if (vC6>vC7) {
        unsigned short temp=vC6;
        vC6=vC7;
        vC7=temp;
    }

    // Unique Value for Card 3
    do {
        vC8=rand()%nCards+1;
    }
    while (vC6==vC8||vC7==vC8);

    // Order the first 3
    if (vC7>vC8) {
        unsigned short temp=vC7;
        vC7=vC8;
        vC8=temp;
    }
    if (vC6>vC7) {
        unsigned short temp=vC6;
        vC6=vC7;
        vC7=temp;
    }

    // Unique Value for Card 4
    do {
        vC9=rand()%nCards+1;
    }
    while (vC6==vC9||vC7==vC9||vC8==vC9);

    // Order the first 4
    if (vC8>vC9) {
        unsigned short temp=vC8;
        vC8=vC9;
        vC9=temp;
    }
    if (vC7>vC8) {
        unsigned short temp=vC7;
        vC7=vC8;
        vC8=temp;
    }
    if (vC6>vC7) {
        unsigned short temp=vC6;
        vC6=vC7;
        vC7=temp;
    }

    // Unique Value for Card 5
    do {
        vC10=rand()%nCards+1;
    }
    while (vC6==vC10||vC7==vC10||vC8==vC10||vC9==vC10);

    // Order the first 5
    if (vC9>vC10) {
        unsigned short temp=vC9;
        vC9=vC10;
        vC10=temp;
    }
    if (vC8>vC9) {
        unsigned short temp=vC8;
        vC8=vC9;
        vC9=temp;
    }
    if (vC7>vC8) {
        unsigned short temp=vC7;
        vC7=vC8;
        vC8=temp;
    }
    if (vC6>vC7) {
        unsigned short temp=vC6;
        vC6=vC7;
        vC7=temp;
    }
    
    //Player 1 and Player 2 card counters
    int p1Cards=5;
    int p2Cards=5;
    
    //Main game loop
    while (p1Cards>0&&p2Cards>0) {
        
    
        // Pull cards from the file for player 1      
        int card;
        for (int card=1;card<=nCards;card++) {
            string cardIn;
            input>>cardIn;
            if (vC1==card) {
                card1 = cardIn;
            }
            if (vC2==card) {
                card2=cardIn;
            }        
            if (vC3==card) {
                card3=cardIn;
            }
            if (vC4==card) {
                card4=cardIn;
            }
            if (vC5==card) {
                card5=cardIn;
            }
        }
    
    
        //Pull cards from the file for player 2
        int card;
        for (card=1;card<=nCards;card++) {
            string cardIn;
            input>>cardIn;
            if (vC6==card) {
                card1 = cardIn;
            }
            if (vC7==card) {
                card2=cardIn;
            }        
            if (vC8==card) {
                card3=cardIn;
            }
            if (vC9==card) {
                card4=cardIn;
            }
            if (vC10==card) {
                card5=cardIn;
            }
        }
        
        //Display Player 1's hand
        cout<<"Player 1: ";
            <<setw(3)<<vC1
            <<setw(3)<<vC2
            <<setw(3)<<vC3
            <<setw(3)<<vC4
            <<setw(3)<<vC5<<endl;
        cout<<setw(3)<<card1
            <<setw(3)<<card2
            <<setw(3)<<card3
            <<setw(3)<<card4
            <<setw(3)<<card5<<endl;
        
        //Display Player 2's hand
        cout<<"Player 2: ";
            <<setw(3)<<vC6
            <<setw(3)<<vC7
            <<setw(3)<<vC8
            <<setw(3)<<vC9
            <<setw(3)<<vC10<<endl;
        cout<<setw(3)<<card1
            <<setw(3)<<card2
            <<setw(3)<<card3
            <<setw(3)<<card4
            <<setw(3)<<card5<<endl;
        
        //Compare player hands
        char p1Rank1=card1.at(1);
        char p1Rank2=card2.at(1);
        char p1Rank3=card3.at(1);
        char p1Rank4=card4.at(1);
        char p1Rank5=card5.at(1);

        char p2Rank1=card6.at(1);
        char p2Rank2=card7.at(1);
        char p2Rank3=card8.at(1);
        char p2Rank4=card9.at(1);
        char p2Rank5=card10.at(1);
        
        int result=0; //Set as Default: Tie between players
        if (p1Rank1>p2Rank1) {
            result=1; //Player 1 wins
        }
        else if (p1Rank1<p2Rank1) {
            result=2; //Player 2 wins
        }
        
        //Display result        
        if (result==1) {
            cout<<"Player 1 wins the round!"<<endl;
            p1Cards+=2; //Player 1 takes both cards
            p2Cards-=2; //Player 2 loses both cards
        }
        else if (result==2) {
            cout<<"Player 2 wins the round!"<<endl;
            p2Cards+=2; //Player 2 takes both cards
            p1Cards-=2; //Player 1 loses both cards
        }
        else {
            //It's a tie, DECLARE WAR!!!
            cout<<"It's a tie! War declared!"<<endl;            
        }
        
        
        /* Each player places three cards face down
         * A fourth card is placed face up
         * The player with the card faced up that is higher in value
         *     wins all the cards in the war
        */
        
        
        //Player 1's cards for the war
        char wCard1=card1.at(1);
        char wCard2=card2.at(1);
        char wCard3=card3.at(1);
        char wCard4=card4.at(1);
                
        //Player 2's cards for the war
        char wCard5=card5.at(1);
        char wCard6=card6.at(1);
        char wCard7=card7.at(1);
        char wCard8=card8.at(1);
        
        
        //Display faced up cards for the war
        cout<<"Player 1's face-up card: "<<wCard4<<endl;
        cout<<"Player 2's face-up card: "<<wCard8<<endl;
        
        //Compare the face-up cards for the war
        char wResult=(wCard4>wCard8)?'1':'2';
        
        //Display the result of the war
        if (wResult=='1') {
            cout<<"Player 1 wins the war!"<<endl;
            p1Cards+=8; //Player 1 takes all the cards
            p2Cards-=8; //Player 2 loses all the cards
        }
        else if (wResult=='2') {
            p2Cards+=8; //Player 2 takes all the cards
            p1Cards-=8; //Player 1 loses all the cards
        }
        else {
            cout<<"It's a tie again! Another war declared!"<<endl;
        }
        
    }
        
    
    //Process or Map Solutions
    
    //Display the output
    
    //Exit the Program
    return 0;
}

