/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 9, 2024, 4:17 PM
 * Purpose: Template used to start all projects
 */

//System Libraries
#include <iostream> //Input-Output Library
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here
const int numCard = 52;
const int strtCrd = 5;

int main(int argc, char** argv) {
       
    bool play = true;
    while (play) {
        cout << "Welcome to War!" << endl;
        cout << setw(9) << " *   *   " << setw(9) << " ***    " << setw(9) << "***** " << endl;
        cout << setw(9) << " *   *   " << setw(9) << " *   *   " << setw(9) << "*   * " << endl;
        cout << setw(9) << " *   *   " << setw(9) << " * * *   " << setw(9) << "***** " << endl;
        cout << setw(9) << " * * *   " << setw(9) << " *   *   " << setw(10) << "* *    " << endl;
        cout << setw(9) << "  * *    " << setw(9) << " *   *    " << setw(8) << "*   * " << endl;
        cout << "Press Enter to start...";
        cin.ignore();
    }
    //Initialize all variables
    
    //Process or Map Solutions
    
    //Display the output
    
    //Exit the Program
    return 0;
}

