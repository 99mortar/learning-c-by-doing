## Assignment 21: Structs with Nested Employee Records and User Input in C

This assignment demonstrates how to design and use nested structs in C to represent complex data — specifically, employee records containing multiple fields and storing two employees within a single struct.

### How it works

- A `userData` struct is defined to hold individual employee information: first name, last name, employee ID, last 4 digits of SSN, and job title.
- An `employees` struct is defined to hold two `userData` instances, representing two employees.
- The program prompts the user to enter credentials for each employee through the `readEmployee` function, which:
  - Uses pointers to modify the employee data directly.
  - Validates input, including checking the SSN digits range and disallowing the title "Engineer" alone.
  - Repeats input prompts until valid data is entered.
- The `printEmployee` function formats and prints each employee’s information, appending "Engineer" to the title.
- The program runs sequentially for two employees, storing and displaying their information.

### Key points

- Structs can contain other structs as members, allowing complex data organization.
- Using pointers to structs in functions enables direct modification of data passed from `main()`.
- Input validation is crucial to ensure data integrity and user-friendly error handling.
- String input with `scanf("%s", ...)` reads only until the first whitespace, so it’s suited for single-word inputs.
- This assignment reinforces struct design, nested data management, user input handling, and basic validation in C.

This example is a practical exercise in combining multiple C concepts to create a user-interactive program that manages structured data cleanly and safely.
