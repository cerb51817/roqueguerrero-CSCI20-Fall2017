#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/5/2017
  2.0 Assigment - Class Conversion Calculators
*/

//
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
        
    
};

void SalesTax::SetLocation(string place){
    location = place;
    return;
}
//
double SalesTax::SetSaleTotal(double total){
    
    sale_total = total;
    return sale_total;
    
}
//
double SalesTax::SetSaleTax(double tax){
    
    sales_tax = tax;
    
    return sales_tax;
    
}
//
double SalesTax::SetSaleTaxState(double state_tax){
    
    sales_tax_state = state_tax;
    
    return sales_tax_state;
    
}
double SalesTax::SetSaleTaxCity(double city_tax){
    
    sales_tax_city = city_tax;
    
    return sales_tax_city;
    
}
double SalesTax::SetSaleTaxCounty(double county_tax){
    
    sales_tax_county = county_tax;
    
    return sales_tax_county;
    
}
//
void SalesTax::PrintFunction(){
    cout << "Location: " << GetLocation() << endl;
    cout << "Item Price:$ " << GetSaleTotal() << endl;
    cout << "Sale Tax:$ " << GetSaleTax() << endl;
    cout << "State Tax:$ " << GetSaleTaxState() << endl;
    cout << "County Tax:$ " << GetSaleTaxCounty() << endl;
    cout << "City Tax:$ " << GetSaleTaxCity() << endl;
    cout<< endl;
    
    return;
    
}
string SalesTax::GetLocation()const{
    return location;
}
// 
double SalesTax::GetSaleTotal()const{
    return sale_total;
}
//
double SalesTax::GetSaleTax()const{
    return sales_tax * sale_total;
}
double SalesTax::GetSaleTaxState()const{
    return sales_tax_state * sale_total;
}

double SalesTax::GetSaleTaxCounty()const{
    return sales_tax_county * sale_total;
}
double SalesTax::GetSaleTaxCity()const{
    return sales_tax_city * sale_total;
}


int main() {
    
    SalesTax purchase1; // This object created for class type SalesTax
    
    purchase1.SetLocation("Chico, CA");
    purchase1.SetSaleTotal(28.55);
    purchase1.SetSaleTax(0.0725);
    purchase1.SetSaleTaxState(0.0625);
    purchase1.SetSaleTaxCounty(0.01);
    purchase1.SetSaleTaxCity(0);
    purchase1.PrintFunction();
    
    SalesTax purchase2;
    
    purchase2.SetLocation("Paradise, CA");
    purchase2.SetSaleTotal(28.55);
    purchase2.SetSaleTax(0.075);
    purchase2.SetSaleTaxState(0.0625);
    purchase2.SetSaleTaxCounty(0.01);
    purchase2.SetSaleTaxCity(0.005);
    purchase2.PrintFunction();
    
    SalesTax purchase3;
    
    purchase3.SetLocation("Las Vegas, NV");
    purchase3.SetSaleTotal(28.55);
    purchase3.SetSaleTax(0.0825);
    purchase3.SetSaleTaxState(0);
    purchase3.SetSaleTaxCounty(0);
    purchase3.SetSaleTaxCity(0);
    purchase3.PrintFunction();
    
    SalesTax purchase4;
    
    purchase4.SetLocation("Phoenix, AZ");
    purchase4.SetSaleTotal(28.55);
    purchase4.SetSaleTax(0.086);
    purchase4.SetSaleTaxState(0.056);
    purchase4.SetSaleTaxCounty(0.007);
    purchase4.SetSaleTaxCity(0.023);
    purchase4.PrintFunction();
    
    SalesTax purchase5;
    
    purchase5.SetLocation("Sacramento, CA");
    purchase5.SetSaleTotal(28.55);
    purchase5.SetSaleTax(0.0825);
    purchase5.SetSaleTaxState(0.0625);
    purchase5.SetSaleTaxCounty(0.01);
    purchase5.SetSaleTaxCity(0.01);
    purchase5.PrintFunction();
    
    
    
    return 0;
}
/*


*/