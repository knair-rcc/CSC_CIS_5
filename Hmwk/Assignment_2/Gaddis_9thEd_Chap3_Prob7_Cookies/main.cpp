/*
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 13, 2024, 4:34 PM
 * Purpose: To find total calories consumed
 *          after eating cookies
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set a random seed
    
    //Declare all variables
    int totCkie=40; //total amount of cookies in bag
    int serving; //amount of cookies in each serving
    int calServ=300; //amount of calories per serving
    int calCkie; //amount of calories per cookie
    int ckiesAte; //amount of cookies eaten
    int totCals; //total amount of calories consumed
    
    
    //Initialize or input i.e. set variable values
    cin>>ckiesAte;
    
    //Map inputs -> outputs
    serving=totCkie/10;
    calCkie=calServ/serving;
    totCals=ckiesAte*calCkie;
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cout<<"You consumed "<<totCals<<" calories.";
    
    //Exit stage right or left!
    return 0;
}

