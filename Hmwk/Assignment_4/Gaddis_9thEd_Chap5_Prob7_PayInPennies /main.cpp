/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 5:33 PM
 * Purpose: Find a person's earnings as
            pennies are added to the 
            salary
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
    
    //Declare Variables
    int numDays; //Number of days
    float totErng; //Total earnings
    int i;
    
    //Initialize or input i.e. set variable values
    totErng=0.01f;
    
    //Map inputs -> outputs
    while (numDays<1) {
        cin>>numDays;
    }
    
        for (i=2;i<=numDays;++i) {
            totErng+=0.01*(1<<(i-1));
        }
    
    
    //Display the outputs
    cout<<"Pay = $"<<setprecision(2)<<fixed<<totErng;
    

    //Exit stage right or left!
    return 0;
}