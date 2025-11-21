//! Write a C++ program that: Creates an array: 12, 67, 45, 90, 23, 55, 78 Counts how many numbers are greater than 50 Prints the count

#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[] = {12, 67, 45, 90, 23, 55, 78};

    int count = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        if(arr[i] > 50){
            count++;
        }
    }

    cout << "Count is: " << count << std::endl;

    return 0;
}