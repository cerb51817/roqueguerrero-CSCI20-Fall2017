#include <iostream>
using namespace std;

int main() {
    int currentPopulation = 0;
    int numYears = 0;
    
    int numBirthSec = 0;
    int numDeathSec = 0;
    
    int numDeathYear = 0;
    int numBirthYear = 0;
    
    int numBirthsTotal = 0;
    int numDeathsTotal = 0;
    int futurePopulation = 0;
    
    cout << "Enter population: ";
    cin >> currentPopulation;
    
    cout << "Enter Birth Per Second: ";
    cin >> numDeathSec;
    
     cout << "Enter Death Per Second: ";
    cin >> numDeathSec;
    
    numBirthYear = numBirthSec * 60* 60 *24 * 365;
    numDeathYear = numDeathSec * 60* 60 *24 * 365;
    
    cout << "Number of years predicted: ";
    cin >> numYears;
    
    cout << "In the next " << numYears << " years the total population will be: " << endl;
    
    numBirthsTotal = numYears * numBirthYear;
    numDeathsTotal = numYears * numDeathYear;
    
    futurePopulation = currentPopulation - numDeathsTotal + numBirthsTotal;
    cout << futurePopulation;
    return 0;
}
