/*

Assignment 7
    Prompt the user for A, B, and C values and then use those values to determine the value of 'X' using the Quadratic Formula.
    If you need to brush up on the Quadratic Formula, hit up Khan Academy!
    Hint: Make your life easier by including the math.h header file. You may have to search online for an additional flag for gcc to get your code compiled correctly!
    
    Extra Credit: Build in a mechanism which checks the solution by plugging it back into the formula and seeing if it equals 0. 
    Use if control flow to instruct the user to double check all solutions which aren't confirmed (a lot won't be confirmed since they'll be truncated decimals).

*/

#include <stdio.h>
#include <math.h>

float calcDelta(const float __b, const float __a, const float __c);

int main()
{
    float
        a = 0.0,
        b = 0.0,
        c = 0.0\
    ;
    printf("Enter A: ");
    scanf("%f", &a);

    printf("\nEnter B: ");
    scanf("%f", &b);

    printf("\nEnter C: ");
    scanf("%f", &c);

    float deltaValue = calcDelta(b, a, c);

    if(deltaValue >= 0)
    {
        float xOne = (-b + sqrt(deltaValue)) / (2 * a);
        float xTwo = (-b - sqrt(deltaValue)) / (2 * a);

        float 
            __check_xOne = a * (xOne * xOne) + b * xOne + c,
            __check_xTwo = a * (xTwo * xTwo) + b * xTwo + c\
        ;
        if(fabs(__check_xOne) < 0.001)
            printf("[x1] : Right solution.\n");
        else
            printf("[x1] : Might be wrong.\n");
        if(fabs(__check_xTwo) < 0.001)
            printf("[x2] : Right solution.\n");
        else
            printf("[x2] : Might be wrong.\n");

        printf("\n%.6f - x1", xOne);
        printf("\n%.6f - x2", xTwo);
    }
    return 0;
}

float calcDelta(const float __b, const float __a, const float __c)
{
    float finalValue = ((__b * __b) - 4 * __a * __c);

    if(finalValue < 0)
        printf("There's no real root.\n");
    else if(finalValue == 0)
        printf("One real root.\n");
    else if(finalValue > 0)
        printf("Two or more real roots.\n");

    return finalValue;
}