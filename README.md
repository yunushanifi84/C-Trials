# C Trial Programs Collection

This repository contains various C programming examples covering different concepts and algorithms.

## File Descriptions

### ATM Programs
- **atm.c**: A simple ATM program with options for withdrawing, depositing, checking balance, and returning card.
- **atm-advanced.c**: An advanced version of the ATM program with additional functionality for money transfers.

### Math Programs
- **calculator.c**: A program for basic mathematical operations (addition, subtraction, multiplication, division) and pattern displays.
- **factorial.c**: A program that calculates the factorial of a number.
- **fibonacci.c**: A program that generates a Fibonacci sequence.
- **fibonacci_v2.c**: An alternative implementation of the Fibonacci sequence generator.
- **gcd_lcm.c**: A program to calculate the Greatest Common Divisor (GCD) and Least Common Multiple (LCM) of two numbers.
- **quadratic_equation_solver.c**: A program to solve quadratic equations and find their roots.
- **quadratic_equation_solver_v2.c**: An improved version of the quadratic equation solver with complex number handling.
- **series_calculation.c**: A program that calculates a mathematical series based on user inputs.
- **SumOfTheBetweenNumbers.c**: A program that calculates the sum of numbers between two given numbers.

### Grading Programs
- **grade.c**: A program to calculate course grades based on midterm and final scores.
- **grade-calculator.c**: A comprehensive grade calculator for various courses.
- **grade_calculator_if.c**: A grade calculator using if statements.
- **grade_calculator_v2.c**: An alternative implementation of the grade calculator with different grading scales.

### Pattern Display Programs
- **butterfly_pattern.c**: A program that displays a butterfly pattern using asterisks.
- **diamond_pattern.c**: A program that displays a diamond pattern using asterisks.
- **hourglass_animation.c**: An animated hourglass pattern display that alternates between regular and sideways orientations.

### Other Programs
- **cone_volume.c**: A program to calculate the volume of a cone given its height and diameter.
- **digit_sum_and_count.c**: A program that calculates the sum of digits and counts the number of digits in a given number.
- **max_min_array.c**: A program that finds the maximum and minimum values in an array.
- **monkey_banana.c**: A simulation program that calculates how many bananas a monkey eats based on gender and cage entry times.

## How to Run

To compile and run any program, use:

```bash
gcc filename.c -o program
./program
```

For example:

```bash
gcc calculator.c -o calculator
./calculator
```

For programs that use the math library (like quadratic equation solvers):

```bash
gcc filename.c -o program -lm
./program
``` 

