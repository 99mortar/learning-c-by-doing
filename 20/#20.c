/*
    Assignment 20:
    - Create/define a structure (struct) outside of main() that includes an int, char, and float member.
    - Inside of main(), declare values for those struct members and then print their values to the terminal.
*/

#include <stdio.h>
#include <stdlib.h>

struct getInfo
{
    int a;
    char b;
    float c;
} showInfo;


int main()
{
    /*
        struct getInfo showInfo; -> You could declare it this way, but I declared it earlier at the end of the struct definition.
    */
    showInfo.a = 10;
    showInfo.b = 'B';
    showInfo.c = 10.1;
    printf("[A]: %d\n[B]: %c\n[C]: %.1f",
            showInfo.a, showInfo.b, showInfo.c);
    return 0;
}