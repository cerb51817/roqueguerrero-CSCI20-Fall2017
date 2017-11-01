#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
/*Roque Guerrero
  10/31/2017
  4.1 lab - Single Arrays
  This program will print the order of arrays, find the minimum, find the max, find the sum, find the even/odd, and sort the array.
*/

class ArrayTools {
    
    public:
    ArrayTools(int x[], int y);
    
    void Print();
    void Find_sum();
    void Find_max();
    void Find_min();
    void Search();
    void Is_sorted();
   
    private:
    int num[];
    
};

ArrayTools::ArrayTools(int x[], int y){
  
  for (int i = 0; i < y; i++){
    
    num[i] = x[i];
    
  }
  
}

void ArrayTools::Print(){
  for (int i = 0; i < 10; i++)
  {
    cout << num[i] << ", ";
  }
  cout << endl;
}

void ArrayTools::Find_min(){
  for (int i = 0; i < 10; i++) {
    if (num[i]){
    cout << num[i] << ", ";
    }
  }
  cout << endl;
}
  


int main() {
    
  const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    //cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    //cout<<"Sum = "<<a.Find_sum()<<endl;
    //cout<<"Search 10"<<a.Search(10)<<endl;
    //cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
/*


*/