/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 17, 2024, 6:21 PM
 * Purpose: Find average
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
    int first,second,third,fourth,fifth; //variables that stores different values
    int sum; //the sum of the different values
    float average; //the average of the values given
    
    //Initialize all variables
    first=28;
    second=32;
    third=37;
    fourth=24;
    fifth=33;
    
    //Process or Map Solutions
    sum=first+second+third+fourth+fifth;
    average=sum/5;
    
    //Display the output
    cout<<"Average: "<<average;
    
    //Exit the Program
    return 0;
}

