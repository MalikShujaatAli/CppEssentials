# Vowels Counter

## Overview

`count_vowels.cpp` is a C++ program designed to count the number of vowels in a user-provided word. The program prompts the user to input a word consisting of a maximum of 10 letters, then calculates and outputs the number of vowels in the word.

## Features

- Accepts a word input with a maximum length of 10 characters.
- Counts both uppercase and lowercase vowels (`a, e, i, o, u, A, E, I, O, U`).
- Outputs the total number of vowels present in the input word.

## How to Use

To compile and run the program, follow these steps:

1. Save the code in a file named `count_vowels.cpp`.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the `count_vowels.cpp` file.
4. Compile the program using a C++ compiler, for example:
   ```sh
   g++ -o count_vowels count_vowels.cpp
   ```
5. Run the compiled program:
   ```sh
   ./count_vowels
   ```

## Example Usage

When you run the program, you will be prompted to enter a word. For example:

```
Enter a word consisting of maximum 10 letters: OpenAI
Total number of vowels in this word is 3
```

Explanation:
- The input word "OpenAI" contains the vowels `O`, `e`, and `A`.
- The program correctly counts and displays the total number of vowels, which is 3 in this case.

## Limitations

- The program only processes words with a maximum length of 10 characters.
- It counts vowels within the first 10 characters of the input.

## Contributing

If you have suggestions or improvements, feel free to create a pull request or open an issue on the repository.
