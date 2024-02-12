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
void initDeck(vector<string>& deck);
void shuffle(vector<string>& deck);

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
        
        vector<string> deck;
    }
    //Initialize all variables
    
    //Process or Map Solutions
    
    //Display the output
    
    //Exit the Program
    return 0;
}

void initDeck(vector<string>& deck) {
    string suits[] = {"H", "D", "C", "S"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 13; ++j) {
            deck.push_back(ranks[j] + suits[i]);
        }
    }
}

void shuffle(vector<string>& deck) {
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(deck.begin(), deck.end());
}