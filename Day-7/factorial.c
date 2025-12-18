// ** Write a C++ program to calculate the factorial of a given number. Take a number as input. Compute its factorial using a for loop **

#include <iostream>
using namespace std;

int main() {
    int number;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }

    return 0;
}

