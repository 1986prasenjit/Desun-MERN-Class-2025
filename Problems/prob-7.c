//! Take two numbers and print the larger one

#include <stdio.h>

int main(){
    int numOne;
    int numTwo;
    printf("Enter num one: ");
    printf("Enter num two: ");

    scanf("%d", &numOne);
    scanf("%d", &numTwo);

    if(numOne > numTwo){
        printf("Number One is Greater");
    }else {
        printf("Number Two is Greater");
    }

    return 0;
}