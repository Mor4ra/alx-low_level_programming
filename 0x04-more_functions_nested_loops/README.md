# 0x04. C - More functions, more nested loops

## Description
This project builds upon the previous functions and nested loops concepts, introducing more complex function implementations and advanced nested loop patterns. You'll work with mathematical functions, character validation, and pattern printing.

## Learning Objectives
- What are nested loops and how to use them effectively
- What is a function and how to use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pedantic -Wextra`
- What are header files and how to use them with `#include`

## Files
- `main.h` - Header file with function prototypes
- `0-isupper.c` - Checks for uppercase character
- `1-isdigit.c` - Checks for a digit (0 through 9)
- `2-mul.c` - Multiplies two integers
- `3-print_numbers.c` - Prints numbers from 0 to 9
- `4-print_most_numbers.c` - Prints numbers 0-9, except 2 and 4
- `5-more_numbers.c` - Prints numbers 0-14, 10 times
- `6-print_line.c` - Draws a straight line using `_` character
- `7-print_diagonal.c` - Draws a diagonal line using `\` character
- `8-print_square.c` - Prints a square using `#` character
- `9-fizz_buzz.c` - Prints Fizz-Buzz for numbers 1 to 100
- `10-print_triangle.c` - Prints a triangle using `#` character

## Key Concepts

### Character Testing Functions
```c
int _isupper(int c);    // Returns 1 if uppercase, 0 otherwise
int _isdigit(int c);    // Returns 1 if digit, 0 otherwise
```

### Pattern Printing
Many tasks involve printing patterns using nested loops:
- Lines and diagonals
- Squares and triangles
- Number sequences

### Fizz-Buzz Logic
A classic programming exercise:
- Print "Fizz" for multiples of 3
- Print "Buzz" for multiples of 5
- Print "FizzBuzz" for multiples of both
- Print the number otherwise

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c main_file.c function_file.c -o output
```

## Requirements
- Betty coding style
- No global variables
- No more than 5 functions per file
- No standard library functions unless specified
