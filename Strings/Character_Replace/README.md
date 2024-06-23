# Character_Replace

## Overview

`character_replace` is a simple C++ program that demonstrates character replacement within a fixed array of characters. The program iterates through a predefined array of characters and replaces specific characters based on certain conditions. The modified characters are then printed to the console.

## Code Description

The code defines a main function that performs the following steps:

1. Initializes an array `word` containing the characters `{'z', 'e', 'b', 'r', 'a'}`.
2. Iterates through each character in the array.
3. Checks each character and replaces it according to the following rules:
   - If the character is `'a'`, it is replaced with `'b'`.
   - If the character is `'p'`, it is replaced with `'q'`.
   - If the character is `'z'`, it is replaced with `'a'`.
   - If the character does not match any of the above, it remains unchanged.
4. Prints each character (whether modified or not) to the console.
5. Prints two newline characters for formatting purposes.

## How to Use

To compile and run the program, follow these steps:

1. Save the code in a file named `Character_Replace.cpp`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the `Character_Replace.cpp` file.
4. Compile the program using a C++ compiler, for example:
   ```sh
   g++ -o character_replace character_replace.cpp
   ```
5. Run the compiled program:
   ```sh
   ./character_replace
   ```

## Example Output

When you run the program, you will see the following output:

```
aebrb
```

Explanation of the output:
- `'z'` is replaced with `'a'`
- `'e'` remains `'e'`
- `'b'` remains `'b'`
- `'r'` remains `'r'`
- `'a'` is replaced with `'b'`

## Contributing

If you have any suggestions or improvements, feel free to create a pull request or open an issue on the repository.
