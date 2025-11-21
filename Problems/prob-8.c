//! Count numbers from 1 to n divisible by 2


#include <stdio.h>

int main(){
    int n;
    int count = 0;
    
    printf("enter number n: ");

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            count++;
        }
    }
    printf("Count value is %d", count);
    return 0;

}