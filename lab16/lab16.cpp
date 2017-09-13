#include <iostream>
#include <string>
using namespace std;

    struct stockPorfolio {  // List of all my varialbe with in my object
        
        string stockName;
        double sharePrice;
        int numSharesOwned;
        char sector;
    };
    
    int main() {
        
    stockPorfolio stockPorfolio1;  // This is object 1 and list of all inputs.
    
    cout << "Enter the stock name: ";
    cin >> stockPorfolio1.stockName;
    cout << endl;
    
    cout << "Enter the sector: ";
    cin >> stockPorfolio1.sector;
    cout << endl;
    
    cout << "Enter current share price: ";
    cin >> stockPorfolio1.sharePrice;
    cout << endl;
    
    cout << "Enter number of shares owned: ";
    cin >> stockPorfolio1.numSharesOwned;
    cout << endl;
    
    stockPorfolio stockPorfolio2;        // This is object 2 and list of all inputs.
    
    cout << "Enter the stock name: ";
    cin >> stockPorfolio2.stockName;
    cout << endl;
    
    cout << "Enter the sector: ";
    cin >> stockPorfolio2.sector;
    cout << endl;
    
    cout << "Enter current share price: ";
    cin >> stockPorfolio2.sharePrice;
    cout << endl;
    
    cout << "Enter number of shares owned: ";
    cin >> stockPorfolio2.numSharesOwned;
    cout << endl;
    
    stockPorfolio stockPorfolio3;        // This is object 3 and list of all inputs.
    
    cout << "Enter the stock name: ";
    cin >> stockPorfolio3.stockName;
    cout << endl;
    
    cout << "Enter the sector: ";
    cin >> stockPorfolio3.sector;
    cout << endl;
    
    cout << "Enter current share price: ";
    cin >> stockPorfolio3.sharePrice;
    cout << endl;
    
    cout << "Enter number of shares owned: ";
    cin >> stockPorfolio3.numSharesOwned;
    cout << endl;
    
    stockPorfolio stockPorfolio4;       // This is object 4 and list of all inputs.
    
    cout << "Enter the stock name: ";
    cin >> stockPorfolio4.stockName;
    cout << endl;
    
    cout << "Enter the sector: ";
    cin >> stockPorfolio4.sector;
    cout << endl;
    
    cout << "Enter current share price: ";
    cin >> stockPorfolio4.sharePrice;
    cout << endl;
    
    cout << "Enter number of shares owned: ";
    cin >> stockPorfolio4.numSharesOwned;
    cout << endl;
    
    // This section will show your output for all four entries
    cout << "Stock Name   " << "No of Shares   " << "Current Value   " << "Total Value" << endl;
    cout << stockPorfolio1.stockName << "   " << stockPorfolio1.sector << "   $" << stockPorfolio1.sharePrice << "   $" << stockPorfolio1.numSharesOwned << static_cast <double> (stockPorfolio1.sharePrice * stockPorfolio1.numSharesOwned) << endl;
    cout << stockPorfolio2.stockName << "   " << stockPorfolio2.sector << "   $" << stockPorfolio2.sharePrice << "   $" << stockPorfolio2.numSharesOwned << static_cast <double> (stockPorfolio2.sharePrice * stockPorfolio2.numSharesOwned) << endl;
    cout << stockPorfolio3.stockName << "   " << stockPorfolio3.sector << "   $" << stockPorfolio3.sharePrice << "   $" << stockPorfolio3.numSharesOwned << static_cast <double> (stockPorfolio3.sharePrice * stockPorfolio3.numSharesOwned) << endl;
    cout << stockPorfolio4.stockName << "   " << stockPorfolio4.sector << "   $" << stockPorfolio4.sharePrice << "   $" << stockPorfolio4.numSharesOwned << static_cast <double> (stockPorfolio4.sharePrice * stockPorfolio4.numSharesOwned) << endl;

    return 0;
}

/*
Stock Name   No of Shares   Current Value   Total Value
FordM              A             $18.76       $871632.12
Albertsn           C             $34.39       $54218639.4
AAPL               T             $145.91      $5729.55
TSLA               A             $375.64      $5018782
*/