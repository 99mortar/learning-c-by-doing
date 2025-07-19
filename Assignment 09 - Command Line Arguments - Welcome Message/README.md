## Assignment 9: Command Line Arguments - Welcome Message

In this exercise, the program takes two command line arguments: the user's first and last name. It then prints a personalized welcome message using these arguments.

### How the code works

- The program checks if exactly two arguments (excluding the program name) are provided via the command line (`argc == 3`).  
- If the correct number of arguments is given, it prints a welcome message using `argv[1]` (first name) and `argv[2]` (last name).  
- If too few or too many arguments are provided, it prints usage instructions indicating how to run the program properly.

### Key points

- Using command line arguments (`argc` and `argv[]`) in C.  
- Basic input validation on the number of arguments.  
- Printing usage instructions to guide the user.  
- Simple string output with `printf`.

---

This exercise helps understand how to handle command line inputs and basic argument validation in C.
