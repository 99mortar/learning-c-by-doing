/*

Assignment 10
    Create an integer array with 10 integers and then print the number of elements in the array to the terminal.
    Hint: Play with the sizeof() function to determine how many bytes of storage an integer takes up.

*/

#include <stdio.h>

int main()
{
    int firstValue[10] = {0};
    printf("The array has %d byte(s) and %d elements.\n", sizeof(firstValue), (sizeof(firstValue) / sizeof(firstValue[0])));
    return 0;
}