# Assignment 25: Writing to a File Using `open()` and `write()` System Calls in C

This assignment demonstrates the use of low-level file manipulation functions in C, specifically `open()` and `write()`, which are system call wrappers provided by the standard C library (libc). The exercise builds upon file creation by extending it to include writing content into a file.

## How it Works

- The program includes essential headers:
  - `stdio.h` for input/output functions  
  - `unistd.h` for `close()` and other POSIX functions  
  - `fcntl.h` for file control options  
  - `string.h` for calculating the string length

- It attempts to open (or create, if it doesn't exist) a file named `test.txt`:
  - The file is opened with `O_WRONLY | O_CREAT` flags, indicating write-only access and creation if the file doesn't exist.
  - The permission mode `0644` is used, allowing the owner to read/write and others to read.

- After ensuring the file was opened successfully, the program writes a message to it:
  - A string (`msg[]`) is defined with humorous commentary about programming.
  - The `write()` function attempts to write the message to the file.
  - The number of bytes written is verified against the length of the message to confirm success.

- Finally, the file is closed using `close()`.

## Key Points

- `open()` and `write()` are fundamental system calls used to interact with the filesystem at a low level.
- Error handling is done using `perror()` to provide a human-readable description of what went wrong, if anything fails.
- `strlen()` ensures that only the intended number of bytes are written.
- This assignment emphasizes the full cycle of file handling: creation/opening, writing, and closing.

This exercise strengthens the understanding of how system calls are used in real-world C programs to manipulate files directly through file descriptors. It also encourages good programming practices like error checking and clean resource management.