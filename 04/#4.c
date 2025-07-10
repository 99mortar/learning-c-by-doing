/*

Assignment 4
    Prompt the user to input the length of a radius and then print the area of the user's circle to the terminal.
    Extra credit: Use the #define feature of C to assign the value 3.14 to PIE.

*/

#include <stdio.h>

#define  PIE  3.14

int main()
{
    float getUserLength = 0.00;
    
    printf("Type the length of a radius to calculate its area.\n");
    scanf("%f", &getUserLength);

    getUserLength = PIE * (getUserLength * getUserLength);
    printf("The area is: %.4f", getUserLength);
    return 0;
}