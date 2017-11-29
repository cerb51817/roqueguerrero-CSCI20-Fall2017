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
    int Find_sum();
    int Find_max();
    int Find_min();
    int Num_even();
    int Num_odd();
    int Search();
    bool Is_sorted();
   
    private:
    int num[];
    int size;
    
};

ArrayTools::ArrayTools(int x[], int y){
  
  for (int i = 0; i < size; i++){
    
    num[i] = x[i];
    
  }
  
}

void ArrayTools::Print(){
  for (int i = 0; i < (size - 1); i++) {
    cout << num[i] << ", ";
  }
  cout << nums[size - 1] << endl;
}

int ArrayTools::Find_min(int f, int l){
  for (int i = f; i < last; i++) {
    if (num[i] < m){
    m = num[i];
    }
  }
  return m;
}
int ArrayTools::Find_max(int f, int l){
  int m = num[f];
  for(int i = f; i < l; i++){
    if(num[i] > m){
      m = nums[i];
    }
  }
  return m;
}


int main() {
    
  const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        cin>>myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    a.Print();
    cout<<"Min: "<< a.Find_min(0, 4) << endl;
    //cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    //cout<<"Sum = "<<a.Find_sum()<<endl;
    //cout<<"Search 10"<<a.Search(10)<<endl;
    //cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
/*


*/