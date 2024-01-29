/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 17, 2024, 6:24 PM
 * Purpose: Find the incremental increases of
 *          the ocean's level as instructed
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
    float ocnRsng; //rate at which the ocean's level is currently rising
    float fiveYrs; //ocean's level in 5 years
    float sevnYrs; //ocean's level in 7 years
    float tenYrs; //ocean's level in 10 years
    
    //Initialize all variables
    ocnRsng=1.5f;
    
    //Process or Map Solutions
    fiveYrs=ocnRsng*5;
    sevnYrs=ocnRsng*7;
    tenYrs=ocnRsng*10;
    
    //Display the output
    cout<<"The number of millimeters higher than the current level that the ocean’s level will be in 5 years: "<<fiveYrs<<endl;
    cout<<"The number of millimeters higher than the current level that the ocean’s level will be in 7 years: "<<sevnYrs<<endl;
    cout<<"The number of millimeters higher than the current level that the ocean’s level will be in 10 years: "<<tenYrs;
    
    //Exit the Program
    return 0;
}

