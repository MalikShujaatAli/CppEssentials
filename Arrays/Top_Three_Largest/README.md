# Top_three_Largest

## Description
This program takes five numbers as input from the user and identifies the three largest numbers among them. It then outputs these three largest numbers in descending order.

## Features
- Accepts five integer inputs from the user.
- Determines and displays the largest, second largest, and third largest numbers.

## Usage
1. **Compile the program**: 
    ```sh
    g++ -o Top_three_Largest Top_three_Largest.cpp
    ```
2. **Run the compiled program**:
    ```sh
    ./Top_three_Largest
    ```
3. **Input five numbers** when prompted.

## Example
```sh
Enter five numbers: 10 20 30 40 50
First largest number is: 50
Second largest number is: 40
Third largest number is: 30
```

## Code Explanation
The program consists of the following main parts:

1. **Input Section**: 
   - Prompts the user to enter five numbers.
   - Stores these numbers in an array.

2. **Finding the Largest Numbers**:
   - **First Largest**: 
     - Initializes `l1` with the first element of the array.
     - Iterates through the array to find the largest number and updates `l1` accordingly.
   - **Second Largest**: 
     - Initializes `l2` to the smallest possible integer (`INT_MIN`).
     - Iterates through the array to find the largest number smaller than `l1` and updates `l2`.
   - **Third Largest**: 
     - Initializes `l3` to `INT_MIN`.
     - Iterates through the array to find the largest number smaller than `l2` and updates `l3`.

3. **Output Section**: 
   - Displays the first, second, and third largest numbers.

## Notes
- The program assumes that all inputs are distinct integers. If there are duplicate values, the behavior might not be as expected for identifying the unique largest values.
- This program uses `INT_MIN` from the limits library to initialize the second and third largest numbers. Make sure your development environment supports this. If not, you can manually set it to a very small number.

