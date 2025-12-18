// ** write a program that takes input of two numbers from user and perform addition, substraction, muultiplication and division **


#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum = %d\n", a + b);

    printf("Difference = %d\n", a - b);

    printf("Product = %d\n", a * b);

    if (b != 0) {
        printf("Division = %d\n", a / b);
    } else {
        printf("Division by zero is not allowed.\n");
    }   

    return 0;
}
