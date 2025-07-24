/*
    Activity 7: Strings and Pointers
    - Declare a pointer to char and initialize it with a string literal.
    - Print each character of the string using pointer arithmetic.
    - Modify the characters of the string using a pointer (use char array[] instead of a literal for this).
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HELLO";
    char *ptrStr = str;

    for(int i = 0; i < strlen(str); ++i)
    {
        printf("Before: str[%d] = %c\n", i, *(ptrStr + i));

        *(ptrStr + i) = *(ptrStr + i) + 32; // Convert uppercase to lowercase (manual ASCII shift) - chatgpt helped me on this one, ngl lol

        printf("After : str[%d] = %c\n", i, *(ptrStr + i));
    }

    printf("\nModified string: %s\n", str);
    return 0;
}