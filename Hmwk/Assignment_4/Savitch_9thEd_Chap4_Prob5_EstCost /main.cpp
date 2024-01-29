/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 10:12 PM
 * Purpose: Determine the estimated cost
 *          of an item
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    char repeat;
    float yrAgoPr; //price a year ago
    float crntPr; //current price
    float infRate; //inflation rate
    float oneYr; //price in one year
    float twoYr; //price in two years
    
    do {    
        //Initialize all variables
        cin>>crntPr;
        cin>>yrAgoPr;

        //Process or Map Solutions
        infRate=((crntPr-yrAgoPr)/yrAgoPr)*100.0;
        oneYr=(crntPr*infRate/100.0)+crntPr;
        twoYr=(oneYr*infRate/100.0)+oneYr;

        //Display the output
        cout<<"Enter current price:"<<endl;
        cout<<"Enter year-ago price:"<<endl;
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<infRate<<"%"<<endl;
        cout<<endl;
        
        cout<<"Price in one year: $"<<oneYr<<endl;
        cout<<"Price in two year: $"<<twoYr<<endl;
        cout<<endl;

        cout<<"Again:"<<endl;
        cin>>repeat;
            if (repeat=='y'||repeat=='Y') {
                cout<<endl;
            }
    }
    
    while (repeat=='y'||repeat=='Y');
    //Exit stage right or left!
    return 0;
}