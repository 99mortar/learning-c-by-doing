## Assignment 17: Function Declaration and Prototyping in C

In this assignment, the objective is to understand how to declare and define functions in C, and how to call them from `main()`.

### How the code works

- A function named `__printHelloWorld()` is declared using a function prototype before `main()`.
- Inside the `main()` function, the custom function is called to print a message.
- The actual function definition is placed **after** `main()` and prints `"Hello World!"` to the terminal using `printf`.

### Key points
- Demonstrates how to declare, define, and call a function in C.
- The use of a function prototype ensures that the compiler knows about the function before its actual definition, allowing flexible code organization.
- The function does not take any parameters and does not return any value `(void)`.

### **EXTRA CREDIT**
The extra credit was achieved by:
- Using a function prototype above `main()` to inform the compiler of the function's existence.
- Defining the function after `main()`, which is a good habit when organizing larger programs.

This assignment reinforces the foundational concept of modularizing code using functions, a crucial step toward writing reusable and maintainable C programs.