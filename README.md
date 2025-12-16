command_line_calculator/
│
├── calc_basic.c          ← main script (entry file)
├── README.md             ← project explanation
└── project_details.json  ← project metadata (as per your format)




# Command-Line Calculator (C Program)

This project is a simple interactive terminal-based calculator written in C.

## Features
- Accepts two integers and an operator (+, -, *, /, %)
- Performs arithmetic operations
- Handles invalid operators gracefully
- Prevents division/modulus by zero
- Shows clear, formatted output

## How to Compile & Run
gcc calc_basic.c -o calc_basic && ./calc_basic

## Example Test Cases
Input:
15
3
+
Output:
Result: 15 + 3 = 18

Input:
7
0
/
Output:
Error: Division by zero!
