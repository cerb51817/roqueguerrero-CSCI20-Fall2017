#include <iostream>
using namespace std;

int main() {
    
    int totalMoney = 0;
    int remainingMoney = 0;
    int moneyAfterFee = 0;
    int Fee = 0;

    int numPennies = 0;
    int numDimes = 0;
    int numNickels = 0;
    int numQuarters = 0;
    
    double moneyFee = 10.9e-2;
    
    cout << "How much money do you want to put in? $0.";
    cin >> totalMoney;
    cout << endl;
    
    numQuarters = totalMoney / 25;
    remainingMoney = totalMoney % 25;
    
    numDimes = remainingMoney / 10;
    remainingMoney %= 10;
    
    numNickels = remainingMoney / 5;
    remainingMoney %= 5;
    
    numPennies= remainingMoney / 1;
    remainingMoney %= 1;
    
    cout << "Total Money: $0." << totalMoney << endl;
    cout << "You will receive this many: " << endl;
    cout << "Quarters: " << numQuarters << endl;
    cout << "Dimes: " << numDimes << endl;
    cout << "Nickels: " << numNickels << endl;
    cout << "Pennies: " << numPennies << endl;
    
    moneyAfterFee = totalMoney - ( totalMoney * moneyFee);
    
    cout << "After the fee you will get $0."<< moneyAfterFee;
    cout << endl;
    

    return 0;
}