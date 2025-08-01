/*

Assignment 15
    Create an int variable with int variable.
    Create variable that is a pointer to the int variable with int *ptr = &variable.
    Use the following variable references to replace the x in the appropriate print statements below:

    - *ptr
    - variable
    - ptr
    - &variable
    
    Print statements:
    - printf("The value of int variable is: %d\n", x);
    - printf("The value of the pointer to the int variable is: %d\n", x);
    - printf("The memory address of the int variable is: %d\n", x);
    - printf("The value held at the memory location that the pointer is pointing to is: %d\n", x);
    - Hint: Google and read about pointers
        Extra Credit: There's more than one set of correct answers! Find a different way to get the same output.

*/


#include <stdio.h>

int main()
{
    int var = 10;
    int *__var = &var;

    printf("The value of int variabel is: %d\n", var);
    printf("The value of the pointer to the int variable is: %d\n", __var);
    printf("The memory address of the int variable is: %p\n", (void*)&var);
    printf("The value held at the memory location that the pointer is pointing to is: %d", *__var);
    return 0;
}