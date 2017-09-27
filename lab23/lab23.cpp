#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  9/26/2017
  2.3 Lab - Function Input
*/

//swap function
void SwapFunction (int& x, int& y){
    
if ( x > y){  
    
int a = x;
    x = y;
    y = a;
    
    }
}

//Random number generator functions
int RandomNumberGenerator(int x, int y){
    
    SwapFunction(x, y);
    
    int random_number = 0;
    random_number = (rand() % (y - x)) + x + 1;
    
    cout << "A random number between " << x << " and " << y << " is " << random_number << endl;

}


int main() {
    //output variables
    int low_number = 0;
    int high_number = 0;
    
    //input variables asked the user to input
    cout << "Enter low number: ";
    cin >> low_number;
    cout << endl;
    
    cout << "Enter high number: ";
    cin >>  high_number;
    cout << endl;
    
    RandomNumberGenerator(low_number, high_number);
    
   
    return 0;
}
/*
Enter low number: 1

Enter high number: 10

A random number between 1 and 10 is 3

Enter low number: 5

Enter high number: 82

A random number between 5 and 82 is 56

Enter low number: 22

Enter high number: 73

A random number between 22 and 73 is 33

*/