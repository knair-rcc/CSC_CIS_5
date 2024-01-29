/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 13, 2024, 5:17 PM
 * Purpose: Convert Fahrenheit temps to
 *          Celsius temps
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float fTemp; //Fahrenheit temperature
    float cTemp; //Celsius temperature
    
    //Initialize or input i.e. set variable values
    cin>>fTemp;
    
    //Map inputs -> outputs
    cTemp=(5.0/9.0)*(fTemp-32);
    
    //Display the outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cout<<fixed<<setprecision(1)<<fTemp<<" Degrees Fahrenheit = "<<cTemp<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}

