#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  9/28/2017
  2.4 Lab - Function Input
*/

//This function will convert pound to kilograms. 
double PoundsToKilograms(double lbs_kilo){
    
    double pound_kilogram = 0;
   
    pound_kilogram = lbs_kilo * (1.0 / 2.2);
    
    cout << "Pounds to kilograms:  " << pound_kilogram << "kg" << endl;
    
    return pound_kilogram;
}

//This function wil convert kilograms to pounds.
double KilogramsToPounds(double kilo_lbs){
    
    double kilogram_pound = 0;
   
    kilogram_pound = kilo_lbs / 0.45359237;
    
    cout << "Kilograms to pounds:  " << kilogram_pound << "lbs" << endl;
    
    return kilogram_pound;
}
//swap function will check to see if the x is greater than y. If it isn't it will switch them.
void SwapFunction (int& x, int& y){
    
if ( x > y){  
    
int a = x;
    x = y;
    y = a;
    
    }
}

//Random number generator functions will give you a number between two numbers that you choose.
int RandomNumberGenerator(int x, int y){
    
    SwapFunction(x, y);
    
    int random_number = 0;
    random_number = (rand() % (y - x)) + x + 1;
    
    cout << "A random number between " << x << " and " << y << " is " << random_number << endl;
    
    return random_number;

}

int main() {
    
    //get the random number 
    int random_number = RandomNumberGenerator(25, 50);
    //converts the random number to kilograms
    double kilograms = PoundsToKilograms(random_number);
    //converst kilograms to pounds
    KilogramsToPounds(kilograms);
    
    return 0;
}
/*
A random number between 1 and 10 is 3
Pounds to kilograms:  1.36364kg
Kilograms to pounds:  3.0063lbs

A random number between 1 and 20 is 4
Pounds to kilograms:  1.81818kg
Kilograms to pounds:  4.0084lbs

A random number between 25 and 50 is 34
Pounds to kilograms:  15.4545kg
Kilograms to pounds:  34.0714lbs

*/