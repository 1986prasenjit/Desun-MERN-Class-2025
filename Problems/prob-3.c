//! Find the factorial of a number

#include <stdio.h>

int factorial(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int factNum = 1;
    for(int i = 1; i <= n; i++){
        factNum *= i;
    }
    return factNum;
}

int main(){
    int result = factorial();
    printf("The number is %d \n", result);
    return 0;
}