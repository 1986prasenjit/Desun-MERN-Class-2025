//! Write a C++ program that: Creates an array: 10, 20, 30, 40, 50 Prints the array in reverse order

#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40, 50};

    int reverseArr[5];

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        reverseArr[i] = arr[size - i - 1];
    }

    for(int i = 0; i < size; i++){
        cout << reverseArr[i] << " ";
    }

    return 0;
}