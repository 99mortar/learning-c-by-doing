/*

Assignment 17
    - Declare a function that prints "Hello, World!" to the terminal and then call that function inside the main() function.
    - Extra Credit: Use a function prototype to establish your function and then add a function definition below main().

*/


#include <stdio.h>

void __printHelloWorld(void);

int main()
{
    __printHelloWorld();
    return 0;
}

void __printHelloWorld(void)
{
    printf("Hello World!");
}