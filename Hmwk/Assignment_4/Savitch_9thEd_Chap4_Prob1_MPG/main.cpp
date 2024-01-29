/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 20, 2024, 9:28 PM
 * Purpose: Compute the number of miles
 *          per gallons for two cars
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
    float milGal1; //the amount of miles per gallon for car 1
    float milGal2; //the amount of miles per gallon for car 2
    float liters1; //amount of liters for car 1
    float miles1; //amount of miles for car 1
    float liters2; //amount of liters for car 2
    float miles2; //amount of miles for car 2
    char repeat; //confirmation whether to repeat
    
    //Initialize or input i.e. set variable values
    
    do {
        cin>>liters1;
        cin>>miles1;
        cin>>liters2;
        cin>>miles2;
        
        //Map inputs -> outputs
        milGal1=miles1/(liters1*litrGal);
        milGal2=miles2/(liters2*litrGal);
        
        //Display the outputs
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<milGal1<<endl;
        cout<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cout<<"miles per gallon: "<<setprecision(2)<<fixed<<milGal2<<endl;
        cout<<endl;
        
        if (milGal1>milGal2) {
            cout<<"Car 1 is more fuel efficient"<<endl;
            cout<<endl;
        }
        else if (milGal2>milGal1) {
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;
        }
        
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