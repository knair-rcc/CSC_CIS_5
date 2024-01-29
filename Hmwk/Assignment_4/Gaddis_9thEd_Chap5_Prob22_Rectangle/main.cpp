/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 8:22 PM
 * Purpose: Create rectangle with same
            number of rows and columns
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
    int sideLen; //Side length of the rectangle
    char letters; //variable of either X or Y
    int i,j;
    int limit;
    
    //Initialize or input i.e. set variable values
    cin>>sideLen; 
    cin>>letters;
    
    //Map inputs -> outputs
    if (sideLen<15) {
    
        for (i=0;i<sideLen;++i) {
            for (j=0;j<sideLen;++j) {
                cout<<letters;
            }
            if (i<sideLen-1) {
                cout<<endl;
            }
        }
    }
            
    //Display the outputs

    //Exit stage right or left!
    return 0;
}