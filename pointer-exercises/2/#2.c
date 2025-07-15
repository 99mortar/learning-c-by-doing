/*
    Activity 2: Modify Value via Pointer
    - Declare a variable y.
    - Declare a pointer z and make it point to y.
    - Print the value of y before modification.
    - Modify y using the pointer.
    - Print the value after modification.
*/

#include <stdio.h>

int main()
{
    int y = 5;
    int *z = &y;

    printf("Before: %d\n", y);

    *z = 20;

    printf("After : %d\n", y);
    return 0;
}