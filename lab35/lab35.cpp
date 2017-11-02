#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/14/2017
  3.5 lab - classes and constructor
  This program will convert tempertures kelvin, fahrenheit, and celsius.
  Zachary Rust helped me with this lab.
*/
//This class is to convert the temperatures.
class TemperatureConverter {
    private:
    
    double kelvin_;
    
    public:
    
    TemperatureConverter();
    TemperatureConverter(double k);
    
    void SetTempFromKelvin(double k);
    void SetTempFromCelsius(double c);
    void SetTempFromFahrenheit(double f);
    
    double GetTempFromKelvin();
    double GetTempAsCelsius();
    double GetTempAsFahrenheit();
    
    void PrintTemperatures();
};

TemperatureConverter:: TemperatureConverter() {
    kelvin_ = 0;
}

TemperatureConverter:: TemperatureConverter(double k) {
    if (k >= 0) {
        kelvin_ = k;
    }
    else {
        kelvin_ = 0;
    }
}

void TemperatureConverter:: SetTempFromKelvin(double k) {
    if (k >= 0) {
        kelvin_ = k;
    }
}

double TemperatureConverter:: GetTempFromKelvin() {
    return kelvin_;
}

void TemperatureConverter:: SetTempFromCelsius(double c) {
    //This variable hold kelvin value
    int v = 0;
    v = c + 273.15;
    if (v >= 273.15) {
        kelvin_ = v;
    }
}

double TemperatureConverter:: GetTempAsCelsius() {
    //This variable hold celsisus value
    int c = 0;
    c = kelvin_ - 273.15;
    return c;
}

void TemperatureConverter:: SetTempFromFahrenheit(double f) {
    //This variable hold the fahrenheit value
    int v = 0;
    v = (5 * (f - 32)/9) + 273.15;
    if (v >= - 459.67) {
        kelvin_ = v;
    }
}

double TemperatureConverter:: GetTempAsFahrenheit() {
    //variable to hold farenheit
    int f = 0;
    f = ((kelvin_ * 9)/5 + 32);
    return f;
}

void TemperatureConverter:: PrintTemperatures() {
    cout << "Temperatures:" << endl;
    cout << "Kelvin: " << kelvin_ << endl;
    cout << "Celcius: " << GetTempAsCelsius() << endl;
    cout << "Farenheit: " << GetTempAsFahrenheit() << endl;
}

/*
Temperatures:
Kelvin: 0
Celcius: -273
Farenheit: 32
Temperatures:
Kelvin: 274
Celcius: 0
Farenheit: 525
400.15
Temperatures:
Kelvin: 400.15
Celcius: 127
Farenheit: 752
31
Temperatures:
Kelvin: 305
Celcius: 31
Farenheit: 581
523
Temperatures:
Kelvin: 273
Celcius: 0
Farenheit: 523

*/