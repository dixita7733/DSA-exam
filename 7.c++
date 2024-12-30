// Question 7: Working with Vectors in C++
// Problem: Write a program to demonstrate the use of vectors. Perform the following operations: Add elements, access elements, modify elements, and delete an element from the vector.
// Input Example:
// Add: [10, 20, 30, 40], Remove: 30
// Output Example:
// Updated Vector: [10, 20, 40]

#include <iostream>
#include <vector>
using namespace std;

int main(){
    //create a vector
    vector<int> v3{5,2,3,5,6};

    //add elements
    cout << "All Elements: ";
    for(int i = 0; i < v3.size(); i++ ){
        cout << v3[i] << " ";
    }
    cout << endl;
    
    //access elements
    cout << "Element at index 3 = " << v3[3] << endl;
    
    //modify elements
    v3[3] = 33;
    cout << "Modify at index 3 = " << v3[3] << endl;
    
    //delete element at index 2
    v3.erase(v3.begin() + 2);

    for (auto i : v3)
        cout << i << " ";
    return 0;

}