/*
    Understanding Strings in C: '\0', ASCII, printf() and puts()

    In C, a string is simply a sequence of characters stored in an array of type 'char',
    and it **must be terminated by the null character '\0'**, also known as the End of String (EOS).
    This tells functions like printf() and puts() where the string ends.

    ---------------------------------------------------------------
    Example 1: Missing '\0' causes undefined behavior (prints garbage)
    ---------------------------------------------------------------
    
    char array[] = {72, 101, 108, 108, 111}; // H, e, l, l, o
    printf("%s", array); // May print "Hello_" or other garbage

    Here, since the array doesn't contain '\0', printf will keep reading memory
    until it randomly hits a 0 byte (which could be after some garbage).

    ---------------------------------------------------------------
    Example 2: Proper null-terminated string
    ---------------------------------------------------------------
    
    char array[] = {72, 101, 108, 108, 111, '\0'}; // "Hello"
    printf("%s", array); // Prints "Hello" correctly

    The '\0' tells printf to stop printing after the last character.

    ---------------------------------------------------------------
    ASCII Codes and Char Values
    ---------------------------------------------------------------
    
    In C, characters like 'H' are internally represented by integers
    based on the ASCII table:
    
    H -> 72, e -> 101, l -> 108, o -> 111, etc.
    
    So you can build strings using ASCII codes:
    
    char greeting[] = {72, 105, '\0'}; // "Hi"

    ---------------------------------------------------------------
    printf() vs puts()
    ---------------------------------------------------------------

    printf("%s", array);  // Prints string exactly as it is (no newline)
    puts(array);          // Prints string AND adds '\n' automatically

    Example:

    char str[] = "Hello";
    printf("%s", str); // Output: Hello
    puts(str);         // Output: Hello\n

    So puts() is a bit more convenient when you just want to print a string followed by a newline.

    ---------------------------------------------------------------
    TL;DR:
    - Always terminate char arrays with '\0' when using them as strings.
    - printf("%s") expects a null-terminated string.
    - puts() is like printf("%s\n"), but simpler.
    - You can use ASCII values to create characters, since char is just a small integer type.
*/
