//! 1. Print only even numbers from 1 to 10

#include <stdio.h>


int main(){
    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0){
            printf("The Number is %d \n", i);
        };
    };
    return 0;
}