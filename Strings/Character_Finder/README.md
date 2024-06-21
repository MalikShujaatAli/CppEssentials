# Character Finder

## Overview

**Character Finder** is a simple C++ program that searches for a specific character in a predefined array of characters. The program prompts the user to input a character and then checks if that character is present in the array. If found, it displays the index at which the character is located.

## Features

- Clears the console screen at the start of the program.
- Takes a single character input from the user.
- Searches for the character in a predefined array of characters.
- Displays the index positions where the character is found.

## How It Works

1. **Initialization**: The program initializes a character array `name` with predefined characters: `{'s', 'h', 'u', 'j', 'a', 'a', 't'}`.

2. **Clearing Screen**: The console screen is cleared using the `system("cls")` command (Note: This is specific to Windows. For other operating systems, this line might need to be changed or removed).

3. **User Input**: The program prompts the user to enter a single character.

4. **Search Operation**: The program iterates through the `name` array to check if the entered character matches any character in the array.

5. **Output**: If a match is found, the program outputs the index at which the character is found.

## Usage

1. **Compile the Program**: Use a C++ compiler to compile the code. For example, using g++:
    ```sh
    g++ -o Character_finder character_finder.cpp
    ```

2. **Run the Program**: Execute the compiled program:
    ```sh
    ./character_finder
    ```

3. **Enter Character**: Follow the prompt to enter a character. The program will display the index positions where the character is found in the array.

## Requirements

- A C++ compiler (e.g., g++, clang++)
- A terminal or command prompt to compile and run the program

## Notes

- The `system("cls")` command is used to clear the console screen on Windows systems. If you are using a different operating system, you may need to modify or remove this line.
- The predefined array has a fixed size of 7 characters. If you wish to search in a different array or change the array size, modify the `name` array and the loop condition accordingly.
