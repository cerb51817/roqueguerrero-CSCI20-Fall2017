#include <iostream>
#include <string>
using namespace std;

int main() {
     
    string adjectiveOne;
    string adjectiveTwo;
    string nounOne;
    string nounTwo;
    string pluralNounOne;
    string pluralNounTwo;
    string pluralNounThree;
    string gameOne;
    string verbEndingINGone;
    string verbEndingINGtwo;
    string verbEndingINGthree;
    
    cout << "Enter adjective one? ";
    cin >> adjectiveOne;
    cout << "Enter adjective two? ";
    cin >> adjectiveTwo;
    cout << "Enter noun one? ";
    cin >> nounOne;
    cout << "Enter noun two? ";
    cin >> nounTwo;
    cout << "Enter plural noun one? ";
    cin >> pluralNounOne;
    cout << "Enter plural noun two? ";
    cin >> pluralNounTwo;
    cout << "Enter plural noun three? ";
    cin >> pluralNounThree;
    cout << "Enter game one? ";
    cin >> gameOne;
    cout << "Enter verb ending in ING one? ";
    cin >> verbEndingINGone;
    cout << "Enter verb ending in ING two? ";
    cin >> verbEndingINGtwo;
    cout << "Enter verb ending in ING three? ";
    cin >> verbEndingINGthree;
    
    
    
    cout << "A vacation is when you take a trip to some " << adjectiveOne << " place with your " << adjectiveTwo << " family.";
    cout << endl;
    cout << "Usually you go to some place that is near a " << nounOne << " or up on a " << nounTwo << ".";
    cout << endl;
    cout << "A good vacation place is one where you can ride " << pluralNounOne << " or play " << gameOne << " or go hunting for " << pluralNounTwo << ".";
    cout << endl;
    cout << "I like to spend my time " << verbEndingINGone << " or " << verbEndingINGtwo << ".";
    cout << endl;
    cout << "When parents go on a vacation, they spend their time eating three " << pluralNounThree << " a day, and fathers play golf, and mothers sit around " << verbEndingINGthree << ".";
    cout << endl;
    

    return 0;
}