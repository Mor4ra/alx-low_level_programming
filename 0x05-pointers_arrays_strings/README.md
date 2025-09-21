# 0x05. C - Pointers, arrays and strings

## Description
This project introduces you to one of the most important concepts in C programming: pointers, arrays, and strings. You'll learn how memory addresses work, how to manipulate data indirectly, and how to work with strings as arrays of characters.

## Learning Objectives
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Files
- `main.h` - Header file with function prototypes
- `0-reset_to_98.c` - Takes a pointer to an int and updates the value it points to
- `1-swap.c` - Swaps the values of two integers
- `2-strlen.c` - Returns the length of a string
- `3-puts.c` - Prints a string, followed by a new line
- `4-print_rev.c` - Prints a string in reverse
- `5-rev_string.c` - Reverses a string
- `6-puts2.c` - Prints every other character of a string
- `7-puts_half.c` - Prints half of a string
- `8-print_array.c` - Prints n elements of an array of integers
- `9-strcpy.c` - Copies a string

## Key Concepts

### Pointers
```c
int n = 42;
int *ptr = &n;    // ptr holds the address of n
*ptr = 98;        // Changes the value of n to 98
```

### Arrays and Strings
```c
char str[] = "Hello";    // Array of characters
char *str2 = "World";    // Pointer to string literal
int arr[5] = {1, 2, 3, 4, 5};  // Array of integers
```

### String Manipulation
- Strings in C are arrays of characters ending with '\0'
- You can access individual characters using array notation
- String length is calculated by counting characters until '\0'

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
```

## Requirements
- Betty coding style
- No global variables
- No more than 5 functions per file
- You are not allowed to use standard library functions like `strlen`, `strcpy`, etc.
