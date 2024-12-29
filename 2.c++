// Question 2: Find the Middle Element of a Linked List
// Problem: Implement a function to find the middle element of a singly linked list.
// Input Example:
// Input: 1 -> 2 -> 3 -> 4 -> 5
// Output Example:
// Output: 3

#include <iostream>
using namespace std;

class node{
  public:
    int data;
    node *next;
};

int main(){
    node *head = NULL;
    
    head = new node();
    
    head->data = 1;
    head->next = NULL;
    
    node *n2 = new node();
    head->next = n2;

    n2->data = 2;
    n2->next = NULL;
    
    node *n3 = new node();
    n2->next = n3;
    
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
    
    node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


