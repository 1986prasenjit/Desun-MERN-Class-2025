//! Write a C++ program that: Creates an array with these values: 15, 3, 27, 8, 19, 2, 50 Finds the smallest number in the array Prints it


#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[] = {15, 3, 27, 8, 19, 2, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "Smallest Number: " << smallest << std::endl;

    return 0;
}