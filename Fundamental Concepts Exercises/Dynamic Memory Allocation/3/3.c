/*
    Activity 3: Expand an Array Using realloc
    - Ask the user how many numbers to input
    - Store them using malloc
    - Display the current array
    - Ask if the user wants to add more numbers
    - If yes, use realloc to increase the array size
    - Read the new numbers and append them to the array
    - Print the final array
    - Free the memory block
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int 
        *vec,
        initialCount
    ;

    printf("Enter how many numbers you want to storage: ");
    scanf("%d", &initialCount);

    vec = malloc(sizeof(int) * initialCount);
    if(vec == NULL)
        return -1;

    printf("Enter %d numbers:\n", initialCount);
    for(int x = 0; x < initialCount; ++x)
    {
        scanf("%d", &vec[x]);
    }
    
    printf("Actual vector:");
    for(int x = 0; x < initialCount; ++x)
    {
        printf(" %d |", vec[x]);
    }
    
    printf("\nWant to add up numbers? ");
    int
        extraCount
    ;
    scanf("%d", &extraCount);

    if(extraCount <= 0)
    {
        printf("Final vector:");
        for(int t = 0; t < initialCount; ++t)
            printf(" %d |", vec[t]);
    }
    else
    {
        vec = realloc(vec, sizeof(int) * (initialCount + extraCount));
        if(vec == NULL)
            return -1;
        
        printf("Enter %d numbers:\n", extraCount);
        for(int x = initialCount; x < (initialCount + extraCount); ++x)
            scanf("%d", &vec[x]);

        printf("Final vector:");
        for(int j = 0; j < (initialCount + extraCount); ++j)
            printf(" %d |", vec[j]);
    }
    free(vec);
    return 0;
}