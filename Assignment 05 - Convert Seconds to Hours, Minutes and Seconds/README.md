## Assignment 5: Convert Seconds to Hours, Minutes, and Seconds

In this exercise, the user is prompted to enter a number of seconds. The program converts this input into its equivalent duration expressed in hours, minutes, and remaining seconds.

### How the code works

- Constants for seconds per hour (`3600`) and seconds per minute (`60`) are defined using `#define`.
- The user's input (total seconds) is read as an integer.
- Integer division and modulo operations are used to calculate:
  - Hours by dividing total seconds by seconds per hour.
  - Remaining seconds after extracting hours.
  - Minutes by dividing the remainder by seconds per minute.
  - Remaining seconds after extracting minutes.
- The result is printed without decimal places, showing the time duration clearly.

### Key points

- Use of constants with `#define`.
- Integer arithmetic for time conversion.
- Formatted printing of multiple integer values.
- Practice with division and modulo operators.

---

**Extra Credit:** The output ensures that hours, minutes, and seconds are printed as whole numbers with no decimals.