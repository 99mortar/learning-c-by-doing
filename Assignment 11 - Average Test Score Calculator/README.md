## Assignment 11: Average Test Score Calculator

In this exercise, the user is repeatedly prompted to enter test scores. After each entry, the program asks whether the user wants to continue. Once the user chooses to stop or the maximum score count (8) is reached, the program calculates and prints the average of the entered scores to two decimal places.

### How the code works

- An integer array of size 10 is initialized to store up to 8 test scores.
- A `do-while` loop handles repeated score input and continues asking the user whether they want to continue.
- After each score, the sum is updated and the count is incremented.
- The loop breaks if:
  - The user enters 'N' or 'n'.
  - The score count reaches 8.
- The average is calculated using the total sum divided by the number of scores.
- The average is printed with two digits after the decimal point.

### Key points

- Use of `do-while` loop for repeated user interaction.
- Simple character input and conditional control flow.
- Input validation with count limits.
- Use of an array to store multiple values.
- Type casting to compute float average and formatted output using `%.2f`.

---

This exercise practices arrays, loops, user input, conditionals, and basic arithmetic in C.