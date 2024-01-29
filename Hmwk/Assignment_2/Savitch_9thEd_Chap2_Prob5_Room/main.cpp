/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 9, 2024, 4:17 PM
 * Purpose: Template used to start all projects
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
    
    //Declare Variables
    int maxCap; //Maximum room capacity
    int pplAtnd; //Number of people in attendance
    int extPpl; //The amount of people that can be added to match the maximum capacity
    int pplExcl; //The amount of people that must be excluded to match the maximum capacity
      
    //Initialize or input i.e. set variable values
    cin>>maxCap;
    cin>>pplAtnd;
    
    //Map inputs -> outputs
        
    //Display the outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    
    if (pplAtnd<=maxCap) {
        extPpl=maxCap-pplAtnd;
        cout<<"Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<extPpl<<" will be allowed without violation.";
    }
    else {
        pplExcl=pplAtnd-maxCap;
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<pplExcl<<" to avoid fire violation.";
    }
    
    //Exit stage right or left!
    return 0;
}

