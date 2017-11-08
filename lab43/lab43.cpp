#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  11/7/2017
  4.3 lab - Arrays of Object
  This program will keep track of an online shopping car. It will keep track on inventory, price, and the user's shopping cart.
  Zachary Rust helped me with this lab.
*/

class ItemList{
    private:
    string item_name;
    int item_price;
    int inventory;
    
    public:
    ItemList();
    void SetItems(string n, int p, int i);
    void BuyItems(int order, int p, string n);
    void Print();
};

ItemList::ItemList() {
    
}

void ItemList::SetItems(string n, int p, int i) {
    item_name = n;
    item_price = p;
    inventory = i;
}

void ItemList::BuyItems (int order, int p, string n) {
    inventory -= order;

    n = item_name;
    p = item_price;
}

void ItemList::Print() {
    cout << item_name << " - " << "$" << item_price << " Inventory: " << inventory << "." << endl;
}

int main() {
    const int size = 10;
    

    string names[size] = {"Beef", "Fish", "Chicken", "Corn", "Twinkies", "Rice", "Protein Bar", "Whey Protein", "Milk", "Chips"};
    int stock[size] = {100, 90, 110, 30, 20, 50, 25, 35, 77, 101};
    int prices[size] = {10, 5, 8, 2, 3, 13, 20, 30, 5, 2};
    
    ItemList goods[size];
    
    cout << "Welcome!" << endl;
    cout << "If you would like to purchase something. Please take a look at our inventory below." << endl;
    cout << "Please enter the associated number with the item you would like?" << endl;
    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        goods[i].SetItems(names[i], prices[i], stock[i]);
        cout << i + 1 << ". ";
        goods[i].Print();
    }
}

/*


*/