// Question 5: Use of Constructors in C++
// Problem: Implement a class `Rectangle` with attributes `length` and `breadth`. Use a parameterized
// constructor to initialize the attributes and calculate the area of the rectangle.
// Input Example:
// Length: 5, Breadth: 10
// Output Example:
// Area: 50

#include <iostream>
using namespace std;

//first create the class rectangle 
class Rectangle{
    //add property for rectangle in publically
public:
    int length;
    int breadth;
    
    //create a constructor for length and breadth
    Rectangle(int length, int breadth){
           
        this->length = length;//5
        this->breadth = breadth;//10
        cout << "Area of rectangle is: " << length * breadth << endl; // 50  //multiplication operator use  for calculate the area of rectangle 

    }
};

int main(){
    int length, breadth;
    cout << "Enter the length of rectangle: ";
    cin >> length;

    cout << "Enter the breadth of rectangle: ";
    cin >> breadth;
    //create an object and that is paramatrized constructor so use here length and breadth 
    Rectangle rec1(length, breadth);
}