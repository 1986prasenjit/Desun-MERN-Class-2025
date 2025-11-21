//! Write a program to find out the largest number in an array

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int arr[] = {20,40,95,45,55,75,88};
     int size = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest Number is: " << largest << std::endl;
    return 0;
}