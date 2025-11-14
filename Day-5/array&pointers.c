//Array in C language
/* 
    - An array is a collection of elements of the same type stored in contiguous memory locations.
    - It allows you to store multiple values in a single variable, making it easier to manage and manipulate data.
    - Arrays can be one-dimensional (like a list) or multi-dimensional (like a table).
    - The general syntax for declaring an array in C is:
        data_type array_name[array_size];
*/  
    //! Here we are using arr[5] where we can store only 5 elements in an array
// #include <stdio.h>
// int main() {
//     int numbers[5]= {10,20,30,40,50}; // Declare an array of integers with size 5

//     // Print the elements of the array
//     for(int i = 0; i < 5; i++) {
//         printf("Element at index %d: %d\n", i, numbers[i]);
//     }
//     return 0;
// }

 //! Here we are using arr[] where we can store whatever length we want elements in an array

 /* 
#include <stdio.h>

int main(){
    int number[] = {10,20,30,40,50};

    for(int i = 0; i < 6; i++){
        printf("Element at index %d  is %d\n", i, number[i]);
    }
    return 0;
}
*/

//!codes/01_array_basics.c
/* 01_array_basics.c
 * Simple array declaration, initialization and printing using sizeof to get length.
 * Compile: gcc 01_array_basics.c -o 01_array_basics
 * Run: ./01_array_basics
 #include <stdio.h>
 
 int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    for (int i = 0; i < size; i++) {
        printf("Element at index %d is %d\n", i, numbers[i]);
    }
    
    return 0;
}
*/

//!02_print_with_pointer.c
/* 02_print_with_pointer.c
 * Printing an array using a pointer and pointer arithmetic.
 * Demonstrates that numbers[i] == *(p + i)
 * Compile: gcc 02_print_with_pointer.c -o 02_print_with_pointer
 * Run: ./02_print_with_pointer
 #include <stdio.h>
 
 int main(void) {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int *p = numbers; // points to first element
    
    printf("Using array indexing:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\nUsing pointer arithmetic:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n\nUsing pointer as loop variable:\n");
    for (int *q = numbers; q < numbers + size; q++) {
        printf("%d ", *q);
    }
    printf("\n");
    
    return 0;
}
*/

//!03_pointer_arithmetic.c
/* 03_pointer_arithmetic.c
 * Shows p, p+1, *(p+2) examples
 * Compile: gcc 03_pointer_arithmetic.c -o 03_pointer_arithmetic
 * Run: ./03_pointer_arithmetic
 #include <stdio.h>
 
 int main(void) {
    int arr[] = {5, 10, 15, 20};
    int *p = arr;
    
    printf("Value at arr[0] = %d\n", arr[0]);
    printf("p points to arr[0], *p = %d\n", *p);
    printf("p + 1 is an address; *(p + 1) = %d (arr[1])\n", *(p + 1));
    printf("*(p + 2) = %d (arr[2])\n", *(p + 2));
    
    return 0;
}
*/

//!04_increment_pointer.c
/* 04_increment_pointer.c
 * Demonstrates pointer increment p++ and its effects.
 * Compile: gcc 04_increment_pointer.c -o 04_increment_pointer
 * Run: ./04_increment_pointer
 #include <stdio.h>
 
 int main(void) {
    int arr[] = {3, 6, 9, 12};
    int *p = arr;
    
    printf("Initially *p = %d (index 0)\n", *p);
    p++; // move to next element
    printf("After p++, *p = %d (index 1)\n", *p);
    p++; // move again
    printf("After another p++, *p = %d (index 2)\n", *p);
    
    return 0;
}
*/

//!05_out_of_bounds_demo.c
/* 05_out_of_bounds_demo.c
 * Demonstrates undefined behavior when accessing out-of-bounds.
 * WARNING: reading/writing out-of-bounds is undefined behavior. Do not rely on results.
 * This demo is intentionally harmless (only reads) but results vary by system.
 *
 * Compile: gcc 05_out_of_bounds_demo.c -o 05_out_of_bounds_demo
 * Run: ./05_out_of_bounds_demo
 #include <stdio.h>
 
 int main(void) {
    int number[] = {10, 20, 30, 40, 50};
    int size = sizeof(number) / sizeof(number[0]);
    
    for (int i = 0; i <= size; i++) { // note: <= size steps out-of-bounds at i == size
    printf("Element at index %d is %d\n", i, number[i]);
}

printf("\nNote: index %d is out-of-bounds for this array. Behavior is undefined and may differ each run.\n", size);
return 0;
}
*/



