#include "lab52.h"
#include "class.h"
using namespace std;
/*Roque Guerrero
  11/30/2017
  5.2 lab - Separate File Compilation
  This lab is to take the code provided and break it up into the appropriate separate files for compilation. 
*/

// Program starts here
int main() {
  // Create a MyClass Object
  MyClass object;

  //Send a number to the Object
  object.SetNumber(randomNumber());

  // Call the output member function
  object.Output();

  // This ends our program
  return 0;
}