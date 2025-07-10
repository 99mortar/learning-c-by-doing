/*

Assignment 14
    Intialize and delcare an int variable with any value. Assign a pointer variable to the int variable you just declared and then print the value of the pointer variable.

*/


#include <stdio.h>

int main()
{
    int var = 10;
    int *pointerOfVar = &var;

    printf("%p - Address stored in pointer\n%d - Variable value", (void *)pointerOfVar, *pointerOfVar);
    return 0;
}