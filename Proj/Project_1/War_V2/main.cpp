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
    unsigned char nCards;
    fstream input;
    string card1,card2,card3,card4,card5;
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
    
    // Pull cards from the file       
    int card;
    for (card=1;card<=nCards;card++) {
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
        
    
    //Process or Map Solutions
    
    //Display the output
    
    //Exit the Program
    return 0;
}

