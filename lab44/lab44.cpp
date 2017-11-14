#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;
/*Roque Guerrero
  11/9/2017
  4.4 lab - CStrings
  This program will create usernames for the user once they enter there name.
*/

int main() {
  char first_name[10];
  char last_name[20];
  
  cout << "Please enter your first name: ";
  cin >> first_name;
  
  int name_count = 10;  // This int check to see if the input name isn't too long
  
  // This while loop lets the user know if there first name is too long.
  while (strlen(first_name) > name_count) {
    cout << "Error!! First name is too long. ";
    cout << "Please enter your first name again: ";
    cin >> first_name;
  }
  
  cout << "Please enter your last name: ";
  cin >> last_name;
  
  name_count = 20; // This int check to see if the input name isn't too long
  // This while loop lets the user know if there last name is t0o long.
  while (strlen(last_name) > name_count) {
    cout << "Error!! Last name is too long. ";
    cout << "Please enter you last name again: ";
    cin >> last_name;
  }
  
  name_count = strlen(first_name);
  bool same_name = true;
  for(int i = 0; i < name_count; i++) {
    if(first_name[i] != last_name[i]) {
      same_name = false;
    }
  }
  if(same_name == true) {
    cout << "Warning!! You have entered the same first and last name." << endl;
  }
  //This create 3 usernames for the user.
  cout << "Which of the three usernames would you like: " << endl;
  cout << endl;
  
  char username1[30];
  char username2[30];
  char username3[30];
  
  //username1
  username1[0] = first_name[0];
  strcat(username1, last_name);
  cout << username1 << endl;
  //username2
  strcpy(username2, first_name);
  strncat(username2, last_name, strlen(last_name));
  cout << username2 << endl;
 // username3
  strcpy(username3, last_name);
  username3[strlen(last_name)] = '_';
  strncat(username3, first_name, strlen(first_name));
  cout << username3 << endl;

}

/*
Please enter your first name: April
Please enter your last name: Browne
Which of the three usernames would you like: 

ABrowne
AprilBrowne
Browne_April

Please enter your first name: AnaElizabeth
Error!! First name is too long. Please enter your first name again: AnaElizabe
Please enter your last name: Hazeltine-Smith
Which of the three usernames would you like: 

AHazeltine-Smith
AnaElizabeHazeltine-Smith
Hazeltine-Smith_AnaElizabe

Please enter your first name: James
Please enter your last name: James
Warning!! You have entered the same first and last name.
Which of the three usernames would you like: 

JJames
JamesJames
James_James

*/