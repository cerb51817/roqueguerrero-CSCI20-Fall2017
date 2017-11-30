#include <iostream>
#include <string>


using namespace std;
/*Roque Guerrero
  10/31/2017
  4.1 lab - Single Arrays
  This program will print the order of arrays, find the minimum, find the max,
  find the sum, find the even/odd, and sort the array.
  Zachary Rust helped me with this lab
*/
//Array tools class
class ArrayTools{
    private:
    int size;
    int num[];

    public:
    ArrayTools(int n[], int s);
    
    void Print ();
    int Find_min (int f, int l);
    int Find_max (int f, int l);
    int Find_sum ();
    int Num_even();
    int Num_odd();
    int Search (int s);
    bool Is_sorted ();
};

ArrayTools::ArrayTools (int n[], int s){
    size = s;
    for (int i = 0; i < size; i++){
        num[i] = n[i];
    }
}
// This is the print function
void ArrayTools::Print (){
    for (int i = 0; i < (size-1); i++){
        cout << num[i] << ", ";
    }
    cout << num[size - 1] << endl;
}
//This function find the minimum value
int ArrayTools::Find_min (int f, int l){
    int m = num[f];
    for (int i = f; i < l; i++){
        if (num[i] < m){
            m = num[i];
        }
    }
    return m;
}
//This function find the max value
int ArrayTools::Find_max (int f, int l){
    int m = num[f];
    for (int i = f; i < l; i++){
        if (num[i] > m){
            m = num[i];
        }
    }
    return m;
}
//This function find the sum value 
int ArrayTools::Find_sum (){
    int m = 0;
    for (int i = 0; i < size; i++){
        m += num[i];
    }
    
    return m;
}

//This function find the even numbers
int ArrayTools::Num_even(){
    int even = 0;
    for (int i = 0; i < size; i++){
        if (num[i] % 2 == 0){
            even++;
        }
    }
    
    return even;
}
//This function find the odd numbers
int ArrayTools::Num_odd(){
    int odd = 0;
    for (int i = 0; i < size; i++){
        if (num[i]%2 == 1){
            odd++;
        }
    }
    
    return odd;
}
//This function searches for the amount of values entered
int ArrayTools::Search (int s){
    int match = 0;
    for (int i = 0; i < size; i++){
        if (num[i] == s){
            match = i + 1;
            return match;
        }
    }
    return -1;
}
//This function sorts the values
bool ArrayTools::Is_sorted(){
    int temp = num[0];
    for (int i = 0; i < size; i++){
        if (!temp <= num[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    const int SIZE = 10;
    int my_array[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>my_array[i];
    }
    
    ArrayTools a(my_array,SIZE);
    a.Print();
    cout << "Min: " << a.Find_min(0, 4) << endl;
    cout << "Max: " << a.Find_max(5, 10) << endl;
    cout << "Sum: " << a.Find_sum() << endl;
    cout << "Even: " << a.Num_even() << endl;
    cout << "Odd: " << a.Num_odd() << endl;
    cout << "Search: " << a.Search(10) << endl;
    cout << "Sorted: " << a.Is_sorted() << endl;
    
    return 0;
}
/*
1
2
3
4
5
6
7
8
9
10
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
Min: 1
Max: 10
Sum: 55
Even: 5
Odd: 5
Search: 10
Sorted: 0
*/