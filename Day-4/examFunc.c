#include <stdio.h>

int add(int a, int b){
    return a + b;
}
    
int main(){
    printf("hello Functions in C");
    int result = add(5, 10);
    printf("The sum is: %d\n", result);
    return 0;
}
