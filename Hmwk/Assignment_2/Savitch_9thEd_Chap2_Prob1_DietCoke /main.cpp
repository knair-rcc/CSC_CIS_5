/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 9, 2024, 4:17 PM
 * Purpose: Program to calculate the limit
 *          of soda pop consumption
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
    //Set the random number seed
    
    //Declare Variables
    const float kllMice=5.0f; //amount of artificial sweetener needed to kill a mouse in grams
    const float mMouse=35.0f; //mass of the mouse in grams
    float wDieter; //weight of the dieter
    const float mSoda=350.0f; //mass of soda can
    const float swtnr=0.001f; //1/10th of 1%
    
    const float kllMan=5.0f; //lethal dose for human in grams
    const float mHuman=453.592f; //amount of grams in one pound
    float kllDter; //lethal dose for dieter in grams
    int sCans; //number of cans the user can consume before dying
    
    
    //Initialize or input i.e. set variable values
    cin>>wDieter;
    wDieter*=mHuman;
    
    //Map inputs -> outputs
    kllDter=(kllMan/mMouse)*wDieter;
    
    sCans=(kllDter/(mSoda*swtnr));
    
    
    //Display the outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<sCans<<" cans";

    //Exit stage right or left!
    return 0;
}

