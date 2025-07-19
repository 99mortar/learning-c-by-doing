## Assignment 18: Understanding Strings, ASCII, and Null Terminators in C

In this assignment, the objective is to understand how strings work in C, focusing on how the null character (`'\0'`) is essential for proper string handling, and how characters are represented using ASCII values.

### How the code works

Two versions of a function were tested:

#### Version 1 – Without null terminator (`'\0'`):
```c
void hello(void)
{
    char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
    printf("%s", array);
}
```
- This version creates a `char` array using ASCII values to represent the string `"Hello, World!"`.
- However, it does not include the `'\0'` terminator.
- Result: The `printf("%s", array);` call may print garbage or unexpected characters after the intended message, since the function doesn’t know where the string ends.

### Version 2 - With null terminator:
```C
void hello(void)
{
    char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};
    printf("%s", array);
}
```
- Identical to the first, but properly ends the array with `'\0'`.
- This allows `printf` to stop printing exactly after the last character.
- Result: Clean and expected output `"Hello, World!"`.

### Key points
- Strings in C are arrays of `char` that must be null-terminated ('\0').
- Without `'\0'`, functions like `printf("%s", ...)` and `puts(...)` will exhibit undefined behavior — often reading past the array into garbage memory.
- ASCII codes can be used directly in character arrays:
    - `'H'` = `72`, `'e'` = `101`, etc.
    - This is useful for building strings without using double quotes.
- The `char` type is essentially a small integer, so writing characters as numbers is valid.

### `printf()` vs `puts()`
- `printf("%s", array);`
    Prints the string exactly as-is, without a newline.
- `puts(array);`
    Prints the string with a newline (`\n`) automatically appended.

This assignment reinforces how low-level memory handling impacts high-level string behavior in C.