#include <iostream>
using namespace std;


void getNumbers(int &A1, int &A2) {
    cout << "Enter Num 1: ";
    cin >> A1;
    cout << "Enter Num 2: ";
    cin >> A2;
}

void Add() {
    int A1, A2, Sum;
    getNumbers(A1, A2);
    Sum = A1 + A2;
    cout << "The Sum of Num 1 and Num 2 is: " << Sum << endl;
}

void Subtract() {
    int A1, A2, Difference;
    getNumbers(A1, A2);
    Difference = A1 - A2;
    cout << "The Difference of Num 1 and Num 2 is: " << Difference << endl;
}

void Multiply() {
    int A1, A2, Product;
    getNumbers(A1, A2);
    Product = A1 * A2;
    cout << "The Product of Num 1 and Num 2 is: " << Product << endl;
}

void Divide() {
    int A1, A2;
    float Quotient;
    getNumbers(A1, A2);

    if (A2 != 0) {
        Quotient = static_cast<float>(A1) / A2;
        cout << "The Quotient of Num 1 and Num 2 is: " << Quotient << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

void Mod() {
    int A1, A2, Remainder;
    getNumbers(A1, A2);

    if (A2 != 0) {
        Remainder = A1 % A2;
        cout << "The Remainder of Num 1 divided by Num 2 is: " << Remainder << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

int main() {
    int choice;

    cout << "Enter 1 For Addition" << endl;
    cout << "Enter 2 For Subtraction" << endl;
    cout << "Enter 3 For Multiplication" << endl;
    cout << "Enter 4 For Division" << endl;
    cout << "Enter 5 For Mod" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            Add();
            break;
        case 2:
            Subtract();
            break;
        case 3:
            Multiply();
            break;
        case 4:
            Divide();
            break;
        case 5:
            Mod();
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
    }

    return 0;
}
