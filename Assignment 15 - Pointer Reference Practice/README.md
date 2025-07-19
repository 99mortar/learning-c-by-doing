## Assignment 15: Pointer Reference Practice

In this assignment, the goal is to understand how variables and pointers reference values and memory in C. The task involves printing the same value in multiple ways using pointers and addresses.

### How the code works

- An integer variable `var` is initialized with the value `10`.
- A pointer `__var` is declared and assigned the address of `var`.
- The program prints:
  - The value of the variable directly.
  - The address stored in the pointer (where the variable lives in memory).
  - The memory address of the variable using `&var`.
  - The value at the memory location the pointer is pointing to (using `*__var`).

### Key points

- Understanding the difference between a variable, a pointer, and the value a pointer refers to.
- Proper use of `%d` for integers and `%p` (with `(void*)`) for memory addresses.
- Demonstrating that `&var` and the value stored in the pointer are the same address.
- Reinforcing pointer dereferencing using `*`.

---

**Extra Credit:** There are multiple ways to achieve the same outputs — for example, printing `*(&var)` instead of just `var`.

This is a critical step in mastering memory management and low-level manipulation in C.