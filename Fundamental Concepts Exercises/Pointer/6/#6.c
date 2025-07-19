/*
    Activity 6: Dynamic Allocation and Pointers
    - Use malloc to allocate memory for an array of 10 integers.
    - Fill in the elements and print them.
    - Release the memory using free.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *x = malloc(sizeof(int) * 10); // https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm

    for(int i = 0; i < 10; ++i)
    {
        x[i] = i + 1;
        printf("x[%d] - %d\n", i, x[i]);
    }
    free(x);
    return 0;
}