//! 2. Write a function that prints numbers from 1 to n but skips multiples of 3

#include <stdio.h>

int main(){
    int n;
    printf("Enter n:  ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            continue;
        }
        printf("The Number is %d \n", i);
    }
    return 0;
}