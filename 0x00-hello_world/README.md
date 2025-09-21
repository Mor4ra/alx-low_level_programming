# 0x00. C - Hello, World

![C Programming](https://img.shields.io/badge/Language-C-blue.svg)
![Difficulty](https://img.shields.io/badge/Difficulty-Beginner-green.svg)

## 📖 Description

This project introduces the fundamentals of C programming, covering basic syntax, compilation process, and your first C programs. You'll learn how to print text, work with different output functions, and understand the compilation process from source code to executable.

## 🎯 Learning Objectives

By the end of this project, you should be able to explain:

- **History & Basics**:
  - Who invented C and when
  - Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds
  - What happens when you type `gcc main.c`
  - What is an entry point and what is `main`

- **Compilation Process**:
  - How to print text using `printf`, `puts`, and `putchar`
  - How to get the size of a specific type using `sizeof` operator
  - How to compile using `gcc`
  - What is the official C coding style (Betty style)

## 🛠️ Requirements

### General
- **Allowed editors**: vi, vim, emacs
- **Compilation**: Ubuntu 20.04 LTS using `gcc`
- **Compiler flags**: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **File endings**: All files should end with a new line
- **Coding style**: Betty style (checked using `betty-style.pl` and `betty-doc.pl`)
- **Global variables**: Not allowed
- **Functions per file**: No more than 5
- **Standard library**: Only `printf`, `puts`, and `putchar` are allowed

## 📁 Files

| File | Description |
|------|-------------|
| `4-puts.c` | Program that prints a string using `puts()` |
| `5-printf.c` | Program that prints formatted text using `printf()` |
| `6-size.c` | Program that prints the size of various data types |
| `101-quote.c` | Program that prints a specific quote to stderr |

## 🚀 Compilation & Usage

### Basic Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 filename.c -o output_name
```

### Examples

#### Using puts()
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts_program
./puts_program
```

#### Using printf()
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c -o printf_program
./printf_program
```

#### Checking data type sizes
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 6-size.c -o sizes
./sizes
```

## 📋 Tasks Overview

### 0. Preprocessor
**File**: `0-preprocessor`
- Write a script that runs a C file through the preprocessor and saves the result

### 1. Compiler
**File**: `1-compiler`
- Write a script that compiles a C file but does not link

### 2. Assembler
**File**: `2-assembler`
- Write a script that generates the assembly code of a C file

### 3. Name
**File**: `3-name`
- Write a script that compiles a C file and creates an executable named `cisfun`

### 4. Hello, puts
**File**: `4-puts.c`
- Write a C program that prints exactly a specific string, followed by a new line

### 5. Hello, printf
**File**: `5-printf.c`
- Write a C program that prints exactly a formatted string

### 6. Size is not grandeur
**File**: `6-size.c`
- Write a C program that prints the size of various types on the computer it is compiled and run on

### 7. Advanced: What happens when you type gcc main.c
**File**: `101-quote.c`
- Write a C program that prints a specific quote to the standard error

## 💡 Key Concepts

### The Compilation Process
1. **Preprocessing**: Handle directives (`#include`, `#define`)
2. **Compilation**: Convert C code to assembly language
3. **Assembly**: Convert assembly to machine code (object files)
4. **Linking**: Combine object files to create executable

### Output Functions
- **`printf()`**: Formatted output to stdout
- **`puts()`**: Simple string output to stdout (adds newline)
- **`putchar()`**: Single character output to stdout

### Data Type Sizes
The `sizeof` operator returns the size in bytes of data types:
```c
printf("Size of char: %lu byte(s)\n", sizeof(char));
printf("Size of int: %lu byte(s)\n", sizeof(int));
printf("Size of float: %lu byte(s)\n", sizeof(float));
```

## 🎨 Betty Style Guide

Ensure your code follows the Betty coding style:
- Use 8-space tabs for indentation
- No trailing whitespace
- Functions should not exceed 40 lines
- No more than 80 characters per line
- Proper commenting and documentation

## 🧪 Testing

Test your programs with various inputs and edge cases:
```bash
# Test compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

# Run betty style checker
betty-style filename.c
betty-doc filename.c
```

## 📚 Resources

- [C Programming Language (2nd Edition)](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan/dp/0131103628)
- [Learn C Programming](https://www.learn-c.org/)
- [GCC Documentation](https://gcc.gnu.org/onlinedocs/)
- [Betty Style Guide](https://github.com/holbertonschool/Betty)

---

**Welcome to C Programming!** 🚀

*"C is quirky, flawed, and an enormous success."* - Dennis Ritchie
