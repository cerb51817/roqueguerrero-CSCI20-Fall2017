#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/10/2017
  3.1 Lab - Conditions
*/

int AttUnlimitedChoicePlan (int phones, int tablets, int gigs) {
    
    int total_price = 0;
    
    //Calculations for phone lines
    if (phones == 1)
    {
        total_price += 60;
    }
    else if (phones == 2)
    {
        total_price += 115;
    }
    
    if (phones > 2)
    {
        total_price += (phones * 20) - 40;
    }
    
    total_price += tablets * 10;
    
    total_price += phones * 20;
    
    if (gigs <= 1){
        
        total_price += 30;
        
    }
    else if ((gigs > 1) && (gigs <= 3)) {
        total_price += 40;
    }
    
    else if ((gigs > 3) && (gigs <= 6)) {
        total_price += 60;
    }
    else if ((gigs > 6) && (gigs <= 10)) {
        
        total_price += 80;
    }
    else if ((gigs > 10) && (gigs <= 16)) {
        total_price += 90;
    }
    else if (( gigs > 16) && (gigs <= 25)) {
        total_price += 110;
    }
   return total_price; 
    
}

int VZWUnlimited (int phones, int tablets)
{
    int total_price = 0;
    
    if (phones == 1)
    {
        total_price += 80;
    }
    else if (phones > 1)
    {
        total_price += 110
    }
    
    total_price += 20 * phones;
    total_price += 10 * tablets;
}

int SpirntUnlimited (int phones, int tablets)


int main() {
    int num_gb_data = 0;
    int num_lines = 0;
    
    
    
   
    
    return 0;
}


/*


*/