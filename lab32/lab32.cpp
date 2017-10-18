#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/12/2017
  3.2 lab - Switch Case
  This program will calculate the income tax of a single person or couple. 
*/

int main() {
    int gross_wage = 0;
    string first_name;
    string last_name;
    string filing_status;
    double tax_withheld = 0;
    double wage_after_tax = 0;
    double tax_owed = 0;
    double tax_refund = 0;
    
    
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << endl;
    
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << endl;
    
    cout << "Filing Status: ";
    cin >> filing_status;
    cout << endl;
    
    cout << "Gross Wage: $";
    cin >> gross_wage;
    cout << endl;
    
    cout << "Tax withheld: $";
    cin >> tax_withheld;
    cout << endl;
    
    if ((gross_wage <= 0) && (filing_status == "Single" || filing_status == "single")){
        
        tax_owed = 0;
        tax_refund = 0;
        
    }
    else if ((gross_wage <= 9325) && (gross_wage >= 1) && (filing_status == "Single" || filing_status == "single")) {
        
        wage_after_tax = (gross_wage - 6350 - 4050) * 0.1 - tax_withheld * 1;
        tax_owed = wage_after_tax;
        tax_refund = tax_owed * -1;
    }
    
    else if ((gross_wage <= 37950) && (gross_wage >= 9326) && (filing_status == "Single" || filing_status == "single")) {
        wage_after_tax = gross_wage - 6350 - 4050 - 932.50 * 0.15 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = tax_owed * -1;
    }
    
    else if ((gross_wage >= 37951) && (gross_wage <= 91900) && (filing_status == "Single" || filing_status == "single")) {
        wage_after_tax = gross_wage - 6350 - 4050 - 5226.25 * 0.25 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = tax_owed * -1;
    }
    else if ((gross_wage >= 91901) && (gross_wage <= 191650) && (filing_status == "Single" || filing_status == "single")) {
        wage_after_tax = gross_wage - 6350 - 4050 - 18713.75 * 0.28 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
    }
    
    else if ((gross_wage >= 191651) && (gross_wage <= 416700) && (filing_status == "Single" || filing_status == "single")) {
        wage_after_tax = gross_wage - 6350 - 4050 - 46643.75 * 0.33;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
    }
    else if ((gross_wage >= 416700) && (filing_status == "Single" || filing_status == "single")) {
        wage_after_tax = gross_wage - 6350 - 4050 - 120910.25 * 0.396 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
        
    }
        
        if ((gross_wage <= 0) && (filing_status == "Married" || filing_status == "married")){
        
        wage_after_tax = 0;
        tax_owed = 0;
        tax_refund = 0;
        
    }
    
    else if ((gross_wage <= 18650) && (gross_wage >= 1) && (filing_status == "Married" || filing_status == "married")) {
        
        wage_after_tax = gross_wage - 12700 - 4050 - 1865 * 0.15 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
    }
    
    else if ((gross_wage <= 75900) && (gross_wage >= 18651) && (filing_status == "Married" || filing_status == "married")) {
        
        wage_after_tax = gross_wage - 12700 - 4050 - 10452.50 * 0.25 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
    }
    
    else if ((gross_wage <= 153100) && (gross_wage >= 75901) && (filing_status == "Married" || filing_status == "married")) {
        
        wage_after_tax = gross_wage - 12700 - 4050 - 29752.50 * 0.28 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
    }
    
    else if ((gross_wage <= 233350) && (gross_wage >= 153101) && (filing_status == "Married" || filing_status == "married")) {
        
        wage_after_tax = gross_wage - 12700 - 4050 - 29752.50 * 0.28 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
    }
    
    else if ((gross_wage <= 416700) && (gross_wage >= 233351) && (filing_status == "Married" || filing_status == "married")) {
        
        wage_after_tax = gross_wage - 12700 - 4050 - 52222.50 * 0.33 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
    }
    
    else if ((gross_wage >= 416701) && (filing_status == "Married" || filing_status == "married")) {
        wage_after_tax = gross_wage - 12700 - 4050 - 112728 * 0.396 - tax_withheld;
        tax_owed = wage_after_tax;
        tax_refund = wage_after_tax * -1;
        
    }
    
    
    cout << "Name: " << first_name<< " " << last_name << endl;
    cout << "Total Gross Adjusted Income:$" << gross_wage << endl;
    cout << "Total tax owed:$" << wage_after_tax << endl;
    cout << first_name << " " << last_name << " is entitled to a REFUND of $" << tax_refund << endl;
    
    /*
    switch (tax_refund) {
        case 0:
        cout << first_name << " " << last_name << " will not get a refund." << endl;
        break;
        
        default:
        cout << first_name << " " << last_name << " is entitled to a REFUND of $" << tax_refund << endl;
        
    }
    */
    return 0;
}
/*

Your tax gross wage after tax is $441720
Your tax withheld is $58280.5

*/