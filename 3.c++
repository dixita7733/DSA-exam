// Question 3: Implement Stack using Array
// Problem: Create a stack using an array and perform the following operations: Push, Pop, and Display.
// Input Example:
// Push: 10, 20, 30
// Pop: 1 (Remove the top element)
// Output Example:
// Stack after operations: [10, 20]

#include <iostream>
using namespace std;

//first create the stack class
class stack{
private:
  // all class property stack define top so use here top
   int capacity;
   int top;
   int *arr;
   
public:
    //create constructor to define the all property
    stack(int capacity){
       this->capacity =  capacity;
       top = -1;
       arr = new int(capacity);
    }
    
    // //distructor
     ~stack(){
        delete arr;
        cout << "Deleted !" << endl;
     }
    
    //create the push function
    int push(int value);

    //create the pop function   
    int pop();
    
    //create the display function
    int isDisplay();
    
    
};

    //initialize the push function
    int stack::push(int value){ //here scope resolution operator use bcs push is member function
        if(top >= capacity - 1){ //capacity - 1 bcs array 0 se start hota hai agar top capasity - 1 se bada hai to wo overflow hoga kyuki uski capacity utni hi define hai
            cout << "stack overflow" << endl;
        }
        else{ // agar nahi hai to
            top++; //top++ hoga 
            arr[top] = value; //first time arr[0] = value then firse top++ agar nhi hai to or fir arr[1] aise hi push hoga
        }
    }
    
    //initialize the pop function
    int stack::pop(){//here scope resolution operator use bcs pop is member function
        if(top == -1){//agar top -1 hi hai matlab abhi usme koy element nahi hai wo empty hai
            cout << "stack Empty !" << endl;
        }
        else{//agar hai to ham kuch delete kar sakte hai 
            cout << "Popped stack = " << arr[top] << endl; 
            top--;//top-- ho jayega matlab usme se itni size kam ho jayegi
        }
    }

    //initialize the display function
    int stack::isDisplay(){//here scope resolution operator use bcs display is member function
          if(top == -1){//agar top -1 hi hai matlab abhi usme koy element nahi hai wo empty hai
            cout << "stack Empty !" << endl;
        }
        else{//loop use for display all element
        for(int i = 0; i <= top ; i++){
            cout << arr[i] << " " << endl;
        }
        }
    }

    

int main(){
    
    int capacity, user;
    
    cout << "Enter the capacity of stack = " ;
    cin >> capacity;
    stack s(capacity);//create stack s using class stack
    
    do{
        
        //all menu define here
        cout << "Menu: " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. isDisplay" << endl;
        cout << "Choose any one operation: " ;
        cin >> user;
        
        switch(user){
            case 1:
             int value;
             cout << "Enter the value: " ;
             cin >> value;
             
            s.push(value);//call the push function
            break;
            
            case 2:
            s.pop();//call the pop function
            break;
            
            case 3:
            s.isDisplay();//call the display function
            break;
            
            default:
            break;
        }
        
    }while(user != 0);
};