/* 06_sizeof_length.c
 * Utilities: compute array length with sizeof.
 * Works only for arrays, not pointers passed to functions.
 * Compile: gcc 06_sizeof_length.c -o 06_sizeof_length
 * Run: ./06_sizeof_length
 #include <stdio.h>
 
 int main(void) {
    int nums[4] = {1, 2, 3, 4};
    printf("sizeof(nums) = %zu bytes\n", sizeof(nums));
    printf("sizeof(nums[0]) = %zu bytes\n", sizeof(nums[0]));
    printf("Number of elements = %zu\n", sizeof(nums) / sizeof(nums[0]));
    
    int *p = nums;
    printf("\nBut if we use a pointer:\n");
    printf("sizeof(p) = %zu bytes (size of pointer, not the array)\n", sizeof(p));
    printf("You cannot use sizeof(p) to get array length when p is a pointer.\n");
    
    return 0;
}
*/

//!07_dynamic_vector.c
/* 07_dynamic_vector.c
 * Simple "vector-like" dynamic array using malloc and realloc.
 * Demonstrates push_back behavior.
 *
 * Compile: gcc 07_dynamic_vector.c -o 07_dynamic_vector
 * Run: ./07_dynamic_vector
 #include <stdio.h>
 #include <stdlib.h>
 
 int main(void) {
    int capacity = 2;
    int size = 0;
    int *data = malloc(capacity * sizeof(int));
    if (data == NULL) return 1;

    // push some values
    for (int v = 10; v <= 60; v += 10) {
        if (size >= capacity) {
            capacity *= 2;
            int *tmp = realloc(data, capacity * sizeof(int));
            if (tmp == NULL) {
                free(data);
                return 1;
            }
            data = tmp;
        }
        data[size++] = v;
    }
    
    printf("Vector contents (size=%d, capacity=%d):\n", size, capacity);
    for (int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    free(data);
    return 0;
}
*/

//!08_struct_mixed.c
/* 08_struct_mixed.c
 * Using a struct to store mixed types, then having an array of that struct.
 * Compile: gcc 08_struct_mixed.c -o 08_struct_mixed
 * Run: ./08_struct_mixed
 #include <stdio.h>
 
 struct Data {
    int id;
    char name[20];
    float score;
};

int main(void) {
    struct Data arr[] = {
        {1, "Alice", 95.5},
        {2, "Bob", 88.0}
    };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++) {
        printf("id=%d, name=%s, score=%.1f\n", arr[i].id, arr[i].name, arr[i].score);
    }
    
    return 0;
}
*/


//!09_array_init_variants.c
/* 09_array_init_variants.c
 * Shows different valid/invalid array initializations.
 * Compile: gcc 09_array_init_variants.c -o 09_array_init_variants
 * Run: ./09_array_init_variants
 #include <stdio.h>
 
 int main(void) {
    int a[3] = {1,2,3}; // valid
    int b[] = {1,2,3,4,5}; // valid, size deduced
    int c[5] = {1,2}; // valid, rest are zero-initialized
    // int d[2] = {1,2,3}; // invalid: too many initializers (commented out)
    
    printf("a has %zu elements\n", sizeof(a) / sizeof(a[0]));
    printf("b has %zu elements\n", sizeof(b) / sizeof(b[0]));
    printf("c has %zu elements (remaining slots set to 0)\n", sizeof(c) / sizeof(c[0]));
    
    return 0;
}
*/




//! codes/10_common_errors.c
/* 10_common_errors.c
 * Shows a common mistake: return inside the loop.
 * Compile: gcc 10_common_errors.c -o 10_common_errors
 * Run: ./10_common_errors
 #include <stdio.h>
 
 int main(void) {
    int number[] = {10, 20, 30, 40, 50};
    int size = sizeof(number) / sizeof(number[0]);
    
    for (int i = 0; i < size; i++) {
        printf("Element at index %d is %d\n", i, number[i]);
        // return 0; // <-- do NOT put return here; it exits the function on first iteration
    }
    
    return 0;
}
*/