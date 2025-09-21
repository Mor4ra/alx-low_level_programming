# 0x09. C - Static libraries

## Description
This directory hosts a static library that can be used for linking with 
programs or projects, along with a Bash script that creates a static library 
from all C files in the current directory. You'll learn how to create, use, 
and manage static libraries in C programming.

## Learning Objectives
- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of `ar`, `ranlib`, `nm` commands
- What are the differences between static and shared libraries
- How to use static libraries in your programs

## Files
- `main.h` - Header file with all function prototypes
- `libmy.a` - Static library containing compiled functions
- `create_static_lib.sh` - Script that creates a static library from all .c files
- Individual `.c` files with function implementations:
  - `0-isupper.c`, `0-memset.c`, `0-strcat.c`
  - `1-isdigit.c`, `1-memcpy.c`, `1-strncat.c`
  - `2-strlen.c`, `2-strchr.c`, `2-strncpy.c`
  - `3-islower.c`, `3-strcmp.c`, `3-strspn.c`
  - `4-isalpha.c`, `4-strpbrk.c`
  - `5-strstr.c`, `6-abs.c`
  - `9-strcpy.c`, and more...

## Key Concepts

### What is a Static Library?
A static library (`.a` file) is a collection of compiled object files bundled 
together. When you link your program with a static library, the linker copies 
the needed functions directly into your executable.

### Advantages of Static Libraries:
- Faster execution (no runtime linking)
- Self-contained executables
- No dependency issues

### Disadvantages:
- Larger executable files
- Code duplication across programs
- Need to recompile programs when library changes

## Creating and Using Static Libraries

### Step 1: Compile source files to object files
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
```

### Step 2: Create the static library
```bash
ar rcs libmy.a *.o
```

### Step 3: Use the library in your program
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -L. -lmy -o program
```

### Useful Commands:
- `ar rcs libname.a *.o` - Create static library
- `ar t libname.a` - List contents of library
- `nm libname.a` - List symbols in library
- `ranlib libname.a` - Generate index for library (usually automatic)

## Script Usage

### create_static_lib.sh
This script automatically creates a static library from all `.c` files in the 
current directory:
```bash
./create_static_lib.sh
# Creates liball.a containing all functions
```

## Compilation Examples

### Using the library:
```bash
# Compile with library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -L. -lmy -o program

# Alternative method
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c libmy.a -o program
```

### Testing functions:
```bash
# Test a specific function
echo '#include "main.h"
int main(void) { return (_strlen("Hello")); }' > test.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test.c -L. -lmy -o test
./test
echo $?  # Should output: 5
```

## Requirements
- Betty coding style
- No global variables
- No more than 5 functions per file
- All function prototypes should be in `main.h`
- Use only allowed functions for each task

## Common Issues

### Library not found:
```bash
# Error: cannot find -lmy
# Solution: Make sure libmy.a is in current directory or use -L flag
gcc main.c -L/path/to/library -lmy -o program
```

### Undefined reference:
```bash
# Error: undefined reference to 'function_name'
# Solution: Make sure function is included in the library
ar t libmy.a  # Check if function's object file is included
```

---

**Build reusable code libraries!** 🚀

*"Libraries are the foundation of efficient software development."*
