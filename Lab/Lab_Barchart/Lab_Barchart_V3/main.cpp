/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 18, 2024, 5:32 PM
 * Purpose: Create barchart according to input sales values
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
    int numStrs; //number of stores
    int sales[numStrs]; //size of the array
    int i;
    int j;
    
    //Initialize all variables
    numStrs=5;
    
    //Process or Map Solutions
    for (i=0;i<numStrs;++i) {
        cout<<"Enter today's sales for store "<<(i+1)<<": "<<endl;
        cin>>sales[i];
    }
    cout<<"Sales Barchart (Each * = $100)"<<endl;
    
    for (i=0;i<numStrs;++i) {
        cout<<endl;
        cout<<"Store "<< (i+1)<<": ";
        cout<<endl;
        
        for (j=0;j<sales[i]/100;++j) {
            cout<<'*';
        }
    }
    cout<<endl;
    
    
    //Display the output
    
    
    //Exit the Program
    return 0;
}

