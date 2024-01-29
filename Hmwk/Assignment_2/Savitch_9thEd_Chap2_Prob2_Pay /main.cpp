/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 13, 2024, 9:23 PM
 * Purpose: Find new salary based on given information
 */

//System Libraries
#include <iostream>
#include <iomanip>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float prevSal; //previous annual salary
    float retrPay; //amount of retroactive pay due the employee
    float newySal; //the new annual salary
    float newmSal; //the new monthly salary
    const float payInc=7.6f;
    const int months=6;
    
    //Initialize or input i.e. set variable values
    cin>>prevSal;
    
    //Map inputs -> outputs
    retrPay=((prevSal*payInc)/100)*(months/12.0);
    
    newySal=prevSal+retrPay;
    
    newmSal=newySal/12.0;
    
            
    //Display the outputs
    cout<<"Input previous annual salary."<<endl;
    cout<<"Retroactive pay    = $  "<<setprecision(2)<<fixed<<retrPay<<endl;
    cout<<"New annual salary  = $"<<setprecision(2)<<newySal<<endl;
    cout<<"New monthly salary = $ "<<setprecision(2)<<newmSal;
   
    return 0;
}

