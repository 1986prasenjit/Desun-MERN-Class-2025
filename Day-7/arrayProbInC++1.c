//! Write a C++ program that Creates an array of 5 integers Stores: 10, 20, 30, 40, 50 Calculates the sumPrints the result


#include<iostream>
#include<string>
unsing namespace std;

int main(){

    int arr[5] = {10,20,30,40,50};

    int totalSum = 0;

    for(int i = 0; i < 5; i++){
        totalSum += arr[i];
    }

    cout << totalSum << std::endl;

    return 0;
}