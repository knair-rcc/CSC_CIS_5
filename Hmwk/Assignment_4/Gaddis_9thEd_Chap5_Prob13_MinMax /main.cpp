/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 5:13 PM
 * Purpose: Display the largest and smallest
            integers
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
    int number; //inputted value
    int large; //largest integer
    int small; //smallest integer
    
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
    while (number!=-99) {
        cin>>number;
        
        if (number!=-99) {
        
            if (number>large) {
                large=number;
            }
            if (number<small) {
                small=number;
            }
        }
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<small<<endl;
    cout<<"Largest  number in the series is "<<large;

    //Exit stage right or left!
    return 0;
}