//! Take a number and print whether it is positive or negative

#include <stdio.h>

int main(){
    int n;
    printf("Enter Numner n:");
    scanf("%d ", &n);
    if(n < 0){
        printf("The number is Negative \n");
    }else{
        printf("The number is Positive \n");
    }
    return 0;
}