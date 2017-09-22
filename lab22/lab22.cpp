#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  9/21/2017
  2.2 Lab - Writing Functions
*/

int main() {
    
    //random number generating function
    srand(time(0));
    cout << "Random Number: " << (rand() % 100) + 1 << endl;
  
    return 0;
}
/*

Random Number: 23
Random Number: 17
Random Number: 84

*/