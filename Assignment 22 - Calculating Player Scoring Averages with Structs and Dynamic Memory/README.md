## Assignment 22: Calculating Player Scoring Averages with Structs and Dynamic Memory in C

This assignment demonstrates the use of C structs and dynamic memory allocation to store and process data for multiple entities — in this case, five basketball players and their performance statistics.

### How it works

- A `struct` named `access` is defined with two integer members: `pointsPerPlayer` and `gamePerPlayer`, representing the total points scored and the number of games played by a player.
- An array of 5 `access` structs is dynamically allocated using `malloc`, allowing the program to store data for five different players.
- The program loops through each element of the array, prompting the user to enter the total points and games played for each player.
- After collecting the data, another loop calculates and prints each player’s scoring average in points per game (ppg) using the formula:
```C
average = total_points / (float)total_games;
```
- Proper memory management is implemented with a `free()` call at the end of the program.
- The code also includes a basic check to ensure the memory allocation was successful before proceeding with data collection.

### Key points

- Structs provide a clean way to group related data types (e.g., points and games).
- Dynamic memory allocation with `malloc` allows for flexible and scalable data handling.
- Typecasting to `float` avoids unintended integer division when calculating averages.
- Loops make it easy to handle repetitive data collection and processing.
- Returning `-1` on memory allocation failure helps signal an error to the OS or calling environment.
- This program demonstrates a simple but effective structure for handling multiple inputs and computing derived values using C.

This example is a practical introduction to struct arrays, dynamic memory, user input, and basic arithmetic operations in C — ideal for building a foundation in structured programming.