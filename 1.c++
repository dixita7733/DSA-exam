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
    
    // create a loop for fetch array all data 
    for(int i = 0; i < size; i++){
        cout << "arr[" << i << "]: ";
        cin >> arr[i] ;
    }
    
    //create a loop for display that all elements of array
     for(int i = 0; i < size; i++){
       cout << arr[i] << " ";
    }
    cout << endl;
    
    //reverse array 
    //if array is 1 2 3 4 5 so first use 5 to 1 here use the decrement operator for decrese the array element so that work as 5 4 3 2 1
   for(int i = size - 1; i >= 0; i--){ 
       cout << arr[i] << " ";
    }
    
    
}