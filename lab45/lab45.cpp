#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;
/*Roque Guerrero
  11/9/2017
  4.5 lab - Strings
  This program will create usernames for the user once they enter there name.
*/

int main() {
  string first_name;
  string last_name;
  
  cout << "Please enter your first name: ";
  cin >> first_name;
  
  while(first_name.length() > 10){
    cout << "Error!! First name is too long. ";
    cout << "Please enter your first name again: ";
    cin >> first_name;
  }
  
  cout << "Please enter your last name: ";
  cin >> last_name;
  
  // This while loop lets the user know if there last name is too long.
  while (last_name.length() > 20) {
    cout << "Error!! Last name is too long. ";
    cout << "Please enter you last name again: ";
    cin >> last_name;
  }
  //This if statement tells the user that both first and last name are same.
  if(first_name == last_name) {
    cout << "Warning!! You have entered the same first and last name." << endl;
  }
    //variable hold username
    string username;
    
    //This create 3 usernames for the user to chose.
    cout << "Which of the three usernames would you like: " << endl;
    cout << endl;
    
    username = tolower(first_name.at(0));
    username += last_name;
    
    cout << "1) " << username << endl;
    
    username = last_name + "_" + first_name;
    
    cout << "2) " << username << endl;
    
    username = toupper(last_name.at(0));
    username += "_";
    for (int i = 0; i < first_name.length(); i ++) {
        username += tolower(first_name.at(i));
    }
    
    cout << "3) " << username << endl;
    
    return 0;
}


/*
Please enter your first name: April
Please enter your last name: Browne
Which of the three usernames would you like: 

1) aBrowne
2) Browne_April
3) B_april

Please enter your first name: AnaElizabeth
Error!! First name is too long. Please enter your first name again: AnaElizabe
Please enter your last name: Hazeltine-Smith
Which of the three usernames would you like: 

1) aHazeltine-Smith
2) Hazeltine-Smith_AnaElizabe
3) H_anaelizabe

Please enter your first name: James
Please enter your last name: James
Warning!! You have entered the same first and last name.
Which of the three usernames would you like: 

1) jJames
2) James_James
3) J_james

*/