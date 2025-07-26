/*
    Assignment 25:
        This assignment will pick up where we left off. 
        We have successfully implemented an open() syscall and will now pair that with a write() sycall to insert text into our open file.

*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int file = open("test.txt", O_WRONLY | O_CREAT, 0644);

    if(file < 0)
    {
        perror("Failed");
        return 1;
    }
    else
        puts("File created.");

    const char msg[] = "This programming language is making me clinically insane, no cap.\n";
    int passInput = write(file, msg, strlen(msg));

    if(passInput != strlen(msg))
    {
        perror("Failed");
        return 1;
    }
    else
        puts("String written.");
    close(file);
    return 0;
}