/*Roque Guerrero
  10/24/2017
  3.5 lab - classes and constructor
  This program will convert tempertures kelvin, fahrenheit, and celsius.
*/
 
#include<iostream>
using namespace std;

// This class will convert temperature
class TemperatureConverter {
// Class only store kelvin value and other function calculate Celsius and Fahrenheit.
    private:
    double kelvin_;
    
    public:
    void SetTempFromKelvin(double K);
    void SetTempFromCelsius(double C);
    void SetTempFromFahrenheit(double F);
    TemperatureConverter(); 
    TemperatureConverter(double K);
    
    double GetTempFromKelvin()const;
    double GetTempAsCelsius()const;
    double GetTempAsFahrenheit()const;
    void PrintTemperatures();
};

//Default construct
TemperatureConverter::TemperatureConverter(){
  kelvin_ = 0;
  
  return;
}
//Overload construct
TemperatureConverter::TemperatureConverter(double K) {
    if (K >= 0) {
        kelvin_ = K;
    }
    else
    {
        kelvin_ = 0;
    }
}

void TemperatureConverter::SetTempFromKelvin(double K){
if (K >= 0){

 kelvin_ = K;
  
  }
}

void TemperatureConverter::SetTempFromCelsius(double C){
  
  //variable to hold Celsius
  int value = 0;
  value = C + 273.15;
  
  if (value >= -273.15){
    
    kelvin_ = value;
  }
  
}

void TemperatureConverter::SetTempFromFahrenheit(double F){
  
  //Variable to hold Fahrenheit
  int value = 0;
  value = (5 * (F - 32)/9) + 273.15;
  
  if(value >= -459.67){
    kelvin_ = value;
  }
  
}

double TemperatureConverter::GetTempFromKelvin()const{
  return kelvin_;
}

double TemperatureConverter::GetTempAsCelsius()const{
  
    int C = 0;
    C = kelvin_ - 273.15;
    
    return C;
}

double TemperatureConverter::GetTempAsFahrenheit()const{
  
    int F = 0;
    F = ((kelvin_ * 9)/5 + 32);
    return F;
 }
//Print function for temperatures
void TemperatureConverter::PrintTemperatures(){
  
  cout << "Kelvin Temperature: " << GetTempFromKelvin() << endl;
  cout << "Celsius Temperature: " << GetTempAsCelsius() << endl;
  cout << "Fahrenheit Temperature: " << GetTempAsFahrenheit() << endl;
  
}

/*
Kelvin Temperature: 0
Celsius Temperature: -273
Fahrenheit Temperature: 32
Kelvin Temperature: 274
Celsius Temperature: 0
Fahrenheit Temperature: 525
400.15
Kelvin Temperature: 400.15
Celsius Temperature: 127
Fahrenheit Temperature: 752
31
Kelvin Temperature: 305
Celsius Temperature: 31
Fahrenheit Temperature: 581
523
Kelvin Temperature: 273
Celsius Temperature: 0
Fahrenheit Temperature: 523

*/