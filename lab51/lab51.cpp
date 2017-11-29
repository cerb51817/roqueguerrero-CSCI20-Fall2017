#include <iostream> //There shouldn't be two <iostreams>
#include <iostream> 
#include <cstring> 
using namespace std;
/*Roque Guerrero
  11/28/2017
  5.1 lab - Pointers
  This lab we need to comment the code to demostrate we understand it.
  Zachary Rust helped me with this lab.
*/

int main() {
    int nameLength = 0;
    char * name = new char[];   //This is a pointer pointing to a new character array, but there needs to be an index(10).  It's causing an error

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;    //name variable is a pointer and needs to be dereferenced.

    char * head  = name;    //This creates a pointer called head that points to name location
    char * tail = name;     //This creates a pointer calledd tail that points to name location
    nameLength = strlen(*name); //This gets the length of the word in the character array using * (dereferencing)

    cout << "Your word is " << firststr << endl;    //error: This variable has not been declared

    if (nameLength<10) 
    {
         while (*head != '\0')  //This dereferences the head pointer and checks each letter until the end character
         {
                cout << *head;  //This outputs each letter in the array and prints the word.
                head++;     //This cycles through pointer locations
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];    //This sets tail to the last letter of name.

     if (nameLength < 10)
     {
          while (tail != name)  //This compares the end letter tail to a letter of the name and outs the tail letter until they aren't equal
          {
                 cout << *tail;     
                 tail--;
          }
     }
     cout << endl;

     head = name;   // This sets head to name
     tail = &name[strlen(name) - 1];    //This sets tail to the last letter of name again

     head++;    //This moves pointer location
     tail--;    //This moves pointer location

     if (*head == *tail)    //dereferenced words are equal
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}