//! Write a C++ program that: Creates an array: 10, 55, 23, 78, 64, 91, 47 Finds the second largest number Prints it

#include<iostream>
#include<string>
#include <climits>
using namespace std;

int main(){
    int arr[] = {10, 55, 23, 78, 64, 91, 47};

    int largest = arr[0];
    int secondLargest = INT_MIN;
    int size = sizeof(arr) / sizeof(arr[0]);

    //find the largest
    for(int i = 0; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    //find second largest
    for(int i = 0; i < size; i++){
        if(arr[i] >  secondLargest && arr[i] < largest){
            secondLargest = arr[i];
        }
    }
    cout << "Second Largest Number is: " << secondLargest << std::endl;
     return 0;

}