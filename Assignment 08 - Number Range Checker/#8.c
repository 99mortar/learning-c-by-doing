/*

Assignment 8
    Ask the user for a number between 1 and 500 and then display what range that number is in from the following:
    - 1 - 100
    - 101 - 200
    - 201 - 300
    - 301 - 400
    - 401 - 500
*/


#include <stdio.h>

int main()
{
    int getInput = 0;

    while(getInput < 1 || getInput > 500)
    {
        printf("\nEnter a number between 1 to 500: ");
        scanf("%d", &getInput);

        if(getInput < 1 || getInput > 500)
        {
            printf("Invalid input. Please try again.\n");
        }
    }

    int rangeIndex = (getInput - 1) / 100;
    const char *ranges[] = {
        "1 - 100",
        "101 - 200",
        "201 - 300",
        "301 - 400",
        "401 - 500"
    };

    printf("Number range is: %s\n", ranges[rangeIndex]);
    return 0;
}