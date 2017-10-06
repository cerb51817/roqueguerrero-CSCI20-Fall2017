#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/5/2017
  2.0 Assigment - Class Conversion Calculators
*/

//This class function is for the Sales Tax
class SalesTax{
    
    public: //The class public function
    //Mutators
        void SetLocation (string place);
        double SetSaleTotal (double total);
        double SetSaleTax(double tax);
        double SetSaleTaxState (double state_tax);
        double SetSaleTaxCounty (double county_tax);
        double SetSaleTaxCity (double city_tax);
        void PrintFunction();
    //Accessors
        string GetLocation()const;
        double GetSaleTotal()const;
        double GetSaleTax()const;
        double GetSaleTaxState()const;
        double GetSaleTaxCounty()const;
        double GetSaleTaxCity()const;
    
    private: //The class private internal data members
        string location;
        double sale_total = 0;
        double sales_tax = 0;
        double sales_tax_state = 0;
        double sales_tax_county = 0;
        double sales_tax_city = 0;
        //Chico tax = 7.25, paradis = 7.75 Sac = 8.25 LV = 8.25 AZ = 8.6
    
};
// set function for my location
void SalesTax::SetLocation(string place){
    location = place;
    return;
}
//Set function for Sale Total
double SalesTax::SetSaleTotal(double total){
    
    sale_total = total;
    return sale_total;
    
}
//Set function for Sales tax
double SalesTax::SetSaleTax(double tax){
    
    sales_tax = tax;
    
    return sales_tax;
    
}
//Set function for State Tax
double SalesTax::SetSaleTaxState(double state_tax){
    
    sales_tax_state = state_tax;
    
    return sales_tax_state;
    
}
//Set function for City tax
double SalesTax::SetSaleTaxCity(double city_tax){
    
    sales_tax_city = city_tax;
    
    return sales_tax_city;
    
}
//Set function for county tax
double SalesTax::SetSaleTaxCounty(double county_tax){
    
    sales_tax_county = county_tax;
    
    return sales_tax_county;
    
}
//The Print function prints out my output variables
void SalesTax::PrintFunction(){
    cout << "Location: " << GetLocation() << endl;
    cout << "Item Price:$" << GetSaleTotal() << endl;
    cout << "Sale Tax:$" << GetSaleTax() << endl;
    cout << "State Tax:$" << GetSaleTaxState() << endl;
    cout << "County Tax:$" << GetSaleTaxCounty() << endl;
    cout << "City Tax:$" << GetSaleTaxCity() << endl;
    cout<< endl;
    
    return;
    
}
//Gets Location function
string SalesTax::GetLocation()const{
    return location;
}
// Gets Sale Total function
double SalesTax::GetSaleTotal()const{
    return sale_total;
}
//Gets sale tax function
double SalesTax::GetSaleTax()const{
    return sales_tax * sale_total;
}
//Gets state sale tax function
double SalesTax::GetSaleTaxState()const{
    return sales_tax_state * sale_total;
}
//Gets county sale tax function
double SalesTax::GetSaleTaxCounty()const{
    return sales_tax_county * sale_total;
}
//Gets city sale tax function
double SalesTax::GetSaleTaxCity()const{
    return sales_tax_city * sale_total;
}


int main() {
    
    SalesTax purchase1; // This object created for class type SalesTax
    
    purchase1.SetLocation("Chico, CA"); // Location
    purchase1.SetSaleTotal(1000); // Item price
    purchase1.SetSaleTax(0.0725); // Total sale tax
    purchase1.SetSaleTaxState(0.0625); // sale tax for the state
    purchase1.SetSaleTaxCounty(0.01); // sale tax for the county
    purchase1.SetSaleTaxCity(0);// sale tax for the city
    purchase1.PrintFunction();
    
    SalesTax purchase2; //Second object
    
    purchase2.SetLocation("Paradise, CA");
    purchase2.SetSaleTotal(1000);
    purchase2.SetSaleTax(0.075);
    purchase2.SetSaleTaxState(0.0625);
    purchase2.SetSaleTaxCounty(0.01);
    purchase2.SetSaleTaxCity(0.005);
    purchase2.PrintFunction();
    
    SalesTax purchase3; // Third object
    
    purchase3.SetLocation("Las Vegas, NV");
    purchase3.SetSaleTotal(1000);
    purchase3.SetSaleTax(0.0825);
    purchase3.SetSaleTaxState(0);
    purchase3.SetSaleTaxCounty(0);
    purchase3.SetSaleTaxCity(0);
    purchase3.PrintFunction();
    
    SalesTax purchase4; // fourth object
    
    purchase4.SetLocation("Phoenix, AZ");
    purchase4.SetSaleTotal(1000);
    purchase4.SetSaleTax(0.086);
    purchase4.SetSaleTaxState(0.056);
    purchase4.SetSaleTaxCounty(0.007);
    purchase4.SetSaleTaxCity(0.023);
    purchase4.PrintFunction();
    
    SalesTax purchase5; //Fifth object
    
    purchase5.SetLocation("Sacramento, CA");
    purchase5.SetSaleTotal(1000);
    purchase5.SetSaleTax(0.0825);
    purchase5.SetSaleTaxState(0.0625);
    purchase5.SetSaleTaxCounty(0.01);
    purchase5.SetSaleTaxCity(0.01);
    purchase5.PrintFunction();
    
    
    
    return 0;
}
/*
Location: Chico, CA
Item Price:$28.55
Sale Tax:$2.06987
State Tax:$1.78438
County Tax:$0.2855
City Tax:$0

Location: Paradise, CA
Item Price:$28.55
Sale Tax:$2.14125
State Tax:$1.78438
County Tax:$0.2855
City Tax:$0.14275

Location: Las Vegas, NV
Item Price:$28.55
Sale Tax:$2.35537
State Tax:$0
County Tax:$0
City Tax:$0

Location: Phoenix, AZ
Item Price:$28.55
Sale Tax:$2.4553
State Tax:$1.5988
County Tax:$0.19985
City Tax:$0.65665

Location: Sacramento, CA
Item Price:$28.55
Sale Tax:$2.35537
State Tax:$1.78438
County Tax:$0.2855
City Tax:$0.2855

Location: Chico, CA
Item Price:$1000
Sale Tax:$72.5
State Tax:$62.5
County Tax:$10
City Tax:$0

Location: Paradise, CA
Item Price:$1000
Sale Tax:$75
State Tax:$62.5
County Tax:$10
City Tax:$5

Location: Las Vegas, NV
Item Price:$1000
Sale Tax:$82.5
State Tax:$0
County Tax:$0
City Tax:$0

Location: Phoenix, AZ
Item Price:$1000
Sale Tax:$86
State Tax:$56
County Tax:$7
City Tax:$23

Location: Sacramento, CA
Item Price:$1000
Sale Tax:$82.5
State Tax:$62.5
County Tax:$10
City Tax:$10

*/