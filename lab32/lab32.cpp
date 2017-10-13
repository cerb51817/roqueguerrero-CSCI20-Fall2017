#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/12/2017
  3.2 lab - Switch Case
*/

int main() {
    double gross_wage = 0;
    string first_name;
    string last_name;
    string filing_status;
    double tax_withheld = 0;
    
    
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << endl;
    
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << endl;
    
    cout << "Filing Status: ";
    cin >> filing_status;
    cout << endl;
    
    cout << "Gross Wage: ";
    cin >> gross_wage;
    cout << endl;
    
    
    if ((gross_wage <= 9325) && (gross_wage >= 1) && (filing_status == "Single" || filing_status == "single")) {
        
        tax_withheld = (gross_wage - 6350 - 4050) * 0.1;
    }
    
    else if ((gross_wage <= 37950) && (gross_wage >= 9326) && (filing_status == "Single" || filing_status == "single")) {
        tax_withheld = (gross_wage - 6350 - 4050) + 932.50 * 0.15;
    }
    
    else if ((gross_wage >= 37951) && (gross_wage <= 91900) && (filing_status == "Single" || filing_status == "single")) {
        tax_withheld = gross_wage - 6350 - 4050 - 5226.25 * 0.25;
    }
    else if ((gross_wage >= 91901) && (gross_wage <= 191650) && (filing_status == "Single" || filing_status == "single")) {
        tax_withheld = (gross_wage - 6350 - 4050) + 18713.75 * 0.28;
    }
    
    else if ((gross_wage >= 191651) && (gross_wage <= 416700) && (filing_status == "Single" || filing_status == "single")) {
        tax_withheld = (gross_wage - 6350 - 4050) + 46643.75 * 0.33;
    }
    else {
        tax_withheld = (gross_wage - 6350 - 4050) + 120910.25 * 0.396;
    }
    
    /*else if ((gross_wage <= 9325) && (gross_wage >= 1) && (filing_status == "Married" || filing_status == "married")) {
        
        tax_withheld = (gross_wage * 0.01) - 12700 - 4050;
    }*/
  
    cout << "Your tax withheld is " << tax_withheld << endl;
  
    return 0;
}
/*


*/