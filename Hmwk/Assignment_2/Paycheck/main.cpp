/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 13, 2024, 6:11 PM
 * Purpose: Calculate gross paycheck
 */

//System Libraries
#include <iostream> //Input-Output Library
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
    int payRate; //pay rate in dollars per hour
    int hours; //number of hours worked
    float gPay; //gross pay in dollars
    
    //Initialize or input i.e. set variable values
    cin>>payRate;
    cin>>hours;
    
    //Map inputs -> outputs
    if (hours<=40) {
        gPay=payRate*hours;
    }
    else {
        gPay=(payRate*40)+(payRate*2*(hours - 40));
    }            
    
    //Display the outputs
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cout<<"Paycheck = $ "<<setprecision(2)<<fixed<<gPay;

    //Exit stage right or left!
    return 0;
}

