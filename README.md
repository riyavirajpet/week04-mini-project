Class: EECE 2140 - Programming Fundamentals for Engineers Names: Riya Virajpet & Chloe McCarrick Date: October 9th, 2026 Language: C++

Description/Logic: This program is a temperature converter from Celsius to Fahrenheit and vice versa. It gives the user an option to pick between a C-F or F-C conversion. The choice from this menu is executed using a switch case, if the user enters an unauthorized option, it will return as invalid and exit the program. Then the user inputs the temperature value that they wish to convert. If the value is not accepted (ex. a character) then the program will return that they entered an invalid input and exit the program.

Pseudocode: START

DECLARE integer choice DECLARE integer C DECLARE integer F

DISPLAY "1: Celsius to Fahrenheit 2: Fahrenheit to Celsius" DISPLAY "Choice: " READ choice

SWITCH choice

CASE 1: DISPLAY "Enter temperature in Celsius: " IF reading an integer into C succeeds THEN CALCULATE F = (C * 9 / 5) + 32 DISPLAY "Fahrenheit: ", F ELSE DISPLAY "Invalid input" END IF BREAK

CASE 2: DISPLAY "Enter temperature in Fahrenheit: " IF reading an integer into F succeeds THEN CALCULATE C = (F - 32) * 5 / 9 DISPLAY "Celsius: ", C ELSE DISPLAY "Invalid input" END IF BREAK

DEFAULT: DISPLAY "Invalid Choice"

END SWITCH

END PROGRAM

AI Use: Limited AI use to refer to GitHub commands
