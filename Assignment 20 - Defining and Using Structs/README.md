## Assignment 20: Defining and Using Structs in C

This assignment focuses on understanding how to define a `struct` in C and how to declare variables of that struct type both globally and locally.

### How it works

- A `struct` type is defined outside of `main()`, specifying members of different types (`int`, `char`, `float`).
- You can declare a variable of this struct type in two main ways:
  - Declare a variable **at the end of the struct definition**, which creates a global instance immediately available.
  - Declare a variable **inside a function**, such as `main()`, which creates a local instance with limited scope.
- The program assigns values to the struct members and prints them to the terminal.

### Key points

- Defining a struct creates a new data type but does not allocate memory or create variables by itself.
- Declaring a variable at the end of the struct definition creates a global variable accessible throughout the file.
- Declaring variables inside functions creates local variables limited to that function’s scope.
- Local variables allow for multiple instances and better control over variable lifetime.
- Global variables declared this way are useful for simple or shared data but can reduce flexibility.
- Both methods are valid and can be chosen based on the needs of your program.

This assignment helps solidify the understanding of struct definitions, variable scope, and how to organize data in C programs.
