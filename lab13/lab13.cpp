#include <iostream>
using namespace std;

int main() {
    int usPopulation = 0;
    int numYears = 0;
    int numBirthsTotal = 0;
    int numDeathsTotal = 0;
    int totalPopulation = 0;
    
    usPopulation = 325777400;
    
    cout << "Current U.S. Population " << usPopulation << endl;
    
    cout << "How will the U.S. Population be affected in the next couple of years?" << endl;
    
    cout << "Enter number of years: " << endl;
    cin >> numYears;
    
    cout << "In the next " << numYears << " years." << endl;
    
    numBirthsTotal = numYears * 3942000;
    
    cout << "A total of " << numBirthsTotal << " will be born." << endl;
    
    numDeathsTotal = numYears * 2628000;
    
    cout << "A total of " << numDeathsTotal << " will die." << endl;;
    
    totalPopulation = (usPopulation - numDeathsTotal) + numBirthsTotal;
    
    cout << "And the new U.S. Population will be " << totalPopulation << "." << endl;
    
    return 0;
}
