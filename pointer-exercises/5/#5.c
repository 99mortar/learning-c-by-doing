/*
    Activity 5: Pointers to Pointers
    - Declare a pointer to an integer int *p.
    - Declare a pointer to a pointer int **pp.
    - Make pp point to p, and p point to an integer variable.
    - Print the variable’s value using both *p and **pp.
*/

#include <stdio.h>

int main()
{
    int f = 10;
    int *forF = &f;
    int **forforF = &forF;

    printf("[F]   : %d\n[*F]  : %d\n[**F] : %d", f, *forF, **forforF);
    return 0;
}