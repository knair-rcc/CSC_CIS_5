/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 17, 2024, 6:12 PM
 * Purpose: List meal cost, tax amount, tip amount, and total bill
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
    //Set a random seed
    
    //Declare all variables
    float mlCost; //meal cost
    float taxPcnt; //Tax percent of the meal cost
    float taxAmt; //Tax amount
    float tipPcnt; //Tip percent of the meal cost
    float tipAmt; //Tip amount
    float totBill; //Total bill
    
    //Initialize all variables
    mlCost=88.67f;
    taxPcnt=0.0675f;
    tipPcnt=0.2f;
       
    //Process or Map Solutions
    taxAmt=mlCost*taxPcnt;
    tipAmt=mlCost*tipPcnt;
    totBill=mlCost+taxAmt+tipAmt;
    
    //Display the output
    cout<<"Meal cost: $"<<mlCost<<endl;
    cout<<"Tax amount: $"<<setprecision(2)<<fixed<<taxAmt<<endl;
    cout<<"Tip amount: $"<<tipAmt<<endl;
    cout<<"Total bill: $"<<totBill;
    
    //Exit the Program
    return 0;
}

