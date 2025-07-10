## Assignment 7: Solve Quadratic Equation Using the Quadratic Formula

In this exercise, the user is prompted to enter the coefficients A, B, and C of a quadratic equation. The program calculates the roots (values of X) using the Quadratic Formula.

### How the code works

- The program reads float inputs for coefficients A, B, and C.
- It calculates the discriminant (delta) using the formula \(\Delta = B^2 - 4AC\).
- Depending on the value of delta:
  - If delta < 0, there are no real roots.
  - If delta = 0, there is one real root.
  - If delta > 0, there are two real roots.
- When real roots exist, it calculates both roots using:
  \[
    x = \frac{-B \pm \sqrt{\Delta}}{2A}
  \]
- The program checks each root by plugging it back into the quadratic equation to verify if it results in zero (or very close to zero), using a tolerance threshold.
- It informs the user whether each root is likely correct or may be inaccurate due to decimal truncation.

### Key points

- Usage of `math.h` for square root and absolute value functions.
- Input handling with `scanf` for floats.
- Implementation of the quadratic formula and discriminant.
- Use of control flow statements (`if-else`) to handle different cases.
- Floating-point comparison with a tolerance for verification.
- Encourages verifying solutions and understanding precision limits in floating-point arithmetic.

---

**Extra Credit:** The solution validation mechanism that checks the accuracy of roots by substituting them back into the original equation.

---