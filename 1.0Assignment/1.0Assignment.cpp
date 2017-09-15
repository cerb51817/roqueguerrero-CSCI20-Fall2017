#include <iostream>
#include <string>
using namespace std;
/*Roque Guerrero
  9/14/2017
  Code on how to calculate your pay stub
*/


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
    
    //These are the output variables
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
    
    //This are all the input variables that we ask the user to enter.
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
    
    money_after_deduction = total_money - deduction_total;
    
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
Name: Sofia Cameron
Rate: $23.57
Hours: 40
Miles Traveled: 886
Mileage Reimbursement: $310.1
Current Total: $942.8
Current Deductions: $338.926
Net Pay: $603.874

Name: Richard Watson
Rate: $11.5
Hours: 29
Miles Traveled: 938
Mileage Reimbursement: $328.3
Current Total: $333.5
Current Deductions: $401.265
Net Pay: $-67.765

Name: Heather Hun
Rate: $60
Hours: 35
Miles Traveled: 0
Mileage Reimbursement: $0
Current Total: $2100
Current Deductions: $581.75
Net Pay: $1518.25

Name: Eddy Hall
Rate: $8.25
Hours: 40
Miles Traveled: 227
Mileage Reimbursement: $79.45
Current Total: $330
Current Deductions: $236.37
Net Pay: $93.63

*/