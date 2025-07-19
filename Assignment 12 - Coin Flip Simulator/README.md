## Assignment 12: Coin Flip Simulation

In this exercise, the user is asked how many times they would like to flip a coin. The program then simulates that number of coin flips using random number generation and prints the results (how many heads and how many tails) to the terminal.

### How the code works

- The user inputs the number of coin flips to simulate.
- The `srand(time(NULL))` function seeds the random number generator with the current system time to ensure varied results.
- A `for` loop runs for the specified number of iterations:
  - In each iteration, `rand() % 2` randomly returns `0` or `1`.
  - The result is used to increment either the heads or tails counter.
- After the loop, the program prints the number of times heads and tails occurred.

### Key points

- Usage of `rand()` for simple pseudo-random number generation.
- Seeding randomness with `srand()` and `time(NULL)`.
- Control flow with `for` loops.
- Conditional logic to update counters.
- User input and formatted output.

---

This exercise introduces basic randomness, control structures, and counters — useful for simulations and logic-based programming in C.