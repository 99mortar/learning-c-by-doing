/*

Assignment 6
    Prompt the user for a Numerator (top number of a fraction) and a Denominator (bottom number of a fraction). 
    Tell the user whether or not there is a remainder using if control flow.

*/

#include <stdio.h>

int main()
{
    int topNumber = 0;
    int bottomNumber = 0;

    printf("Enter top number.\n");
    scanf("%d", &topNumber);

    printf("Enter bottom number.\n");
    scanf("%d", &bottomNumber);

    printf("%s\n", (topNumber % bottomNumber == 0) ? "There's no remainder." : "There is a remainder");
    return 0;
}