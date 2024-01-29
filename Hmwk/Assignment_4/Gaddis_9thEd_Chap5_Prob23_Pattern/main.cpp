/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 8:36 PM
 * Purpose: Display the triangle pattern
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
    int i,j;
    int number;
    
    //Initialize or input i.e. set variable values
    cin>>number;
    
    //Map inputs -> outputs

    
    //Increasing Pattern
    for (i=1;i<=number;++i) {
        for (j=0;j<i;++j) {
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    
    //Decreasing Pattern
    for (i=number;i>=1;--i) {
        for (j=0;j<i;++j) {
            cout<<"+";
        }
        if (i>1) {
            cout<<endl<<endl;;
            }
    }
    

    //Exit stage right or left!
    return 0;
}