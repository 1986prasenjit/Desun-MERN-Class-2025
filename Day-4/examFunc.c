#include <stdio.h>


//!Functions in C language 
/* 
    - A function is a block of code that performs a specific task.
    - It helps in code reusability and modular programming.
    - Functions can take inputs (parameters) and can return outputs (return values).
    - The general syntax of a function in C is:
        return_type function_name(parameter_list) {
            // function body
        }
        
        int add(int a, int b){
            return a + b;
        }
        
        
        int main(){
            printf("hello Functions in C");
            int result = add(5, 10);
            printf("The sum is: %d\n", result);
            return 0;
        }
        */


//! If else condition in C 

/*If else block in programming help us to take decisions based on our programming logic and provide us the output If else can be chain up with if or elseif or else  
    Syntax:
        if(condition){
            // code to be executed if condition is true
        } else {
            // code to be executed if condition is false
        }


#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 18){
        printf("You cannot Vote\n");
    } else {
        printf("You are eligible to vote\n");
    }

    return 0;
}
    

#include <stdio.h>

int main() {
    int age = 18;

    switch (age >= 18) {  
        case 0:
            printf("You cannot Vote\n");
            break;
        case 1:
            printf("You are eligible to vote\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}
*/
/*Switch case in C language 
    - Switch case is a control statement that allows a variable to be tested for equality against a list of values.
    - Each value is called a case, and the variable being switched on is checked for each case.
    - It is often used as an alternative to multiple if-else statements when dealing with a single variable.
    - The general syntax of a switch case in C is:
        switch(expression) {
            case value1:
                // code to be executed if expression equals value1
                break;
            case value2:
                // code to be executed if expression equals value2
                break;
            ...
            default:
                // code to be executed if expression doesn't match any case
        }


#include <stdio.h>

int main() {
    int choice;

    printf("1. Start\n");
    printf("2. Stop\n");
    printf("3. Pause\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("System starting...\n");
            break;

        case 2:
            printf("System stopping...\n");
            break;

        case 3:
            printf("System paused\n");
            break;

        default:
            printf("Invalid choice. Please select 1, 2 or 3.\n");
    }

    return 0;
}
*/



//for(initialaziion, condition, increament){
// body
//}


#include <stdio.h>

int main() {
    int num; 
    printf("enter ur num: ");
    scanf("%d", &num);
    int i = 1;

    while(i <= num){
        printf("Your number is %d \n", i);
        i++;
    }

    return 0;
}
















