/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 17, 2024, 6:40 PM
 * Purpose: Find number of acres according to square foot
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
    int oneAcre; //Amount of feet in one acre
    int sqFeet; //Square feet given
    int numAcre; //Number of acres according to square feet given
    
    //Initialize all variables
    oneAcre=43560;
    sqFeet=391876;
    
    //Process or Map Solutions
    numAcre=sqFeet/oneAcre;
   
    //Display the output
    cout<<"There are "<<numAcre<<" acres in a tract of land with "<<sqFeet<<" square feet."<<endl;
    
    //Exit the Program
    return 0;
}

