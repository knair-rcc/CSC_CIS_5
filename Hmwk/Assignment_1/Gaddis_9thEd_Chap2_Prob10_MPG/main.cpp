/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 17, 2024, 6:34 PM
 * Purpose: Calculate miles per gallon
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all variables
    int gallons; //number of gallons in car
    int miles; //number of miles driven before having to refuel
    int mpg; //miles per gallon
    
    //Initialize all variables
    gallons=15;
    miles=375;
    
    //Process or Map Solutions
    mpg=miles/gallons;
    
    //Display the output
    cout<<"MPG = "<<mpg;
    
    //Exit the Program
    return 0;
}

