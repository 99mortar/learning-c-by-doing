/*

Assignment 12
    Prompt the user for a number of coin flips (x) and then simulate (x) number of coin flips and print the results to the terminal.
    Hint: Look up the srand() function.

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int
        getUserAmount = 0,
        getHeadsCount = 0,
        getTailsCount = 0
    ;
    printf("How many times would you like to flip the coin? ");
    scanf("%d", &getUserAmount);

    srand(time(NULL));
    for(int i = 0; i < getUserAmount; ++i)
    {
        int flipCoin = (rand() % 2) ? getHeadsCount++ : getTailsCount++;
    }
    printf("After flipping the coin %d times, the results were:\n", getUserAmount);
    printf("%d - Heads\n", getHeadsCount);
    printf("%d - Tails", getTailsCount);
    return 0;
}