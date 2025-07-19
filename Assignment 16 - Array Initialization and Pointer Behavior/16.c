/*

Assignment 16
    Initialize an int array of 10 elements and then print the value of the array with printf("%d", array).
    Extra Credit: Use Google to find out why we get a memory address (a pointer!) as our output.

*/


#include <stdio.h>

int main()
{
    int
        array[10] = {0}
    ;
    for(int i = 0; i < (sizeof(array) / sizeof(array[0])); ++i)
        printf("array[%d]: %d | Memory address: %p\n", i, array[i], (void*)&array);
    return 0;
}