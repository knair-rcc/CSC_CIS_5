/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 9:45 PM
 * Purpose: Compute the rate of inflation
 *          for the past year
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all variables
    char repeat;
    float yrAgoPr; //price a year ago
    float crntPr; //current price
    float infRate; //inflation rate
    
    do {    
        //Initialize all variables
        cin>>crntPr;
        cin>>yrAgoPr;

        //Process or Map Solutions
        infRate=((crntPr-yrAgoPr)/yrAgoPr)*100.0;

        //Display the output
        cout<<"Enter current price:"<<endl;
        cout<<"Enter year-ago price:"<<endl;
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<infRate<<"%"<<endl;
        cout<<endl;

        cout<<"Again:"<<endl;
        cin>>repeat;
            if (repeat=='y'||repeat=='Y') {
                cout<<endl;
            }
    }
    
    while (repeat=='y'||repeat=='Y');
        
    
    
    //Exit the Program
    return 0;
}

