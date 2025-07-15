/*
    Activity 2: Reverse an Array Using Dynamic Memory Allocation
    - Ask the user how many numbers to input
    - Store them using malloc
    - Allocate a second array to store the reversed numbers
    - Print the reversed array
    - Free both memory blocks
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &count);

    int *original = malloc(sizeof(int) * count);
    if (original == NULL) 
    {
        printf("Memory allocation failed for original array.\n");
        return 1;
    }

    for (int i = 0; i < count; ++i) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &original[i]);
    }

    int *reversed = malloc(sizeof(int) * count);
    if (reversed == NULL) 
    {
        printf("Memory allocation failed for reversed array.\n");
        free(original);
        return 1;
    }

    for (int i = 0; i < count; ++i) 
        reversed[i] = original[count - i - 1];

    printf("Reversed array:\n");
    for (int i = 0; i < count; ++i) 
        printf("reversed[%d] = %d\n", i, reversed[i]);

    free(original);
    free(reversed);

    return 0;
}