# 0x01. C - Variables, if, else, while

![C Programming](https://img.shields.io/badge/Language-C-blue.svg)
![Difficulty](https://img.shields.io/badge/Difficulty-Beginner-green.svg)

## 📖 Description

This project focuses on fundamental C programming concepts including variables, data types, conditional statements (`if`, `else`), and loop constructs (`while`, `for`). You'll learn to work with different data types, implement decision-making logic, and create iterative programs.

## 🎯 Learning Objectives

By the end of this project, you should be able to explain:

- **Variables & Data Types**:
  - What are the arithmetic operators and how to use them
  - What are the logical operators (`&&`, `||`, `!`) and how to use them
  - What are the relational operators and how to use them
  - What values are considered TRUE and FALSE in C
  - What are the boolean operators and how to use them

- **Control Flow**:
  - How to use the `if`, `if...else` statements
  - How to use comments in C programs
  - How to declare variables of types `char`, `int`, `unsigned int`
  - How to assign values to variables
  - How to print the values of variables of type `char`, `int`, `unsigned int`

- **Loops**:
  - How to use the `while` loop
  - How to use variables with the `while` loop
  - How to print variables using `printf`
  - What is the ASCII character set
  - What are the purpose of the `gcc` flags `-m32` and `-m64`

## 🛠️ Requirements

### General
- **Allowed editors**: vi, vim, emacs
- **Compilation**: Ubuntu 20.04 LTS using `gcc`
- **Compiler flags**: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **File endings**: All files should end with a new line
- **Coding style**: Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- **Global variables**: Not allowed
- **Functions per file**: No more than 5
- **Standard library**: Only `printf`, `putchar` are allowed
- **Header file**: Not allowed to include any header file

## 📁 Files & Tasks

| File | Description | Concepts |
|------|-------------|----------|
| `0-positive_or_negative.c` | Determine if a random number is positive, negative, or zero | Variables, conditionals |
| `1-last_digit.c` | Print the last digit of a random number with conditions | Modulo operator, conditionals |
| `2-print_alphabet.c` | Print the alphabet in lowercase using `putchar` | Loops, ASCII values |
| `3-print_alphabets.c` | Print alphabet in lowercase, then uppercase | Loops, character manipulation |
| `4-print_alphabt.c` | Print alphabet except 'q' and 'e' | Loops, conditionals |
| `5-print_numbers.c` | Print single digit numbers from 0 to 9 | Loops, numeric output |
| `6-print_numberz.c` | Print numbers 0-9 using only `putchar` | ASCII arithmetic, loops |
| `7-print_tebahpla.c` | Print alphabet in reverse order | Reverse loops |
| `8-print_base16.c` | Print hexadecimal numbers (0-9, a-f) | Number systems, loops |
| `9-print_comb.c` | Print all single digit combinations | Loops, combinations |
| `100-print_comb3.c` | Print all two-digit combinations | Nested loops, combinations |
| `101-print_comb4.c` | Print all three-digit combinations | Complex nested loops |
| `102-print_comb5.c` | Print all combinations of two two-digit numbers | Advanced combinations |

## 🚀 Compilation & Usage

### Basic Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output_name
```

### Examples

#### Random Number Classification
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o positive_negative
./positive_negative
```

#### Print Alphabet
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-print_alphabet.c -o alphabet
./alphabet
# Output: abcdefghijklmnopqrstuvwxyz
```

#### Print Numbers
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-print_numbers.c -o numbers
./numbers
# Output: 0123456789
```

## 💡 Key Concepts

### Data Types in C
```c
char c = 'A';           // Single character (1 byte)
int num = 42;           // Integer (4 bytes typically)
unsigned int u_num = 42; // Non-negative integer
```

### Conditional Statements
```c
if (condition)
{
    // Code block
}
else if (another_condition)
{
    // Another code block
}
else
{
    // Default code block
}
```

### While Loops
```c
int i = 0;
while (i < 10)
{
    printf("%d ", i);
    i++;  // Increment to avoid infinite loop
}
```

### For Loops (Alternative)
```c
int i;
for (i = 0; i < 10; i++)
{
    printf("%d ", i);
}
```

### Operators

#### Arithmetic Operators
- `+` Addition
- `-` Subtraction  
- `*` Multiplication
- `/` Division
- `%` Modulo (remainder)

#### Comparison Operators
- `==` Equal to
- `!=` Not equal to
- `<` Less than
- `>` Greater than
- `<=` Less than or equal to
- `>=` Greater than or equal to

#### Logical Operators
- `&&` Logical AND
- `||` Logical OR
- `!` Logical NOT

### ASCII Character Set
- Characters are represented by numbers (0-127 for standard ASCII)
- 'A' = 65, 'a' = 97, '0' = 48
- You can perform arithmetic on characters:
  ```c
  char c = 'A' + 1;  // c = 'B'
  ```

## 📋 Task Examples

### Task 0: Positive or Negative
```c path=null start=null
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    int n;
    
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    
    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);
        
    return (0);
}
```

### Task 2: Print Alphabet
```c path=null start=null
#include <stdio.h>

int main(void)
{
    char letter = 'a';
    
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n');
    
    return (0);
}
```

### Task 5: Print Numbers
```c path=null start=null
#include <stdio.h>

int main(void)
{
    int num = 0;
    
    while (num < 10)
    {
        printf("%d", num);
        num++;
    }
    printf("\n");
    
    return (0);
}
```

## 🎨 Betty Style Guide

Key points for this project:
- Variables should be declared at the beginning of functions
- Use proper indentation (8-space tabs)
- Add spaces around operators: `i = 0` not `i=0`
- Use meaningful variable names
- Add comments for complex logic

## 🧪 Testing

```bash
# Compile with all flags
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Test individual programs
./0-positive_or_negative  # Run multiple times to see different outputs
./2-print_alphabet        # Should print: abcdefghijklmnopqrstuvwxyz
./5-print_numbers         # Should print: 0123456789

# Check Betty style
betty-style *.c
betty-doc *.c
```

## 🔍 Common Pitfalls

1. **Infinite Loops**: Always ensure loop conditions eventually become false
   ```c
   // BAD - infinite loop
   while (i < 10)
   {
       printf("%d", i);  // Forgot to increment i!
   }
   ```

2. **Off-by-one Errors**: Be careful with loop boundaries
   ```c
   // To print 0-9 (10 numbers)
   while (i < 10)  // Correct
   while (i <= 9)  // Also correct
   while (i <= 10) // Wrong - prints 11 numbers
   ```

3. **Assignment vs Comparison**: 
   ```c
   if (x = 5)  // Assignment (always true)
   if (x == 5) // Comparison (what you usually want)
   ```

## 📚 Resources

- [C Tutorial - Variables and Data Types](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)
- [C Control Statements](https://www.tutorialspoint.com/cprogramming/c_decision_making.htm)
- [ASCII Table](https://www.asciitable.com/)
- [C Operators](https://www.tutorialspoint.com/cprogramming/c_operators.htm)

---

**Master the fundamentals!** 🚀

*"The best programs are written by programmers who know the fundamentals inside and out."*
