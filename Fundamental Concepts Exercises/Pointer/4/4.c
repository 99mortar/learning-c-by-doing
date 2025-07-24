/*
    Activity 4: Swap Function Using Pointers
    - Create a function void swap(int *a, int *b) that swaps the values pointed to by a and b.
    - In main, declare two variables, call swap, and print the swapped values.
*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int 
        _a = 10,
        _b = 20
    ;
    printf("Before swapping: %d - A | %d - B\n", _a, _b);

    swap(&_a, &_b);

    printf("After swapping: %d - A | %d - B\n", _a, _b);
    return 0;
}