/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 17, 2024, 4:17 PM
 * Purpose: Find total price
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
    
    //Declare all variables
    float item1,item2,item3,item4,item5; //Prices of the five items
    float subTot; //Subtotal of the sale
    float taxPcnt; //Sales tax percentage
    float taxAmt; //Sales tax amount
    float total; //Total price
    
    //Initialize all variables
    item1=15.95;
    item2=24.95;
    item3=6.95;
    item4=12.95;
    item5=3.95;
    taxPcnt=.07;
                    
    //Process or Map Solutions
    subTot=item1+item2+item3+item4+item5;
    taxAmt=subTot*taxPcnt;
    total=subTot+taxAmt;
    
    //Display the output
    cout<<"Price of item 1: $"<<item1<<endl;
    cout<<"Price of item 1: $"<<item2<<endl;
    cout<<"Price of item 1: $"<<item3<<endl;
    cout<<"Price of item 1: $"<<item4<<endl;
    cout<<"Price of item 1: $"<<item5<<endl;
    cout<<"Subtotal: $"<<subTot<<endl;
    cout<<"Amount of sales tax: $"<<setprecision(2)<<fixed<<taxAmt<<endl;
    cout<<"Total: $"<<total<<endl;
        
    //Exit the Program
    return 0;
}

