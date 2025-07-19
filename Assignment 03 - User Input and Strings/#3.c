/*

Assignment 3
    Prompt the user to input their first and last name and then print them a welcome message. Try storing the input as a char variable's value.
    Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the gods that the user input fits.
    Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char getInput[256] = {0}; // Avoiding garbage data
    printf("Enter your name: ");
    fgets(getInput, sizeof(getInput), stdin);

    getInput[strcspn(getInput, "\n")] = '\0'; // Avoiding newline and going straight to EOS
    printf("Your name is: %s", getInput);
    return 0;
}