/*
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 9, 2024, 4:17 PM
 * Purpose: Template used to start all projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float params1; //first parameter
    float params2; //second parameter
    float params3; //third parameter
    float max2; //maximum of first two parameters
    float max3; //maximum of all three parameters
    
    
    //Initialize or input i.e. set variable values
    cin>>params1;
    cin>>params2;
    cin>>params3;
    
    //Process or map the outputs
    max2=(params1>params2)?params1:params2;
    max3=(max2>params3)?max2:params3;
    
    //Display the outputs
    cout<<"Enter first number:"<<endl;
    cout<<endl;
    cout<<"Enter Second number:"<<endl;
    cout<<endl;
    cout<<"Enter third number:"<<endl;
    cout<<endl;
    
    cout<<"Largest number from two parameter function:"<<endl;
    cout<<setprecision(2)<<fixed<<max2<<endl;
    cout<<endl;
    
    cout<<"Largest number from three parameter function:"<<endl;
    cout<<max3<<endl;
    
    //Exit stage right or left!
    return 0;
}

