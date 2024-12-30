// Question 10: Create a To-Do List Application using Class
// Problem: Implement a class `ToDoList` that supports adding tasks, viewing all tasks, marking a task as
// completed, and deleting tasks. Use a vector to store tasks.
// Input Example:
// Add: "Complete assignment", "Attend meeting"
// Mark Complete: 1
// Output Example:
// Remaining Tasks: "Attend meeting"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

//create a todo list class
class ToDoList {
public:
    //create a vector first for data and secound for if data is not available otherwise deleted so defin o or 1 so boolean used here
    vector<string> v3{"Complete assignment", "Attend meeting", "Make Question Papers"};
    vector<bool> completed{false, false, false}; // Track completion status

    //insert function
    void addingtask(int innum, const string& invalue) {
        if (innum < 0 || innum > v3.size()) {
            cout << "Invalid index for insertion!" << endl;
            return;
        }

        // Shift elements to the right
        v3.push_back("");
        completed.push_back(false); // Add new completion status
        for (int i = v3.size() - 1; i > innum; --i) {
            v3[i] = v3[i - 1];
            completed[i] = completed[i - 1];
        }

        // Insert the new task
        v3[innum] = invalue;
        completed[innum] = false;

        // View the updated list
        viewtasks();
    }

  //view function
    void viewtasks() {
        cout << "All Tasks: " << endl;
        for (int i = 0; i < v3.size(); i++) {
            cout << i << ": " << v3[i];
            if (completed[i]) {
                cout << " [Completed]";
            }
            cout << endl;
        }
        cout << endl;
    }

   // completed task function
    void markcompletedtask(int upnum) {
        if (upnum < 0 || upnum >= v3.size()) {
            cout << "Invalid index for update!" << endl;
            return;
        }

        completed[upnum] = true;
        cout << "Task marked as completed!" << endl;
        viewtasks();
    }

   //delete function
    void deletingtask(int delp) {
        if (delp < 0 || delp >= v3.size()) {
            cout << "Invalid index for deletion!" << endl;
            return;
        }

        // Shift elements to the left
        for (int i = delp; i < v3.size() - 1; ++i) {
            v3[i] = v3[i + 1];
            completed[i] = completed[i + 1];
        }

        // Remove the last element
        v3.pop_back();
        completed.pop_back();

        cout << "Task deleted successfully!" << endl;
        viewtasks();
    }

   //jitne task nahi hua uska function matlab us task me bool true nhi hua hoga
    void remainingtask() {
        cout << "Remaining Tasks: " << endl;
        for (int i = 0; i < v3.size(); i++) {
            if (!completed[i]) { //here completed bool is not true so display that all task
                cout << i << ": " << v3[i] << endl;
            }
        }
    }
};

int main() {
    //create an object
    ToDoList obj;

    //menu list
    cout << "1: Insert Task" << endl;
    cout << "2: View Tasks" << endl;
    cout << "3: Mark Task as Completed" << endl;
    cout << "4: Delete Task" << endl;
    cout << "5: View Remaining Tasks" << endl;
    cout << "0: Exit" << endl;

    int selection;

    do {
        cout << "Enter your choice: ";
        cin >> selection;

        switch (selection) {
            case 1: {
                int innum;
                string invalue;

                cout << "Enter the index for insertion: ";
                cin >> innum;

                cout << "Enter the task to insert: ";
                cin >> invalue;

                //call function of addingtask
                obj.addingtask(innum, invalue);
                break;
            }

            case 2:
                //call function of view task
                obj.viewtasks();
                break;

            case 3: {
                int upnum;

                cout << "Enter the index of the task to mark as completed: ";
                cin >> upnum;

                //call function of completed task
                obj.markcompletedtask(upnum);
                break;
            }

            case 4: {
                int delp;

                cout << "Enter the index to delete: ";
                cin >> delp;

               //call function of deleteing task
                obj.deletingtask(delp);
                break;
            }

            case 5:
                //call function of remaining task
                obj.remainingtask();
                break;

            case 0:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid selection!" << endl;
        }
    } while (selection != 0);

    return 0;
}
