# 0x04. C - More Functions, More Nested Loops
<img src="../me.png" width="100%" fload="right" margin="10px" alt="Tarnue Pythagoras Borbor">
Welcome to the fourth installment of our C programming series! In this article, we will continue exploring the fascinating world of functions and delve deeper into nested loops. By mastering these concepts, you'll become a more proficient C programmer and be ready to tackle even more complex challenges. So let's get started!

## I. Advanced Function Concepts

### 1. Function Prototypes

In C, a function prototype is a declaration that provides essential information about a function to the compiler before its actual implementation. It tells the compiler about the function's return type, name, and the types of its parameters (if any). Function prototypes are usually placed at the beginning of a C program, before the `main()` function.

```c
// Function prototype
return_type function_name(parameter_list);
```

By providing function prototypes, you can use functions before they are defined, which is particularly useful when functions call each other or when there is a specific order of function calls.

### 2. Recursive Functions

A recursive function is a function that calls itself either directly or indirectly to solve a problem. These functions are widely used for tasks that can be broken down into smaller, similar subproblems. However, it's essential to ensure that a base case exists to stop the recursion and prevent infinite loops.

```c
// Example of a recursive function to calculate factorial
unsigned int factorial(unsigned int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
```

## II. Mastering Nested Loops

### 1. Nested `for` Loops

Nested `for` loops are a powerful tool to work with multi-dimensional data structures, such as arrays and matrices. They allow us to iterate over each element efficiently and perform various operations.

```c
// Example of a nested for loop to print a pattern
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

The above code will print a pattern of asterisks in the following manner:

```
*
* *
* * *
* * * *
* * * * *
```

### 2. Nested `while` Loops

Nested `while` loops provide another way to perform repetitive tasks. The inner loop executes entirely for each iteration of the outer loop.

```c
// Example of nested while loop to generate a multiplication table
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%4d", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
```

This code will generate a multiplication table from 1 to 10.

## III. Combining Functions and Nested Loops

By combining the power of functions and nested loops, you can create sophisticated programs to solve real-world problems. For example, you can use nested loops to process multi-dimensional arrays and employ functions to perform specific computations on the data.

```c
// Example: Function to find the maximum element in a 2D array
#include <stdio.h>

#define ROWS 3
#define COLS 4

int findMax(int arr[][COLS]) {
    int max = arr[0][0];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    return max;
}

int main() {
    int data[ROWS][COLS] = {
        {12, 45, 7, 22},
        {8, 21, 33, 17},
        {19, 5, 13, 28}
    };

    int maxElement = findMax(data);
    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}
```

## Conclusion

In this article, we have delved into advanced function concepts, such as function prototypes and recursive functions. Moreover, we have mastered the art of nested loops, exploring both `for` and `while` loops. Combining functions and nested loops empowers us to create elegant and efficient C programs, capable of solving complex problems with ease. The possibilities are endless, so keep practicing and experimenting to become a skilled C programmer. Happy coding!
