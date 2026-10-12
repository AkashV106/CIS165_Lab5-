# AI Reflection

**Tools used:** I used Claude to learn how to use pow from <cmath> for exponentiation in my formulas, and to review my finished programs for problems.

**One decision:** Claude suggested changing the number of payments and the times compounded to int, and adding input validation. I accepted the int change, because these values are always whole numbers, and it does not change the results since C++ converts an int to a double when they are combined in a calculation. I rejected input validation, because the lab does not require it and my programs work correctly for the required tests.

**Verification:** I did not rely on AI saying the code was correct. I compiled both programs with -Wall -Wextra and checked for warnings. I ran the assigned tests and compared them to the expected values: $43.34 interest and $1,043.34 for compound interest, and $332.14, $11,957.15, and $1,957.15 for the loan. For my own second tests, I calculated the expected results by hand before running the programs, and the outputs matched.

**Learning:** I can now convert a percentage into a decimal and a monthly rate, use pow to apply a formula, and format a report with fixed, setprecision, and setw. I still need to practice how to debug the code more effectively.
