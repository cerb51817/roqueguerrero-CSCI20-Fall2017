
/*Roque Guerrero
  10/19/2017
  3.4 lab - Debugging
  This lab is to debug the code for checking letter case. You are trying to have the code distiguise between upper case letter, lower case letters, and none letters like numbers.
*/

#include <iostream>
using namespace std; 
int main() {
        // Read a character in
        char ch;
        
        
        cout << "Please enter a character: ";
        cin  >> ch;
         
// check -- is it a letter??
        if (ch >= 'A' && ch <= 'Z') {
               cout << "Yes, that is a uppercase letter." << endl;
            }
    
        else if (ch >= 'a' && ch <= 'z') {
               cout << "Yes, that is a lowercase letter" << endl;
            }
          
        else {
            
            cout << "Not a letter" << endl;
        }
          return 0; 
    
}
/*
Please enter a character: R
Yes, that is a uppercase letter.

Please enter a character: r
Yes, that is a lowercase letter

Please enter a character: 99
Not a letter
*/