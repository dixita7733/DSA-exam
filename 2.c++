// Question 2: Find the Middle Element of a Linked List
// Problem: Implement a function to find the middle element of a singly linked list.
// Input Example:
// Input: 1 -> 2 -> 3 -> 4 -> 5
// Output Example:
// Output: 3

#include <iostream>
using namespace std;

// create a node class for linkedlist two value data and next pointer 
class node{
  public:
    int data;
    node *next;
};

int main(){
    //first create the head pointer dynamically
    node *head = NULL;
    
    head = new node();
    
    head->data = 1;
    head->next = NULL; //next null bcs next poineter not created before the head so that now define as null
    
    node *n2 = new node();
    head->next = n2;//now next is n2 bcs usko next pointer ke badme create kiya or ab head n2 ko linked kar raha hai

    n2->data = 2;
    n2->next = NULL;
    
    node *n3 = new node();
    n2->next = n3;//now next is n3 bcs usko next pointer ke badme create kiya or ab n2 -  n3 ko linked kar raha hai
    
    n3->data = 3;
    n3->next = NULL;
    
    node *n4 = new node();
    n3->next = n4;
    
    n4->data = 4;
    n4->next = NULL;
    
    node *n5 = new node();
    n4->next = n5;
        
    n5->data = 5;
    n5->next = NULL;
    
    //now create the one temporary node for display that all node connectevely temp = head bcs head next is n2 and n2 next n3 so that all are connected
    node *temp = head;
    int mid = 0;//create mid variable for find mid value
    while(temp != NULL){
        mid++; // mid++ bcs that loop work itni bar mid++ hota jayega or total value number milenge 
        cout << temp->data << " ";//temp node me data dala
        temp = temp->next; //temp ko next node pr point out karvaya
    }
    cout << endl;
    mid = mid/2;// total mid me se divide 2 hoga or uske aage ka value mid aaye is liye mid + 1
    cout << "Middle Node is: " << mid + 1;
}