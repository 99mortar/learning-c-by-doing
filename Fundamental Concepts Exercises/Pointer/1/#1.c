/*
    Activity 1: Basic Pointer and Variable Access
    - Declare a variable x.
    - Declare a pointer y and make it point to x.
    - Print the value of x using both x and the pointer.
    - Print the address of x using the pointer.
*/

#include <stdio.h>

int main()
{
    int x = 10;
    int *y = &x;
    
    printf("[X VALUE]    : %d\n", x);
    printf("[*Y VALUE]   : %d\n", *y);
    printf("[X ADDRESS]  : %p\n", (void*)&x);
    printf("[Y VALUE]    : %p\n", (void*)y);
    printf("[Y ADDRESS]  : %p\n", (void*)&y);
    
    return 0;
}