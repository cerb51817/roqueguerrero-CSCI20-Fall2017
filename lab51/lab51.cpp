#include <iostream> //<iostream> is been used twice.
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[];

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name;
    char * tail = name;
    nameLength = strlen(*name);

    cout << "Your word is " << firststr << endl;
    // These if-else statement will look out for the nameLength to be less than 10 and print out the head.
    //If the nameLength doesn't meet the conditon else statment will be excecuted.
    if (nameLength<10)
    {
         while (*head != '\0')
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];

     head++;
     tail--;

     if (*head == *tail)
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}