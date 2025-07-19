## Assignment 3: User Input and Strings (Fixed-Size Buffer)

In this exercise, the user is prompted to enter their full name, which is stored in a fixed-size character array (`char`). Afterwards, the program prints a personalized message with the entered name.

### How the code works

- It uses `fgets` to read user input safely, limiting the input to 255 characters to prevent buffer overflow.
- The newline character (`\n`) captured by `fgets` when the user presses Enter is replaced with a null terminator (`\0`) to ensure proper string handling.
- The code does not use dynamic memory allocation, making it simple and portable across different C compilers.

### Strengths

- Safe input handling, avoiding buffer overflow.
- Simple and easy-to-understand code.
- Highly portable solution for basic string input in C.

### Limitations

- The input length is limited to 255 characters.
- The program reads the full name as a single string and does not separate first and last names.

---

This approach is ideal for beginners learning to work with strings in C while avoiding the complexities of dynamic memory management.