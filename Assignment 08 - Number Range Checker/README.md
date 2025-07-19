## Assignment 8: Number Range Checker

In this exercise, the user is prompted to enter a number between 1 and 500. The program then determines and displays the range that the number falls into from the following intervals:

- 1 - 100  
- 101 - 200  
- 201 - 300  
- 301 - 400  
- 401 - 500  

### How the code works

- The program uses a `while` loop to validate the user input, ensuring it falls within the required range (1 to 500).  
- If the input is invalid, the user is prompted again until a valid number is entered.  
- The range index is calculated by subtracting 1 from the input and dividing by 100, which maps the number to one of the five ranges.  
- An array of string literals holds the range descriptions.  
- The program prints the appropriate range based on the user's input.

### Key points

- Input validation with loops.  
- Integer arithmetic to map input to range indices.  
- Using arrays of strings for clean output.  
- Clear and user-friendly prompts and messages.

---

This exercise is useful for practicing input validation, control flow, and basic array usage in C.
