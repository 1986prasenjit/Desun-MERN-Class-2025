//! Write a C++ program that: Creates an array with these values: 5, 12, 7, 20, 33, 42, 9. Counts how many numbers are even Prints the count.

#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[] = {5, 12, 7, 20, 33, 42, 9};

    int size = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }

    cout << "Count is: " << count << std:endl;
    return 0;
}