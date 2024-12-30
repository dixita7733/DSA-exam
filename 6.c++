// Question 6: Sort an Array using Merge Sort
// Problem: Write a program to sort an array using the merge sort algorithm.
// Input Example:
// Input: [38, 27, 43, 3, 9]
// Output Example:
// Output: [3, 9, 27, 38, 43]

#include <iostream>
using namespace std;

//create a merge function for two halves
void merge(int arr[], int low , int mid, int high){
    int leftsize = mid - low + 1; //size of left array 
    int rightsize = high - mid;//size of right array 
    
    int lefta[leftsize];//create a left array
    int righta[rightsize];//create a right array
    
    //left copy of all element
    
    for(int i = 0; i < leftsize; i++){
        lefta[i] = arr[low + i];
    }
    
    //right copy of all element
    for(int i = 0; i < rightsize; i++){
        righta[i] = arr[mid+1+i];
    }
    
    int i = 0;
    int j = 0;
    int k = low;
    while(i < leftsize && j < rightsize){
        if(lefta[i] < righta[j]){//agar lefta ki value righta se choti hai
            arr[k] = lefta[i];// to use first create array me move kardo
            i++;//or i++ karao
        }
        else{
            arr[k] = righta[j];//agar lefta bada hai to righta ki value ko move kardo
            j++;
        }
        k++;//next position pr move hoga
    }
    
    //agar koy elements move nhi hua use move karao jo bach gaye ho
    while(i < leftsize){
        arr[k] = lefta[i];
        i++;
        k++;
    }
    
    
    while(j < rightsize){
        arr[k] = righta[j];
        j++;
        k++;
    }
}


//split function for divide array
void split(int arr[], int low, int high){
    
     if(low >= high) {
        return; // Base case: Only one element
    }
    
    int mid = (low+high)/2; // divide array in two part
    
    //split function call recursively 
    split(arr,low,mid); //left half
    split(arr,mid+1,high);//right half
    
    //merge function call here for merge that all element
    merge(arr, low, mid, high);
    
}

int main(){
    int size;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    //create original array
    int arr[size];
    
    //fetch data
    for(int i = 0; i < size; i++){
        cout << "Arr[" << i << "]: ";
        cin >> arr[i];
    }
    cout << endl;
    
    //display original array
        cout << "Original array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //call split function
    split(arr,0,size-1);
    
    cout << "Sorted array: ";
    
    //display sorted array
    for(int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
}