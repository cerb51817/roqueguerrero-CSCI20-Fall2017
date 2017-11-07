#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  11/2/2017
  4.2 lab - Parallel Arrays
  This program will keep track of an online shopping car. It will keep track on inventory, price, and the user's shopping cart.
*/

int main() {
  //varible arrays store item names, stock number, and item price.
  string name[10] = {"Banana", "Chocolate", "Ice", "Apple", "Fish", "Steak", "Chicken", "Rice", "Pasta", "Bread"};
  int stock[10] = {5,4,6,12,20,30,7,8,15,2};
  int prices[10] = {10,8,10,7,100,50,13,10,5,5};
  
  //loop variables
  bool buy = true;
  char choice;
  int num_choice = 0;
  int num_items = 0;
  int i = 0;
  int total = 0;
  //This loop keeps going until user no longer wants to buy something.
  while(buy){
    cout << "Do you want to buy something?[Y/N]  ";
    cin >> choice;
    cout << endl;
    // This switch statement handles the user input.
    switch (choice){
     
      case 'y':
      case 'Y':
      cout << "What item do you want to buy?" << endl;
      //This loop create a list of all the items that the user can pick from and inclued price of item and how many in inventory.
      for (i = 0; i < 10; i++ ) {
    
    cout << i << ": " << name[i] << " $" << prices[i] << "       Inventory: " << stock[i] << endl;
  }
    cin >> num_choice;
    if(stock[num_choice] == 0){
      cout << "No more left!" << endl;
                break;
            }
            cout << "You chose: " << name[num_choice] << "." << endl;
            cout << "How many do you want?" << endl;
            cin >> num_items;
            
           
            if (stock[num_choice] - num_items < 0)
            {
                cout << "There aren't enough in stock!" << endl;
                break;
            }
            
           // this equation subtract number of items from the inventory.
            stock[num_choice] -= num_items;
            total += prices[num_choice] * num_items;
            cout << "Total:$ " << total << "." << endl;
            break;
            
            case 'N':
            case 'n':
            cout << "Total price:$" << total << endl;
            cout << "Have a great day!" << endl;
            buy = false;
            break;
            
            default:
            break;
        }
    }
    return 0;
}
/*
Do you want to buy something?[Y/N]  Y

What item do you want to buy?
0: Banana $10       Inventory: 5
1: Chocolate $8       Inventory: 4
2: Ice $10       Inventory: 6
3: Apple $7       Inventory: 12
4: Fish $100       Inventory: 20
5: Steak $50       Inventory: 30
6: Chicken $13       Inventory: 7
7: Rice $10       Inventory: 8
8: Pasta $5       Inventory: 15
9: Bread $5       Inventory: 2
0
You chose: Banana.
How many do you want?
5
Total: 50.
Do you want to buy something?[Y/N]  y

What item do you want to buy?
0: Banana $10       Inventory: 0
1: Chocolate $8       Inventory: 4
2: Ice $10       Inventory: 6
3: Apple $7       Inventory: 12
4: Fish $100       Inventory: 20
5: Steak $50       Inventory: 30
6: Chicken $13       Inventory: 7
7: Rice $10       Inventory: 8
8: Pasta $5       Inventory: 15
9: Bread $5       Inventory: 2
2
You chose: Ice.
How many do you want?
3
Total: 80.
Do you want to buy something?[Y/N]  4

Do you want to buy something?[Y/N]  y

What item do you want to buy?
0: Banana $10       Inventory: 0
1: Chocolate $8       Inventory: 4
2: Ice $10       Inventory: 3
3: Apple $7       Inventory: 12
4: Fish $100       Inventory: 20
5: Steak $50       Inventory: 30
6: Chicken $13       Inventory: 7
7: Rice $10       Inventory: 8
8: Pasta $5       Inventory: 15
9: Bread $5       Inventory: 2
4
You chose: Fish.
How many do you want?
10
Total: 1080.
Do you want to buy something?[Y/N]  n

Total price:$1080
Have a great day!

*/