/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 9:05 PM
 * Purpose: Compute the number of miles
 *          per gallons
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    const float litrGal=0.264179; //the amount of gallons per liter
    float milsGal; //the amount of miles  per gallon
    float liters; //amount of liters
    float miles; //amount of miles
    char repeat; //confirmation whether to repeat
    
    //Initialize or input i.e. set variable values
    
    do {
        cin>>liters;
        cin>>miles;
        
        //Map inputs -> outputs
        milsGal=miles/(liters*litrGal);
        
        //Display the outputs
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cout<<"miles per gallon:"<<endl;
        cout<<setprecision(2)<<fixed<<milsGal<<endl;
        
        cout << "Again:"<<endl;
        cin>>repeat;
        if (repeat=='y'||repeat=='Y') {
            cout<<endl;
        }
    }
        
    while (repeat=='y'||repeat=='Y');
        

    //Exit stage right or left!
    return 0;
}