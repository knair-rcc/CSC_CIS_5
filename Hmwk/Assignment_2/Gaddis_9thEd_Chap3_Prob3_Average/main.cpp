/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 13, 2024, 4:00 PM
 * Purpose: Find Average of Five Test Scores
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float test1;
    float test2;
    float test3;
    float test4;
    float test5;
    float average;
    
    //Initialize or input i.e. set variable values
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //Map inputs -> outputs
    average=(test1+test2+test3+test4+test5)/5;
    
    //Display the outputs
    cout<<"Input 5 numbers to average."<<endl;
    cout<<"The average = "<<fixed<<setprecision(1)<<average;

    //Exit stage right or left!
    return 0;
}
