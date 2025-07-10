## Assignment 14: Basic Pointer Declaration and Dereferencing

In this assignment, we take our first practical steps into understanding pointers in C. The goal is to declare an `int` variable, assign a pointer to it, and then print both the memory address and the value of that variable via the pointer.

### How the code works

- An integer variable `var` is declared and initialized with the value `10`.
- A pointer to `int`, `pointerOfVar`, is declared and initialized with the address of `var` using the address-of operator `&`.
- The program then uses `printf` to:
  - Print the memory address stored in `pointerOfVar` (cast to `(void*)` for safe usage with `%p`).
  - Dereference the pointer using `*pointerOfVar` to print the value stored at that address (i.e., the value of `var`).

### Key points

- Introduction to pointers in C: declaration, initialization, and usage.
- Understanding of the `&` (address-of) and `*` (dereference) operators.
- Safe and portable way to print addresses using `void*` and the `%p` specifier.
- Clean formatting using multi-line declarations and initialization.

---

This exercise is essential for building a strong foundation in pointer manipulation, which is a core part of C programming and memory management.