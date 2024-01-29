/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 13, 2024, 5:08 PM
 * Purpose: Find minimum insurance for house
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int repCost; //replacement cost of building
    int minIns; //minimum amount of insurance
    
    //Initialize or input i.e. set variable values
    cin>>repCost;
    
    //Map inputs -> outputs
    minIns=repCost*0.8;
    
    //Display the outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cout<<"You need $"<<minIns<<" of insurance.";
    
    //Exit stage right or left!
    return 0;
}

