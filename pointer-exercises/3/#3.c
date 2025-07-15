/*
    Activity 3: Pointer and Arrays
    - Create an array int arr[5] = {1, 2, 3, 4, 5}.
    - Use a pointer to iterate over the array and print each element.
    - Use pointer arithmetic to access elements (e.g., *(ptr + 2)).
*/

#include <stdio.h>

int main()
{
    int arr[5] = 
    {
        1, 
        2, 
        3, 
        4, 
        5
    };
    int *pointerIndex = arr;
    for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i)
        printf("arr[%d] : %d - %p\n", i, arr[i], (pointerIndex + i));
    return 0;
}