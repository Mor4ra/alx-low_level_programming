# 0x08. C - Recursion

## Description
This directory contains simple C programs that solve practical tasks using the 
concept of recursion. Recursion is a powerful programming technique where a 
function calls itself to solve smaller instances of the same problem. It's 
particularly useful for problems that can be broken down into similar 
subproblems.

## Learning Objectives
By the end of this project, you should be able to explain to anyone, without 
the help of Google:
- What is recursion
- How to implement recursive functions
- In what situations you should implement recursion
- In what situations you shouldn't implement recursion
- How to identify the base case and recursive case
- Understanding the call stack in recursive functions

## Files
- `main.h` - Header file with function prototypes and necessary includes
- `0-puts_recursion.c` - Prints a string using recursion instead of loops
- `1-print_rev_recursion.c` - Prints a string in reverse using recursion
- `2-strlen_recursion.c` - Returns the length of a string using recursion
- `3-factorial.c` - Returns the factorial of a given number
- `4-pow_recursion.c` - Returns the value of x raised to the power of y
- `5-sqrt_recursion.c` - Returns the natural square root of a number
- `6-is_prime_number.c` - Returns 1 if number is prime, 0 otherwise
- `100-is_palindrome.c` - Returns 1 if string is a palindrome, 0 otherwise
- `101-wildcmp.c` - Compares two strings with wildcard support

## Key Concepts

### What is Recursion?
Recursion is a programming technique where a function calls itself to solve a 
problem by breaking it down into smaller, similar subproblems. Every recursive 
function must have:

1. **Base case**: A condition that stops the recursion
2. **Recursive case**: The function calling itself with modified parameters

### Anatomy of a Recursive Function
```c
int recursive_function(int n)
{
    /* Base case - prevents infinite recursion */
    if (n <= 0)
        return (some_value);
    
    /* Recursive case - function calls itself */
    return (some_operation(recursive_function(n - 1)));
}
```

### Example: Factorial Function
```c
int factorial(int n)
{
    /* Base case */
    if (n <= 1)
        return (1);
    
    /* Recursive case */
    return (n * factorial(n - 1));
}
```

### How Recursion Works (Call Stack)
When `factorial(5)` is called:
1. factorial(5) calls factorial(4)
2. factorial(4) calls factorial(3)
3. factorial(3) calls factorial(2)
4. factorial(2) calls factorial(1)
5. factorial(1) returns 1 (base case)
6. Then the stack unwinds: 2*1, 3*2, 4*6, 5*24
7. Final result: 120

## When to Use Recursion

### Good Use Cases:
- Tree and graph traversal
- Mathematical sequences (factorial, Fibonacci)
- Divide and conquer algorithms
- Parsing nested structures
- Backtracking problems
- Problems with self-similar subproblems

### When to Avoid Recursion:
- Simple iterative tasks
- When stack overflow is a concern
- Performance-critical code (recursion has overhead)
- When iterative solution is more readable

## Advanced Tasks - Extra Notes

### 100-is_palindrome.c - Palindrome Check
**Challenge Level: Advanced**

This function checks if a string reads the same forwards and backwards using 
recursion. A palindrome is a word, phrase, number, or other sequence of 
characters that reads the same forward and backward.

**Key Insights:**
- You need to compare characters from both ends moving inward
- The recursive approach compares first and last characters, then calls itself 
  on the substring without those characters
- Base cases: empty string or single character (both palindromes)
- Edge cases: strings with odd vs even length

**Algorithmic Approach:**
1. Compare first and last characters
2. If they don't match, return 0
3. If they match, recursively check the substring between them
4. Base case: when start index >= end index, return 1

**Example:**
- "racecar" -> compare 'r' and 'r', then check "aceca"
- "aceca" -> compare 'a' and 'a', then check "cec"
- "cec" -> compare 'c' and 'c', then check "e"
- "e" -> single character, return 1

### 101-wildcmp.c - Wildcard String Comparison
**Challenge Level: Expert**

This is the most complex task in the project. It compares two strings where 
the second string can contain wildcards ('*' that match any sequence of 
characters).

**Key Insights:**
- This implements a simplified version of pattern matching
- The '*' wildcard can match zero or more characters
- Multiple recursive calls may be needed to handle '*'
- This is similar to regex matching or shell glob patterns

**Algorithmic Approach:**
1. If both strings are empty, return 1 (match)
2. If pattern is empty but string isn't, return 0
3. If pattern has '*':
   - Try matching '*' with zero characters (skip '*')
   - Try matching '*' with one or more characters
4. If no '*', characters must match exactly

**Example Matches:**
- wildcmp("main.c", "*.c") -> 1 (matches)
- wildcmp("main.c", "m*a*c") -> 1 (matches)
- wildcmp("main.c", "m*a*x") -> 0 (doesn't match)
- wildcmp("main", "*") -> 1 (matches)

**Warning:** This function can be computationally expensive with multiple '*' 
wildcards due to the exponential number of possibilities it explores.
I almost went crazy with this one, i had the logic but i just couldn't put it in code.

## Debugging Recursive Functions

### Common Issues:
1. **Stack Overflow**: No proper base case or infinite recursion
2. **Wrong Base Case**: Incorrect termination condition
3. **Parameter Modification**: Not properly reducing the problem size
4. **Off-by-one Errors**: Especially with string indices

### Debugging Tips:
- Add printf statements to trace function calls
- Check your base cases first
- Ensure parameters are moving toward the base case
- Test with simple inputs first

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
```

## Testing Examples
```bash
# Test factorial
echo 'int main(void) { printf("%d\n", factorial(5)); return 0; }' > test.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-factorial.c test.c -o test
./test  # Should output: 120

# Test palindrome
echo 'int main(void) { printf("%d\n", is_palindrome("racecar")); return 0; }' > test.c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-is_palindrome.c test.c -o test
./test  # Should output: 1
```

## Requirements
- Betty coding style
- No global variables
- No loops (`for`, `while`, `do-while`) allowed - recursion only
- No standard library functions unless specified
- No more than 5 functions per file
- All functions must have proper prototypes in main.h

## Performance Considerations
Recursive functions use the call stack, which has limited space. Deep recursion 
can cause stack overflow. For large inputs, consider:
- Iterative alternatives
- Tail recursion optimization (if supported by compiler)
- Memoization for repeated subproblems

---

**Master the art of recursion!** 🚀

*"To understand recursion, you must first understand recursion."*
