/*
 * ThreeVariables.cpp
 *
 *  Created on: Nov 30, 2024
 *      Author: admin
 */
#include <iostream>
using namespace std;

int main() {
    int var1, var2, var3;

    // Prompt user for three integer values
    cout << "Enter three integer values:" << endl;
    cin >> var1 >> var2 >> var3;

    // Create integer pointers to dynamic memory
    int *ptr1 = new int;
    int *ptr2 = new int;
    int *ptr3 = new int;

    // Store values in dynamic memory
    *ptr1 = var1;
    *ptr2 = var2;
    *ptr3 = var3;

    // Display contents of the variables and pointers
    cout << "Variable values:" << endl;
    cout << "var1: " << var1 << ", var2: " << var2 << ", var3: " << var3 << endl;

    cout << "Pointer values:" << endl;
    cout << "*ptr1: " << *ptr1 << ", *ptr2: " << *ptr2 << ", *ptr3: " << *ptr3 << endl;

    cout << "Pointer addresses:" << endl;
    cout << "ptr1: " << ptr1 << ", ptr2: " << ptr2 << ", ptr3: " << ptr3 << endl;

    // Deallocate memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}



