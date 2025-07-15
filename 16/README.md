## Assignment 16: Array Initialization and Pointer Behavior

In this assignment, the objective is to understand array initialization and explore how arrays behave in memory when printed in C.

### How the code works

- An integer array `array` with 10 elements is initialized to all zeros using `{0}`.
- A loop iterates through each element, printing:
- The index and the value of the element.
- The memory address of the array (which stays the same in every iteration, since it's pointing to the first element).

```C
printf("array[%d]: %d | Memory address: %p\n", i, array[i], (void*)&array);
```

### Key points

- Demonstrates how to initialize and traverse an array using a `for` loop.
- Uses `sizeof(array) / sizeof(array[0])` to calculate the total number of elements in the array.
- Shows that printing the array with `%p` yields the memory address of the array, which is equivalent to the address of its first element.
- `(void*)&array` ensures the address is printed in a portable way using the `%p` format specifier.

### Extra Credit: 
If you try to print the array name directly using `printf("%d", array);`, you'll see a numeric output representing the memory address. This is because the array name decays into a pointer to its first element in most expressions. Therefore, you're printing a pointer value — not the actual data stored in the array.

This assignment helps clarify the subtle but important differences between arrays and pointers in C.