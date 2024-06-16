# Reverse Array Program

## Overview

This program reverses the elements of an array input by the user. It uses dynamic memory allocation to handle the array and a separate function to reverse the array.

## Features

- Prompt the user to enter the number of elements in the array.
- Accept user input for the array elements.
- Reverse the elements of the array.
- Display the reversed array.

## Requirements

- A C++ compiler
- Basic knowledge of C++ and dynamic memory allocation

## Usage

1. **Compile the code**:
    ```sh
    g++ -o reverse_array reverse_array.cpp
    ```

2. **Run the executable**:
    ```sh
    ./reverse_array
    ```

3. **Follow the prompts**:
    - Enter the number of elements in the array.
    - Enter each element of the array when prompted.

4. **View the output**:
    - The program will display the elements of the array in reverse order.

## Code Explanation

### Main Function

The `main()` function does the following:
- Clears the screen using `system("cls")` (note: this is platform-specific and works on Windows).
- Prompts the user to enter the number of elements in the array.
- Dynamically allocates memory for the array using `new`.
- Accepts user input for each element of the array.
- Calls the `reverse()` function to reverse the array.
- Displays the reversed array.
- Deallocates the memory used by the array using `delete[]`.

### Reverse Function

The `reverse()` function takes two parameters:
- A pointer to the array (`int *p`).
- The number of elements in the array (`int n`).

It creates a new array (`q`) and fills it with elements from the original array (`p`) in reverse order. Finally, it returns the pointer to the new array.

## Example

Here's an example of how the program works:

```
Enter number of elements of the array: 5
Enter elements of array: 
Element 1: 1
Element 2: 2
Element 3: 3
Element 4: 4
Element 5: 5
The elements in reverse order are: 5 4 3 2 1
```

## Notes

- Ensure that the input is valid (e.g., entering an integer for the number of elements).
- The `system("cls")` command is used to clear the console screen and is platform-specific. For non-Windows systems, use `system("clear")` or remove this line.
- The program uses dynamic memory allocation, so remember to deallocate any allocated memory to avoid memory leaks.
