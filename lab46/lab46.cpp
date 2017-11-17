#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>

using namespace std;
/*Roque Guerrero
  11/16/2017
  4.6 lab - File Input/Output
  This program read a student's grades and output an HTML page.
*/

int main() {
    
  string student_name[3][3];
    string student_grades[5][2];
    
    int i = 0;  //row variable
    int x = 0;  //column variable
    
    ifstream inFS;
    
    inFS.open("input.txt");
    
    if (!inFS.is_open()) {
        cout << "Error loading file." << endl;
        return 1;
    }
    
    for (i = 0; i < 3; i++) {
        for (x = 0; x < 3; x++) {
            inFS >> student_name[i][x];
            cout << student_name[i][x] << " ";
        }
        for (int r = 0; r < 5; r++) {
            for (int c = 0; c < 2; c++) {
                inFS >> student_grades[r][c];
                cout << student_grades[r][c] << " ";
            }
        }
        cout << endl;
    }
    
    inFS.close();
}  


/*


*/