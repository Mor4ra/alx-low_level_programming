# 0x03. C - Debugging

## Description
As the title states, this folder focuses on fixing or improving certain code/functions which may or may not be in other directories. This is my first attempt at actual debugging - I'll try the **rubber duck** debugging technique. All code (entirely C) will use the **Betty** style.

## Learning Objectives
- What is debugging
- What are some methods of debugging manually
- How to read error messages
- How to fix logical errors in code

## Files
- `0-main.c`, `main.h` - Test and fix positive_or_negative() function
- `1-main.c` - Fix infinite loop
- `2-largest_number.c`, `main.h` - Fix function that finds the largest of 3 integers
- `3-print_remaining_days.c`, `main.h` - Fix function that converts date to day of year

## Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o debug
```

## Debugging Methods
- Manual debugging by reading code
- Rubber duck debugging
- Using print statements to trace execution
- Step-by-step code analysis

### Important Notes on `print_remaining_days()` Function
Regarding the `print_remaining_days()` function, there are some important assumptions you (the reader) should know about. I wrote this function assuming it only receives valid months and days - I don't have to worry about someone entering invalid months like "13" or days like "0" or "32". The program will only receive months from 1-12 and days from 1-31.

**Other Assumptions:**
- **Valid month/day combinations**: The function doesn't expect invalid input like "June 31st" (which doesn't exist).
- **Leap year handling**: The function does handle valid month/day/year combinations properly. For example, "February 29, 1991" should be correctly identified as invalid since 1991 is not a leap year. February 29th is a valid month/day combination, but it doesn't exist in 1991.

## Requirements
- Betty coding style
- Files must compile without errors
- Only fix what's broken - don't add extra functionality
