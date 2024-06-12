# Array_Input_output

## Overview

This project is a simple C++ program that demonstrates how to input and output values in a two-dimensional array. The program prompts the user to enter values for each position in a 2x3 array and then prints out the values along with their respective positions.

## Files

- `README.md`: This readme file providing an extensive description of the project.
- `main.cpp`: The main source file containing the C++ code for the project.

## Detailed Explanation

1. **Include Libraries**:
   ```cpp
   #include <iostream>
   using namespace std;
   ```
   The program starts by including the `iostream` library which is necessary for input and output operations.

2. **Main Function**:
   ```cpp
   int main() {
   ```
   The main function is the entry point of the program.

3. **Array Declaration**:
   ```cpp
   int arr[2][3];
   ```
   A 2x3 integer array `arr` is declared.

4. **Input Loop**:
   ```cpp
   for (int i = 0; i < 2; i++) {
       for (int j = 0; j < 3; j++) {
           cout << "Enter a number for position [" << i << "][" << j << "]: ";
           cin >> arr[i][j];
       }
   }
   ```
   Nested loops are used to iterate through each element of the array, prompting the user to input a number for each position.

5. **Output Loop**:
   ```cpp
   cout << endl;

   for (int i = 0; i < 2; i++) {
       for (int j = 0; j < 3; j++) {
           cout << "You have entered: " << arr[i][j] << " at position [" << i << "][" << j << "]" << endl;
       }
   }
   ```
   After all inputs are collected, another set of nested loops is used to iterate through the array and print out the values along with their positions.

6. **Return Statement**:
   ```cpp
   return 0;
   ```
   The program ends with a return statement.

## Compilation and Execution

### Windows

1. Open a command prompt.
2. Navigate to the `Array_Input_output` folder.
3. Compile the program using a C++ compiler like `g++`:
   ```sh
   g++ -o build/Array_Input_output.exe main.cpp
   ```
4. Run the executable:
   ```sh
   build\Array_Input_output.exe
   ```

### Linux/Mac

1. Open a terminal.
2. Navigate to the `Array_Input_output` folder.
3. Compile the program using a C++ compiler like `g++`:
   ```sh
   g++ -o build/Array_Input_output main.cpp
   ```
4. Run the executable:
   ```sh
   ./build/Array_Input_output
   ```

## Usage

1. The program will prompt you to enter a number for each position in the 2x3 array.
2. Enter the numbers as prompted.
3. The program will then display each number along with its position in the array.

Example interaction:

```
Enter a number for position [0][0]: 1
Enter a number for position [0][1]: 2
Enter a number for position [0][2]: 3
Enter a number for position [1][0]: 4
Enter a number for position [1][1]: 5
Enter a number for position [1][2]: 6

You have entered: 1 at position [0][0]
You have entered: 2 at position [0][1]
You have entered: 3 at position [0][2]
You have entered: 4 at position [1][0]
You have entered: 5 at position [1][1]
You have entered: 6 at position [1][2]
```

## Conclusion

This project provides a simple example of using two-dimensional arrays in C++ for input and output operations. By following the steps outlined in this README, you can compile and run the program on your system.
