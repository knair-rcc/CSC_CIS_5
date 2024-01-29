/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 2:19 PM
 * Purpose:  Sum the sequence
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
    int posNum; //positive number
    int i;
    int sum; 
    
    //Initialize or input i.e. set variable values
    cin>>posNum;
    sum=0;
    
    //Map inputs -> outputs
    

    //Display the outputs
    if (posNum>=0) {
        for (i=0;i<=posNum;++i) {
            sum+=i;
        }
    }
    
    cout<<"Sum = "<<sum;

    //Exit stage right or left!
    return 0;
}