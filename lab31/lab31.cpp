#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/10/2017
  3.1 Lab - Conditions
*/

//input from the user
int num_data    = 0; //gigs
int num_tablets = 0; // table


int ATTUnlimitedChoice(int phones, int tablets, int gigs);
int VerizonUnlimited(int phones, int tablets);
int SprintUnlimited(int phones);
int Sprint2GB(int phones);

string PriceCheck(int ATT_Unl, int VZ_Unl, int Sprint_Unl, int Sprint_2gb);

int main () {
    //input from the user
    int num_phones = 0;
    int num_tablets = 0;
    
    //User input for how many phones, tablets, & GB they need.
    cout << "Enter number of phones: ";
    cin >> num_phones;
    
    cout << "Enter number of tablets: ";
    cin >> num_tablets;
    
    cout << "Enter number of GB of data: ";
    cin >> num_data;
    
    //function to check prices
    int ATT_Unl    = ATTUnlimitedChoice(num_phones, num_tablets, num_data);
    int VZ_Unl     = VerizonUnlimited(num_phones, num_tablets);
    int Sprint_Unl = SprintUnlimited(num_phones);
    int Sprint_2gb = Sprint2GB(num_phones);
    
    string plan = "";
    
    cout << "The best phone plan for you is the " << PriceCheck(ATT_Unl, VZ_Unl, Sprint_Unl, Sprint_2gb);
}

//Funcitons that find the price for each plan
int ATTUnlimitedChoice (int phones, int tablets, int gigs) {
    int total_price = 0;
    
    //Calculations for phone lines
    if (phones == 1) {
        total_price += 60;
    }
    else if (phones == 2) {
        total_price += 115;
    }
    
    if (phones > 2) {
        total_price += (phones * 20) - 40;
    }
    
    //Calculation for tablets price
    total_price += tablets * 10;
    
    //Calculations for data price
    total_price += phones * 20;
    
    if (gigs <= 1) {
        total_price += 30;
    }
    else if (gigs > 1 && gigs <= 3) {
        total_price += 40;
    }
    else if (gigs > 3 && gigs <= 6) {
        total_price += 60;
    }
    else if (gigs > 6 && gigs <= 10) {
        total_price += 80;
    }
    else if (gigs > 10 && gigs <=16) {
        total_price += 90;
    }
    else if (gigs > 16 && gigs <= 25) {
        total_price += 110;
    }
    
    return total_price;
}

//VZW function to calculate price
int VerizonUnlimited (int phones, int tablets) {
    int total_price = 0;
    
    if (phones == 1) {
        total_price += 80;
    }
    else if (phones > 1) {
        total_price += 110;
    }
    
    total_price += 20 * phones;
    total_price += 10 * tablets;
    
    return total_price;
}

//Sprint function to calculate price

int SprintUnlimited (int phones) {
    int total_price = 0;
    
    if (phones == 1) {
        total_price = 60;
    }
    
    else if (phones == 2) {
        total_price = 100;
    }
    
    else {
        total_price = 100 + (30 * (phones - 2));
    }
    
    return total_price;
    
}


//Sprint 2GB fucntion to calculate price
int Sprint2GB (int phones) {
    int total_price = phones * 40;
    
    return total_price;
}

//Function checks plans and choses the cheapest one.
string PriceCheck (int ATT_Unl, int VZ_Unl, int Sprint_Unl, int Sprint_2gb) {
    int total = ATT_Unl;
    string company = "AT&T Unlimited Plan.";
    cout << "AT&T Unlimited Choice Plan:$" << total << endl;
    if (VZ_Unl < ATT_Unl) {
        total = VZ_Unl;
        cout << "VZW Unlimted Plan:$" << total << endl;
        company = "Verizon Unlimited Plan.";
    }
    
    if (num_tablets == 0) {
        
        if ((Sprint_Unl < VZ_Unl) && (Sprint_Unl < ATT_Unl)) {
            total = Sprint_Unl;
            cout << "Sprint Unlimited Plan:$" << total << endl;
            company = "Sprint Unlimited Plan.";
        }
    }
    
    if (num_tablets == 0) {
        
        if (num_data == 2) {
            
            if (Sprint_2gb) {
                
                total = Sprint_2gb;
                cout << "Sprint 2GB Plan: $" << total << endl;
                company = "Sprint 2gb Plan.";
            }
        }
    }
    
    return company;
}


/*
Enter number of phones: 2
Enter number of tablets: 0
Enter number of GB of data: 5
AT&T Unlimited Choice Plan:$215
VZW Unlimted Plan:$150
Sprint Unlimited Plan:$100
The best phone plan for you is the Sprint Unlimited Plan.

Enter number of phones: 3
Enter number of tablets: 1
Enter number of GB of data: 15
AT&T Unlimited Choice Plan:$180
Sprint Unlimited Plan:$130
The best phone plan for you is the Sprint Unlimited Plan.

Enter number of phones: 1
Enter number of tablets: 0
Enter number of GB of data: 0
AT&T Unlimited Choice Plan:$110
VZW Unlimted Plan:$100
Sprint Unlimited Plan:$60
The best phone plan for you is the Sprint Unlimited Plan.

*/