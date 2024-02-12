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
    bool playAgn=true;
    while (playAgn) {
        //Set a random seed
        srand(static_cast<unsigned int>(time(0)));
        
        //Start game
            cout<<"Welcome to War!"<<endl;
            cout<<"Press Enter to start...";
            cin.ignore();  // Wait for Enter key
            cout<<"Good luck!"<<endl;
            
            float rCount=0;
            int p1Cards=5;
            int p2Cards=5;
            string fileName;
            fstream input;
            fileName="card.dat";
            input.open(fileName.c_str(),ios::in);
            
            
        //Main game loop
        bool conGame=true;
        while (conGame) {   
            //Declare all variables
            unsigned short vC1,vC2,vC3,vC4,vC5;
            unsigned short vC6,vC7,vC8,vC9,vC10;
            unsigned char nCards;
            int card;
            fstream input;
            string card1="",card2="",card3="",card4="",card5="";
            string card6="",card7="",card8="",card9="",card10=""; 
            string cardIn;
            string fileName;        

            //Initialize variables
            nCards=52;
            
            //Initialize file parameters
            fileName="card.dat";
            input.open(fileName.c_str(),ios::in);
            
            rCount++; //Round counter
            cout<<"Round "<<rCount<<"!"<<endl;
            
            //Unique Value for first 2 cards
            vC1=rand()%nCards+1;
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




            // Pull cards from the file for player 1             
            for (card=1;card<=nCards;card++) {                
                input>>cardIn;
                if (vC1==card) {
                    card1=cardIn;
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
            //Pull cards from the file for player 2
                if (vC6==card) {
                    card6=cardIn;
                }
                if (vC7==card) {
                    card7=cardIn;
                }        
                if (vC8==card) {
                    card8=cardIn;
                }
                if (vC9==card) {
                    card9=cardIn;
                }
                if (vC10==card) {
                    card10=cardIn;
                }
            }                               

            //Pause before pulling Player 1's cards
            cout << "Player 1, press Enter to draw...";
            cin.ignore();  // Wait for Enter key
            //Display Player 1's hand
            cout<<"Player 1: "<<endl
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

            //Pause before pulling Player 2's cards
            cout << "Player 2, press Enter to draw...";
            cin.ignore();  // Wait for Enter key

            //Display Player 2's hand
            cout<<"Player 2: "<<endl
                <<setw(3)<<vC6
                <<setw(3)<<vC7
                <<setw(3)<<vC8
                <<setw(3)<<vC9
                <<setw(3)<<vC10<<endl;
            cout<<setw(3)<<card6
                <<setw(3)<<card7
                <<setw(3)<<card8
                <<setw(3)<<card9
                <<setw(3)<<card10<<endl;

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


            /* Each player places THREE cards face down
             * A FOURTH card is placed face up
             * The player with the card faced up that is higher in value
             *     wins all the cards in the war
            */


            //Pull cards from the file for player 1 
            bool warRept=true;    
            while (warRept) {    

                cout<<"Ready for War? Press Enter to continue..."<<endl;
                cin.ignore();

                for (card=1;card<=nCards;card++) {                
                    input>>cardIn;
                    if (vC1==card) {
                        card1=cardIn;
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
                //Pull cards from the file for player 2    
                    if (vC5==card) {
                        card5=cardIn;
                    }            
                    if (vC6==card) {
                        card6=cardIn;
                    }
                    if (vC7==card) {
                        card7=cardIn;
                    }        
                    if (vC8==card) {
                        card8=cardIn;
                    }
                }

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
                cout<<"Player 1, press Enter to draw your fourth card face up..."<<endl;
                cin.ignore();                   
                cout<<"Player 1's face-up card: "<<wCard4<<endl<<endl;

                cout<<"Player 2, press Enter to draw your fourth card face up..."<<endl;
                cin.ignore();
                cout<<"Player 2's face-up card: "<<wCard8<<endl;

                //Compare the face-up cards for the war
                char wResult=(wCard4<wCard8)?'1':'2';

                //Display the result of the war
                if (wResult=='1') {
                    warRept=false;
                    cout<<"Player 1 wins the war!"<<endl;
                    p1Cards+=8; //Player 1 takes all the cards
                    p2Cards-=8; //Player 2 loses all the cards
                }
                else if (wResult=='2') {
                    warRept=false;
                    cout<<"Player 2 wins the war!"<<endl;
                    p2Cards+=8; //Player 2 takes all the cards
                    p1Cards-=8; //Player 1 loses all the cards
                }
                else {
                    cout<<"It's a tie again! Another war declared!"<<endl;
                    //Continue the war until there is a winner
                }
            }
        }
            
        //Exit the loop if necessary
        if (p1Cards==nCards||p2Cards==nCards) {
            conGame=false; //Game ends when one player has all the cards
            if (p1Cards==nCards) {
                cout<<"Player 1 wins the game!"<<endl;
            }
            else if (p2Cards==nCards) {
                cout<<"Player 2 wins the game!"<<endl;
            }
        }
    }       
             

        //Ask players for input if they want to play again
        cout<<"Do you want to play again? (1 for yes, 0 for no):";
        cin>>playAgn; //Input to play again
        
    
        //Clear the input
        cin.ignore();

        //Close the file
        input.close();
        
    }
    
    //Exit the Program
    return 0;
}

