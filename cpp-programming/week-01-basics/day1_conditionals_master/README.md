Day 2 of C++
Since AI is my teacher for now and I learned many things today
these are the parts where I got stuck. Using Ai doesnt mean cheating as far as u are only seeking knowledge from it
as copy pasting is not what professionals do.

Progress:

Phase:** 1 (Systems Foundations)
Current Focus: Deep-diving into conditional branching, operator precedence, and memory validation in C++.
Status: Challenges 13 through 17 completely implemented, debugged, and pushed!

Lessons Learned & Hurdles Overcome

1. The Leap Year Funnel (`16_leap_year_or_not.cpp`)
The Difficulty: Handling the century rule exception (divisible by 100 but not 400). My initial simple rules kept marking years like `1900` as leap years incorrectly.
Then I Learned how operator precedence and grouping operators with parentheses `( )` creates a strict logical funnel. I chained `(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)` to perfectly isolate the calendar exceptions.

2. The Software Licensing System (`17_licensing_system.cpp`)
The Difficulty: Hit a massive "Ghost Value" bug by calculating prices before receiving user inputs (`cin`). I also ran into logical scope leaks where the program calculated total costs even if the number of licenses was invalid.
Then I Restructured the program layout to prioritize strict security validation boundaries (`if (nosl >= 100 || nosl < 1)`) at the very top.
  2. Wrapped the entire operational code inside a master `else` block to prevent unsafe execution leaks.
  3. Corrected precision math by using proper decimal multipliers (`0.1` and `0.05`) instead of the arithmetic modulo operator `%`.

Compilation & Verification Command Used
```bash
g++ 17_licensing_system.cpp -o 17_licensing_system && ./17_licensing_system