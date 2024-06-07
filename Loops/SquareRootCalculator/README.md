# SquareRootCalculator

SquareRootCalculator is a simple C++ program that calculates and displays the squares of numbers starting from 1 up to a user-defined number. This program is intended for educational purposes to demonstrate basic C++ programming concepts such as input/output operations, loops, and control statements.

## Overview

SquareRootCalculator is a console-based application written in C++. It prompts the user to enter a number and then calculates the squares of all integers from 1 up to the entered number. The results are displayed in a tabular format.

## Features

- Simple and easy-to-use interface
- Calculates squares of numbers from 1 to a user-defined limit
- Displays results in a neatly formatted table

## Installation

To run the SquareRootCalculator program, you need to have a C++ compiler installed on your system. Follow the steps below to compile and run the program:

1. Copy the source code into a file named `SquareRootCalculator.cpp`.
2. Open a terminal or command prompt.
3. Navigate to the directory where `SquareRootCalculator.cpp` is saved.
4. Compile the program using a C++ compiler. For example, using `g++`:
   ```
   g++ -o SquareRootCalculator SquareRootCalculator.cpp
   ```
5. Run the compiled executable:
   ```
   ./SquareRootCalculator
   ```

## Usage

1. When you run the program, you will be prompted to enter a number.
2. Enter an integer value representing the upper limit for calculating squares.
3. The program will then display a table with numbers and their corresponding squares.

Example:

```
Upto which number you want to find the square roots?
Enter a number: 5
Number          It's Square
------          -----------
1               1
2               4
3               9
4               16
5               25
```

## Code Explanation

### Detailed Explanation

1. **Header File**: The program includes the `iostream` header file, which is necessary for input and output operations.
   
2. **Namespace**: The `using namespace std;` statement allows the program to use standard library functions without prefixing them with `std::`.

3. **Main Function**: The `main` function is the entry point of the program.
   
4. **Clear Screen**: `system("cls");` clears the console screen (this works on Windows. For Linux or macOS, use `system("clear");`).

5. **User Input**: The program prompts the user to enter a number and stores it in variable `a`.

6. **Table Header**: The program prints the header for the table that will display the numbers and their squares.

7. **Loop**: A `while` loop runs until the value of `a` is decremented to 0. Inside the loop:
   - The program prints the current number (`num`) and its square (`num * num`).
   - The value of `num` is incremented by 1.
   - The value of `a` is decremented by 1.

8. **Return Statement**: The `return 0;` statement indicates that the program has executed successfully.

## Contributing

Contributions are welcome! If you have suggestions for improvements or find any bugs, please feel free to submit a pull request or open an issue.
