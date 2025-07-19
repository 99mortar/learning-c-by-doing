/*
    Assignment 20:
    - Create/define a structure (struct) outside of main() that includes an int, char, and float member.
    - Inside of main(), declare values for those struct members and then print their values to the terminal.
*/

#include <stdio.h>

typedef struct
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
    showInfo getInfo;
    getInfo.a = 10;
    getInfo.b = 'B';
    getInfo.c = 10.1;
    printf("[A]: %d\n[B]: %c\n[C]: %.1f",
            getInfo.a, getInfo.b, getInfo.c);
    return 0;
}