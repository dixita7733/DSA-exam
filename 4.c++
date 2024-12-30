// Question 4: CRUD Operations using Class and Object
// Problem: Implement a class `Student` with attributes `id`, `name`, and `marks`. Write functions to perform
// CRUD (Create, Read, Update, Delete) operations on `Student` objects.
// Input Example:
// Add: {id: 1, name: "John", marks: 85}
// Update: id = 1, marks = 90
// Output Example:
// Updated Details: {id: 1, name: "John", marks: 90}

#include <iostream>
#include <string.h>
using namespace std;

//create a class
class Student{
private:   
    //add attributes
    int id;
    char name[100];
    int marks;
    int size;
    
    public:
    
    //create a set method
    void set(int id, char name[], int marks){
       this->id = id;
       strcpy(this->name,name);
       this->marks = marks;
    }
    
    //create a display method function
    void display(int size){
       
            cout << "Student id: " << id << endl;
            cout << "Student Name: " << name << endl;
            cout << "Student Marks: " << marks << endl;
            cout << endl;
    }
    
    // Update student details -     //create a update method function

    void update(int newId, const char newName[], int newMarks) {
        this->id = newId;
        strcpy(this->name, newName);
        this->marks = newMarks;
        cout << "Student updated successfully!" << endl;
    }

    // Delete student details - //create a delete method function
    void remove() {
        id = -1; // Mark as deleted
        strcpy(name, "");
        marks = 0;
        cout << "Student deleted successfully!" << endl;
    }
    
};

int main(){
    int size;
    
    cout << "Enter the all students number of size: ";
    cin >> size;
    
    Student sts[size]; // create an object of student class
    
    int id, marks;
    char name[100];
    
    //create loop for array of objects to call set method func
    for(int i = 0; i < size; i++){
        cout << "id: ";
        cin >> id;
        
        cout << "Name: ";
        cin >> name;
        
        cout << "Marks: ";
        cin >> marks;
        cout << endl;
        sts[i].set(id,name,marks);
    }
    
    //create loop for array of objects to call get method func
    for(int i = 0; i < size; i++){
        sts[i].display(size);
    }
    
     int choice, studentIndex;

    // CRUD Operations Menu
    do {
        cout << "\nCRUD Operations Menu:\n";
        cout << "1. Display all students\n";
        cout << "2. Update a student\n";
        cout << "3. Delete a student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // Display all students
              for(int i = 0; i < size; i++){
        sts[i].display(size);
    }
            break;

        case 2: // Update a student
            cout << "Enter the index of the student to update (1 to " << size << "): ";
            cin >> studentIndex;
            if (studentIndex < 1 || studentIndex > size ) {
                cout << "Invalid student index!" << endl;
                break;
            }

            cout << "Enter new ID: ";
            cin >> id;
            cout << "Enter new Name: ";
            cin.ignore();
            cin.getline(name, 100);
            cout << "Enter new Marks: ";
            cin >> marks;

            sts[studentIndex - 1].update(id, name, marks);
            break;

        case 3: // Delete a student
            cout << "Enter the index of the student to delete (1 to " << size << "): ";
            cin >> studentIndex;
            if (studentIndex < 1 || studentIndex > size ) {
                cout << "Invalid student index!" << endl;
                break;
            }

            sts[studentIndex - 1].remove();
            break;

        case 4: // Exit
            cout << "Exiting program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid " << endl;
        }
    } while (choice != 4);

    return 0;
}

