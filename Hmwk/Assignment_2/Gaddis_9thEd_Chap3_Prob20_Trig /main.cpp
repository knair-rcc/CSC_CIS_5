/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 9, 2024, 4:17 PM
 * Purpose: Calculate trig functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle; //angle entered in degrees
    float angRad; //angle convered to radians
    float sinX; //sine of angRad
    float cosX; //cosine of angRad
    float tanX; //tangent of angRad
    
    
    //Initialize or input i.e. set variable values
    cin>>angle;
    
    //Map inputs -> outputs
    angRad=angle*(M_PI/180.0);
    sinX=sin(angRad);
    cosX=cos(angRad);
    tanX=tan(angRad);
    
    //Display the outputs
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cout<<"sin("<<angle<<") = "<<setprecision(4)<<sinX<<endl;
    cout<<"cos("<<angle<<") = "<<setprecision(4)<<cosX<<endl;
    cout<<"tan("<<angle<<") = "<<fixed<<setprecision(4)<<tanX;
    
    //Exit stage right or left!
    return 0;
}

