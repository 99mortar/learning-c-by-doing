/*

Assignment 2
    Initialize and assign a value to an integer, float, and char variable. Then print each one with a sentence on a new line describing variable data type.

*/


#include <stdio.h>

int main()
{
    int varOne = 0;
    float varTwo = 0.0;
    char varThree = 'A';
    double varFour = 0.0000;

    printf("%d - integer\n", varOne);
    printf("%.1f - float\n", varTwo);
    printf("%c - char\n", varThree);
    printf("%.4f - double\n", varFour);

    return 0;
}