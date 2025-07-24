## Assignment 24: Using `open()` System Call in C to Create or Open a File

This assignment demonstrates the use of system calls in C, specifically focusing on the `open()` function to interact with the file system. While we're not directly invoking syscalls via `int 0x80` or `syscall`, we use the standard C library (libc) wrapper that internally performs the actual syscall.

### How it works

- The program includes the necessary headers: `stdio.h`, `unistd.h`, `fcntl.h`, and `sys/stat.h`.
- It attempts to open (or create, if it doesn't exist) a file named `test.txt` using the `open()` function.
  - The file is opened with write-only permission (`O_WRONLY`) and the `O_CREAT` flag, which creates the file if it doesn’t exist.
  - The permission bits `S_IWUSR` are passed, allowing the owner to write to the file.
- The return value of `open()` is checked:
  - If the return value is negative, it indicates an error, and a failure message is printed.
  - If the return value is zero or positive, it means the file descriptor was successfully obtained, and a success message is printed.

### Key points

- `open()` is a low-level file I/O function that maps directly to the kernel via a syscall.
- Although the program appears to use a simple function call, it utilizes a wrapper from the C standard library to safely interact with the operating system.
- System calls are essential in Linux/Unix programming for accessing resources managed by the kernel (like files, processes, memory, etc.).
- This assignment introduces an important concept in systems programming: interfacing with the OS through syscalls using user-space code.

This exercise helps reinforce an understanding of system-level programming in C, setting a foundation for more advanced topics such as file descriptor manipulation, permissions, and direct syscall invocation.