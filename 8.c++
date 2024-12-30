// Question 8: Implement Queue using Linked List
// Problem: Create a queue using a linked list and perform the following operations: Enqueue, Dequeue, and
// Display.
// Input Example:
// Enqueue: 5, 10, 15
// Dequeue: 1
// Output Example:
// Queue after operations: [10, 15]

#include <iostream>
using namespace std;

struct Node {
    //create a attribute data and next for linked list
    int data;
    Node* next;
};

//create a class queue
class Queue {
private:
    Node* top; 
    int size;  
public:
    Queue() {
        top = nullptr;
        size = 0;
    }

    ~Queue() {
        while (top != nullptr) {
            Node* temp = top;

            top = top->next;
            delete temp;
        }
        cout << "Queue deleted!" << endl;
    }

    // Push function
    void Enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        size++;
    }

    // Pop function 
    void Dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = top;
        cout << "Popped value: " << top->data << endl;
        top = top->next;
        delete temp;
        size--;
    }
        bool isEmpty() {
        return top == nullptr;
    }

    //display function
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* current = top;
        cout << "Queue elements: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

   
};

int main() {
    Queue q;
    int choice;

    do {
        cout << "\nMenu: " << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to Enqueue: ";
                cin >> value;
                q.Enqueue(value);
                break;
            }
            case 2:
                q.Dequeue();
                break;
        
            case 3:
                q.display();
                break;
          
            default:
                cout << "Invalid choice! Try again." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
