## Assignment 19: Dynamic Memory Allocation with `malloc()` in C

In this assignment, the objective is to understand how to dynamically allocate memory for a `char` array using `malloc()` in C, and how to properly manage memory with error checking and cleanup.

### How the code works

- A `char` pointer named `_c` is declared.
- `malloc` is used to allocate memory for 10 characters.
- The result of `malloc()` is checked:
    - If the pointer is `NULL`, memory allocation failed.
    - If not `NULL`, memory was allocated successfully.
- The program prints a message indicating success or failure.
- If allocation is successful, the memory is freed with `free()` before the program exits.

### Key points
- Dynamic memory allocation allows you to allocate memory at runtime using `malloc()`.
- Always check if `malloc()` returned `NULL` to ensure the memory was allocated successfully.
- Use `sizeof(char)` when calculating the size to ensure portability (even though `sizeof(char)` is always 1, this is good practice).
- Always free allocated memory using `free()` when it’s no longer needed to avoid memory leaks.

This assignment introduces core concepts of dynamic memory management, which is essential in C for writing flexible, robust programs.