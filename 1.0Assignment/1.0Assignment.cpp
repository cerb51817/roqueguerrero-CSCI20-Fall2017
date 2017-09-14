#include <iostream>
#include <string>
using namespace std;

/*This object has the variable to help calculate
how much money employee will recievd for the miles they traveled.
*/
struct employee_mileage {
    
    int starting_mileage = 0;
    int ending_mileage = 0;
    int total_miles = 0;
    double mileage_reimbursement = 0.0;
    double mileage_rate = 0.35;
    
};

int main() {
    
    employee_mileage mileage_traveled;
    
    //This our the ouput variables
    string first_name;
    string last_name;
    char money_sign = '$';
    double hours_per_week = 0.0;
    double pay_rate = 0.0;
    double insurance_pay = 0.0;
    double total_money = 0.0;
    double deduction_total = 0.0;
    double money_after_deduction = 0.0;
    double taxes = 17e-2;
    
    //This are all the input that we ask the user to enter.
    cout << "Enter first name:";
    getline(cin, first_name);
    cout << endl;

    cout << "Enter last name:";
    getline(cin, last_name);
    cout << endl;
    
    cout << "Enter total hours worked this week: ";
    cin >> hours_per_week;
    cout << endl;
    
    cout << "Enter your pay rate: " << money_sign;
    cin >> pay_rate;
    cout << endl;
    
    cout << "Enter your insurance cost: " <<money_sign;
    cin >> insurance_pay;
    cout << endl;
    
    cout << "Enter starting Mileage: ";
    cin >> mileage_traveled.starting_mileage;
    cout << endl;
    
    cout << "Enter ending Mileage: ";
    cin >> mileage_traveled.ending_mileage;
    cout << endl;
    
    //This are all the equations that calcualate your income.
    total_money = (pay_rate * hours_per_week) + mileage_traveled.mileage_reimbursement;
    
    mileage_traveled.total_miles = mileage_traveled.ending_mileage - mileage_traveled.starting_mileage;
    
    mileage_traveled.mileage_reimbursement = mileage_traveled.total_miles * mileage_traveled.mileage_rate;
    
    deduction_total = (total_money * taxes) + insurance_pay;
    
    money_after_deduction = total_money - mileage_traveled.mileage_reimbursement;
    
    //This will show what the user entered
    cout << "Name: " << first_name << " " << last_name;
    cout << endl;
    
    cout << "Rate: " << money_sign << pay_rate;
    cout << endl;
    
    cout << "Hours: " << hours_per_week;
    cout << endl;
    
    cout << "Miles Traveled: " << mileage_traveled.total_miles;
    cout << endl;
    
    cout << "Mileage Reimbursement: " << money_sign << mileage_traveled.mileage_reimbursement;
    cout << endl;
    
    cout << "Current Total: " << money_sign << total_money;
    cout << endl;
    
    cout << "Current Deductions: " << money_sign << deduction_total;
    cout << endl;
    
    cout << "Net Pay: " << money_sign << money_after_deduction;
    cout << endl;

    return 0;
}

/*
Name: Roque Guerrero
Rate: $23.57
Hours: 40
Miles Traveled: 886
Mileage Reimbursement: $310.1
Current Total: $942.8
Current Deductions: $338.926
Net Pay: $632.7
*/