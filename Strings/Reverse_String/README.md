## Overview

This program is a simple C++ application that reads a series of characters input by the user until a null character (`\0`) is encountered, then outputs the characters in reverse order.

## Features

- Prompts the user to enter a series of characters.
- Stops reading input when the null character (`\0`) is entered.
- Displays the entered characters in reverse order.
- Utilizes dynamic memory allocation for storing the input characters.

## Usage

1. Compile the program using a C++ compiler.
2. Run the executable.
3. Enter a series of characters followed by the null character (`\0`) to stop the input.
4. The program will display the entered characters in reverse order.

## Example

```
Enter a series of characters and enter '\0' to stop inputting:

Hello\0

String in reverse order will be:

olleH
```

## Requirements

- A C++ compiler (e.g., g++, clang++)
- Basic understanding of C++ programming and command-line interface

## Compilation

To compile the program, use the following command (assuming the source file is named `reverse_string.cpp`):

```sh
g++ -o reverse_string reverse_string.cpp
```

## Execution

To execute the compiled program, use the following command:

```sh
./reverse_string
```

## Notes

- Ensure that the input ends with a null character (`\0`) to properly terminate the input sequence.
- The program uses dynamic memory allocation. Make sure to handle memory management properly to avoid memory leaks.
