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
    int gross_wage = 0; //This is the gross wage variable
    string first_name; // This is the first name variable
    string last_name; // This is the last name variable
    string filing_status; // Filing status variable
    double tax_withheld = 0; // tax witheld variable
    double wage_after_tax = 0; // wage after tax variable
    double tax_owed = 0; // tax owed variable
    double tax_refund = 0; // tax refund variable
    
    // User input function for first name
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << endl;
    // User input function for last name
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << endl;
    // User input function for filling status
    cout << "Filing Status: ";
    cin >> filing_status;
    cout << endl;
    //User Input function for gross wage
    cout << "Gross Wage: $";
    cin >> gross_wage;
    cout << endl;
    //User input function for tax withheld
    cout << "Tax withheld: $";
    cin >> tax_withheld;
    cout << endl;
    // if-else statement for filing status for a single person. This whos the amount of tax they will get depending on income.
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
        // This is a if-else statement for filing status Married. It will show how much tax they will get for there income.
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
    // if statement for total taxed owed
    if (wage_after_tax <= 0){
        
        wage_after_tax = 0;
    }
    // if statement for tax refund
    if (tax_refund <= 0) {
        
        tax_refund = 0;
        
    }
    
    // output fucntions
    cout << "Name: " << first_name<< " " << last_name << endl;
    cout << "Total Gross Adjusted Income:$" << gross_wage << endl;
    cout << "Total tax owed:$" << wage_after_tax << endl;
    cout << first_name << " " << last_name << " is entitled to a REFUND of $" << tax_refund << endl;
    
    return 0;
}
/*

Name: Joe Vandal
Total Gross Adjusted Income:$12100
Total tax owed:$1310.12
Joe Vandal is entitled to a REFUND of $0

Name: Alfonso Haynes
Total Gross Adjusted Income:$32351
Total tax owed:$9795.88
Alfonso Haynes is entitled to a REFUND of $0

Name: Bridget Rowe
Total Gross Adjusted Income:$88229
Total tax owed:$64465.4
Bridget Rowe is entitled to a REFUND of $0

Name: Wendy Joseph
Total Gross Adjusted Income:$73291
Total tax owed:$46955.9
Wendy Joseph is entitled to a REFUND of $0

*/