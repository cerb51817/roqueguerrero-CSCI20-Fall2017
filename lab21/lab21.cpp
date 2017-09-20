#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/*Roque Guerrero
  9/19/2017
  2.1 Lab - Calling Functions
*/



int main() {
    
    //variables
    double wind_speed = 0;
    double temp_f = 0;
    double old_style_wind_chill = 0;
    double new_style_wind_chill = 0;
    double difference = 0;
    
    //input variables
    cout << "Enter temperature: ";
    cin >> temp_f;
    cout << endl;
    
    cout << "Enter windspeed: ";
    cin >> wind_speed;
    cout << endl;
    
    //This are the formulas to calculate wind chill
    old_style_wind_chill = 0.081 * (3.71 * sqrt(wind_speed) + 5.81 - 0.25 * wind_speed)*(temp_f - 91.4) + 91.4;
    new_style_wind_chill = 35.74 + 0.6215 * temp_f - 35.75 * (pow(wind_speed,0.16)) + 0.4275 * temp_f * pow(wind_speed,0.16);
    difference = old_style_wind_chill - new_style_wind_chill;
    
    //output variables
    cout << "Wind Speed: " << wind_speed << endl;
    cout << "Old Formula: " << old_style_wind_chill << endl;
    cout << "New Formula: " << new_style_wind_chill << endl;
    cout << "Difference: " << difference << endl;
    
    
    
    
  
    return 0;
}
/*

Wind Speed: 4
Old Formula: 30.5753
New Formula: 25.767
Difference: 4.8083

Wind Speed: 10
Old Formula: 27.8601
New Formula: 32.713
Difference: -4.85286

Old Formula: 98.7538
New Formula: 105.711
Difference: -6.95719

*/