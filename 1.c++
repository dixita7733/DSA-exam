// Question 1: Reverse an Array
// Problem: Write a function to reverse an array of integers.
// Input Example:
// Input: [1, 2, 3, 4, 5]
// Output Example:
// Output: [5, 4, 3, 2, 1]

#include <iostream>
using namespace std;

int main(){
    int size;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    int arr[size];
    
    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i] ;
    }
    
     for(int i = 0; i < size; i++){
       cout << arr[i] << " ";
    }
    cout << endl;
    
   for(int i = size - 1; i >= 0; i--){
       cout << arr[i] << " ";
    }
    
    
}