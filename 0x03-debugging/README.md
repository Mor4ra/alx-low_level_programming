## Debugging
 - As the title states, this folder solely focuses on fixing or improving certain code/functions which may or many not be in other directories.
 - First attempt at actually debugging, i'll try the **rubber duck** thing.
 - All code(entirely C) will use the **Betty** style.

### "Closing Remarks"
 - Considering the last function `print_remaining_day()`, there's
 - some things you(the reader) should know, i wrote this function
 - whilst(while?) assuming it only ever receives, good months and
 - days - I don't have to worry about someone typing in crazy
 - months like "13" or days like "0" or "32". The program will
 - only get months from 1 - 12 and days from 1 -31.
 - **Other Assumptions:**
 - Valid month/Day combinations: The function doesn't expect an
 - input like "june 31st"(Doesn't exist, it's invalid).
 - But, the function does handle valid month/day/year combinations
 - like "February 29, 1991" should be properly dealt with as it's
 - not a real day in the year 1991, feb 29th is a valid month/day
 - combination but it doesn't exist in 1991.
