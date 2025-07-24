/*
    Activity 1: Sum of Numbers Using Dynamic Memory Allocation
    - Ask the user how many numbers they want to sum (e.g., 5).
    - Use malloc to allocate an array of integers with that size.
    - Prompt the user to enter each of the N numbers.
    - Calculate the total sum of the numbers and print the result.
    - Free the allocated memory using free().
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int 
        getInput = 0,
        finalSum = 0
    ;
    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &getInput);

    int *allc = malloc(sizeof(int) * getInput);
    
    for(int i = 0; i < getInput; ++i)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &allc[i]);
        finalSum += allc[i];
    }
    printf("The final sum is: %d", finalSum);
    free(allc);
    return 0;
}