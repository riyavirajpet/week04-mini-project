# Temperature Converter

**Class:** EECE 2140 - Programming Fundamentals for Engineers
**Names:** Riya Virajpet & Chloe McCarrick
**Date:** October 9th, 2026
**Language:** C++

## Description
This program is a temperature converter from Celsius to Fahrenheit and vice versa. It gives the user an option to pick between a C-F or F-C conversion. The choice from this menu is executed using a switch case, if the user enters an unauthorized option, it will return as invalid and exit the program. Then the user inputs the temperature value that they wish to convert. If the value is not accepted (ex. a character) then the program will return that they entered an invalid input and exit the program.

## Project Structure

```
week02-mini-project/
├── src/
│   └── main.cpp          # the program
├── tests/
│   ├── input1.txt        # test inputs
│   ├── input2.txt
│   ├── input3.txt
│   ├── input4.txt
│   ├── expected1.txt     # expected program output for each input
│   ├── expected2.txt
│   ├── expected3.txt
│   └── expected4.txt
├── test.sh               # builds the program and runs all acceptance tests
├── CONTRIBUTIONS.md
└── README.md
```

## Setup

**Requirements**

- A C++ compiler that supports C++17 (`g++` is used in this project)
- `bash` (to run the test script)

**Get the code**

```bash
git clone https://github.com/riyavirajpet/week02-mini-project.git
cd week02-mini-project
```

No third-party libraries or environment variables are needed.

## Input/Output Contract

**Input** (read from standard input, one value per line or separated by whitespace):

1. A menu choice, integer variable type: `1` for Celsius to Fahrenheit, `2` for Fahrenheit to Celsius.
2. A temperature, a whole number (negative values are allowed).

**Output** (written to standard output):

| Situation | Output |
|-----------|--------|
| Choice `1` and a valid integer | `<C> C converts to <F> F` |
| Choice `2` and a valid integer | `<F> F converts to <C> C` |
| Choice is anything other than `1` or `2` | `Invalid Choice` |
| Temperature is not a valid integer | `Invalid input` |

Every run begins by printing the menu and the `Choice: ` prompt, followed by the temperature prompt if the choice was valid. The program always exits with return 0, even after invalid input.

**Formulas** (integer arithmetic):

- F = (C × 9 / 5) + 32
- C = (F − 32) × 5 / 9

**Example 1** (input `1`, `0`):

```
1: Celsius to Fahrenheit 2: Fahrenheit to Celsius
Choice: Enter temperature in Celsius: 0 C converts to 32 F
```

**Example 2** (input `2`, `-5`):

```
1: Celsius to Fahrenheit 2: Fahrenheit to Celsius
Choice: Enter temperature in Fahrenheit: -5 F converts to -20 C
```

**Example 3** (input `5`):

```
1: Celsius to Fahrenheit 2: Fahrenheit to Celsius
Choice: Invalid Choice
```

## Build and Test

**Build**

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o build/app
```

**Run**

```bash
./build/app
```

**Run the acceptance tests** (this also builds the program):

```bash
bash test.sh
```

`test.sh` compiles `src/main.cpp`, runs the program on each `tests/inputN.txt`, and compares the result against `tests/expectedN.txt` using `diff`. If every comparison matches, it prints `All acceptance tests passed`. If one fails, `diff` shows which lines differ.

| Test | Input | What it checks |
|------|-------|----------------|
| 1 | `1`, `0` | Celsius to Fahrenheit (0 C = 32 F) |
| 2 | `2`, `32` | Fahrenheit to Celsius (32 F = 0 C) |
| 3 | `5` | Invalid menu choice |
| 4 | `2`, `-5` | Negative temperature (-5 F = -20 C) |

## Limitations

- **Whole numbers only.** All values are stored as `int`
- **Results are truncated, not rounded.** The math uses integer division, may cause variation by up to 1 degree.
- **One conversion per run.** The program exits after a single conversion and does not loop back to the menu.
- **Very large values can overflow**

## Pseudocode 
- START

- DECLARE integer choice 
- DECLARE integer C 
- DECLARE integer F
- DISPLAY "1: Celsius to Fahrenheit 2: Fahrenheit to Celsius" 
- DISPLAY "Choice: " 
- READ choice
- SWITCH choice
- CASE 1: 
    - DISPLAY "Enter temperature in Celsius: " 
    - IF reading an integer into C succeeds 
    - THEN 
    - CALCULATE F = (C * 9 / 5) + 32 
    - DISPLAY "Fahrenheit: ", 
    - IF ELSE DISPLAY "Invalid input" 
    - END IF 
    - BREAK

- CASE 2: 
    - DISPLAY "Enter temperature in Fahrenheit: " 
    - IF reading an integer into F succeeds 
    - THEN CALCULATE C = (F - 32) * 5 / 9 DISPLAY "Celsius: ", C 
    - ELSE DISPLAY "Invalid input" 
    - END IF 
    - BREAK

- DEFAULT: 
    - DISPLAY "Invalid Choice"

- END SWITCH

- END PROGRAM

## AI-Use Disclosure

AI use on this project was limited. AI was used to look up GitHub and Git commands. AI was also used to help draft and format this README. The program logic in `main.cpp`, the test files, and the test script were written by the team members listed in `CONTRIBUTIONS.md`.
