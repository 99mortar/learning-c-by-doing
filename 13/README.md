## Assignment 13: Basketball Scoring Average Tracker

In this exercise, the program prompts the user to enter scoring totals for **5 players across 4 basketball games**. It then calculates the average score for each player and determines which player had the **highest scoring average**.

### How the code works

- A `struct` is used to store the 4 match scores for each player.
- The outer `for` loop iterates over each game (`Game #1` to `Game #4`).
- The inner `for` loop collects the score for each of the 5 players for the current game.
- Once all scores are gathered:
  - A loop calculates the **total and average** scores for each player.
  - Another loop determines which player has the **highest average**.
- Finally, the program prints out the result with the highest average rounded to two decimal places.

### Key points

- Use of a 2D-like structure via an array of structs to store scores.
- Nested `for` loops for organized data entry and processing.
- Arithmetic operations to calculate total and average.
- Use of formatted output with `%.2f` for average values.
- Index tracking to determine and print the top-performing player.

---

This exercise strengthens your understanding of structured data (`struct`), nested loops, arrays, and average calculation in C — all while simulating a real-world use case.