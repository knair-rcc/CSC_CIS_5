/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 9, 2024, 4:17 PM
 * Purpose: Template used to start all projects
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int num; //Inputted number
    int sumPos; //Sum of positive numbers
    int sumNeg; //Sum of negative numbers including zero
    int sumTot; //Sum of all numbers
    int i;
    
    //Initialize or input i.e. set variable values
    sumPos=0;
    sumNeg=0;
    sumTot=0;
    
    //Map inputs -> outputs
    for (i=0; i<10; ++i) {
        cin>>num;
    
        sumTot+=num;
        if (num>0) {
            sumPos+=num;
        }
        else {
            sumNeg+=num;
        }
    }
    
    //Display the outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cout<<"Negative sum = "<<sumNeg<<endl;
    cout<<"Positive sum =  "<<sumPos<<endl;
    cout<<"Total sum    =   "<<sumTot;
            
    //Exit stage right or left!
    return 0;
}

