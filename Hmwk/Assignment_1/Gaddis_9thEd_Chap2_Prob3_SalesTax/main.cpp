/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 17, 2024, 5:10 PM
 * Purpose: Find sales tax of purchase
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
    float stSales; //State sales tax
    float ctSales;//County sales tax
    int purchas; //Purchase price
    float totSale; //Total sales tax
    
    //Initialize all variables
    stSales=.04f;
    ctSales=.02f;
    purchas=95;
    
    //Process or Map Solutions
    totSale=purchas*stSales+purchas*ctSales;
    
    //Display the output
    cout<<"The total sales tax on a $95 purchase is $"<<totSale<<".";
    
    //Exit the Program
    return 0;
}

