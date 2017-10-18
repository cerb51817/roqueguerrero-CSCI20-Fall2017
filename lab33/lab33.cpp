#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/17/2017
  3.3 lab - Loops
  This program will generate a random number between 1 and 50. User need to input number until he gets the correct one.
*/

// This function will give the code perematers if the user puts a high number or low number it will let them know to keep guessing.
void NumbersAway (int num_e, int num_c){
    
    if (num_e < num_c) {
     
     cout << "Try Again! Too Low!" << endl;   
        
    }
    
    else {
        
       cout << "Try Again! Too High!" << endl;
        
    }
}
    // This fuction will generate a random number.
int RandomNumberGenerator(){
    
    srand(time(0));
    int random_number = 0;
    random_number = rand() % 50 + 1;
    
    return random_number;
    }

int main() {
    
    int num_enter = 0;
    int num_computer = 0;
    
    //User will input there number
    cout << "Enter a number? ";
    cin >> num_enter;
    
    //This function tell the code it the user puts a number lower than 1 or higher than 50 to enter a new number.
    while (num_enter < 1 || num_enter > 50 ){
        
        cout << "Pick new number? ";
        cin >> num_enter;
        
    }
    
    num_computer = RandomNumberGenerator();
    
    while (num_enter != num_computer) {
        
        cout << "Wrong number! ";
        
        NumbersAway(num_enter, num_computer);
        
        cout << "Enter new number? ";
        cin >> num_enter;
        
    while (num_enter < 1 || num_enter > 50 ){
        
        cout << "Pick new number? ";
        cin >> num_enter;
        }
        
    }
    
    
    cout << "Just Right" << endl;
    
    //for loop fuction will create a count down from 5 to 1.
    for (int i = 0; i < 5; i++) {
     cout << 5 - i << endl;   
    }

    return 0;
}
/*

Enter a number? 34
Wrong number! Try Again! Too High!
Enter new number? 20
Wrong number! Try Again! Too High!
Enter new number? 15
Wrong number! Try Again! Too High!
Enter new number? 10
Wrong number! Try Again! Too Low!
Enter new number? 12
Wrong number! Try Again! Too Low!
Enter new number? 13
Wrong number! Try Again! Too Low!
Enter new number? 14
Just Right
5
4
3
2
1
*/