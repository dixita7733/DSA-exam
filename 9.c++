// Question 9: Create a Class for Matrix Operations
// Problem: Implement a class `Matrix` with member functions for addition, subtraction, and multiplication of
// matrices. Use proper constructors to initialize the matrices.
// Input Example:
// Matrix A:
// 1 2
// 3 4
// Matrix B:
// 5 6
// 7 8
// Output Example:
// Matrix Addition Result:
// 6 8
// 10 12

#include <iostream>
using namespace std;

class Matrix {
private:
    int** arr1;  // create pointer for matrix A
    int** arr2;  // ctreate pointer for matrix B
    int size;    // size

public:
    // Constructor to initialize matrices
    Matrix(int size) {
        this->size = size;

        // Dynamically allocate memory for the matrices
        arr1 = new int*[size];//new operator use hoga bcs dynamic hai
        arr2 = new int*[size];

        //dynamic array for all elements size define and define the space
        for (int i = 0; i < size; i++) {
            arr1[i] = new int[size];
            arr2[i] = new int[size];
        }

        // Input values for Matrix A
        cout << "Matrix A:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "a[" << i << "][" << j << "]: ";
                cin >> arr1[i][j];
            }
        }

        // Input values for Matrix B
        cout << "Matrix B:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << "b[" << i << "][" << j << "]: ";
                cin >> arr2[i][j];
            }
        }
    }

    // Function for addition
    void addition() {
        cout << "Matrix Addition Result:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << arr1[i][j] + arr2[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    
    
    // Function for subtraction 
    void subtraction() {
        cout << "Matrix Subtraction Result:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << - arr2[i][j] - arr1[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    // Function for multiplication
    void multiplication() {
        cout << "Matrix Addition Result:" << endl;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cout << arr1[i][j] * arr2[i][j] << " ";
            }
            cout << endl;
        }
    }
    
     // Destructor to free dynamically allocated memory
    ~Matrix() {
        delete[] arr1;
        delete[] arr2;
    }

   
};

int main() {
    int size;

    cout << "Enter the size of the matrix (rows and columns): ";
    cin >> size;

    Matrix matrix1(size);  // Create Matrix object
    matrix1.addition();// function call for addition
    
    matrix1.subtraction();// function call for subtraction
    
    matrix1.multiplication();// function call for multiplication

    return 0;
}
