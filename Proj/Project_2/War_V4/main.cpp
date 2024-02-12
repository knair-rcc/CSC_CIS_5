/* 
 * File:   main.cpp
 * Author: Kiran Nair
 * Created on January 9, 2024, 4:17 PM
 * Purpose: Template used to start all projects
 */

//System Libraries
#include <iostream> //Input-Output Library
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//User Libraries

//Global Constants - Math,Physics,Chemistry,Conversions

//Function Prototypes
void initDeck(vector<string>& deck);
void shuffle(vector<string>& deck);
void deal(vector<string>& deck,vector<string>& player1,vector<string>& player2);
char getRank(const string& card);
int compare(const string& card1, const string& card2);
void plRound(vector<string>& p1, vector<string>& p2, int& score1, int& score2);
void dWinner(int s1, int s2);
void display(const vector<string>& player);


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
        vector<string> player1;
        vector<string> player2;
        
        initDeck(deck);
        shuffle(deck);
        deal(deck,player1,player2);
        
        int score1 = strtCrd;
        int score2 = strtCrd;
        
        while (score1<numCard&&score2<numCard) {
            cout<<"Player 1's cards:"<<endl;
            display(player1);
            cout<<"Press Enter to continue...";
            cin.ignore();
            cout<<"Player 2's cards:"<<endl;
            display(player2);
            cout<<"Press Enter to continue...";
            cin.ignore();
            plRound(player1,player2,score1,score2);
            
            if (getRank(player1[strtCrd-1]) == getRank(player2[strtCrd-1])) {
                cout<<"It's a tie! War declared!"<<endl;
                cout<<"Press Enter to continue..."<<endl;
                cin.ignore();

                for (int i=0;i<3;++i) {
                    player1.erase(player1.begin());
                    player2.erase(player2.begin());
                }
                int wResult=compare(player1[strtCrd-1], player2[strtCrd-1]);
                if (wResult==1) {
                    cout<<"Player 1 wins the war!"<<endl;
                    score1+=8;
                    score2-=8;
                } else if (wResult==-1) {
                    cout<<"Player 2 wins the war!"<<endl;
                    score2+=8;
                    score1-=8;
                }
            }

        }
        dWinner(score1, score2);

        cout << "Do you want to play again? (1 for yes, 0 for no): ";
        cin >> play;
        cin.ignore();
    }
    

    
    return 0;
}

void initDeck(vector<string>& deck) {
    string suits[] = {"H", "D", "C", "S"};
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

    for (int i=0;i<4;++i) {
        for (int j=0;j<13;++j) {
            deck.push_back(ranks[j]+suits[i]);
        }
    }
}

void shuffle(vector<string>& deck) {
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(deck.begin(), deck.end());
}

void deal(vector<string>& deck,vector<string>& player1,vector<string>& player2) {
    for (int i=0;i<strtCrd;++i) {
        player1.push_back(deck[i]);
        player2.push_back(deck[i + strtCrd]);
    }
}

char getRank(const string& card) {
    return card[0];
}

int compare(const string& card1, const string& card2) {
    char r1=getRank(card1);
    char r2=getRank(card2);
    if (r1>r2) return 1;
    else if (r1<r2) return -1;
    else return 0;
}

void plRound(vector<string>& p1, vector<string>& p2, int& score1, int& score2) {
    for (int i=0;i<strtCrd;++i) {
        int result=compare(p1[i], p2[i]);
        if (result==1) {
            ++score1;
        } else if (result == -1) {
            ++score2;
        }
    }
}

void dWinner(int s1, int s2) {
    if (s1>s2) {
        cout << "Player 1 wins!" << endl;
    }
    else if (s1< 2) {
        cout<<"Player 2 wins!"<<endl;
    }
    else {
        cout<<"It's a tie!"<<endl;
    }
}

void display(const vector<string>& player) {
    for (const auto& card : player) {
        cout<<card<<endl;
    }
}