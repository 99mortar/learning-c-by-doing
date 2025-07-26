/*
    Assignment 24:
		For this excercise we're going to build a C program that executes syscalls! 
		We've already learned basically everything we need to know in C up until this point to accomplish this. 
		We are going to keep it simple and we're going to use the open() syscall only here. 
		It should be noted that technically we are not making syscalls directly in user programs, but instead are using wrapper functions defined in libc for our purposes.

*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
	int file = open("test.txt", O_WRONLY | O_CREAT, S_IRWXU); // file = 3;

	if (file < 0)
	{
		perror("The open operation failed");
		return -1;
	}
	else 
		printf("The open operation succeeded!");
	close(file);
	return 0;
}