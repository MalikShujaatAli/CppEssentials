# Sparse Matrix Checker

This project contains a simple C++ program to check whether a given 3x3 matrix is a sparse matrix or not. A sparse matrix is one in which the number of zero elements is greater than or equal to half of the total number of elements.

## Features

- Takes input for a 3x3 matrix.
- Displays the matrix.
- Checks and displays whether the matrix is sparse.

## Code Overview

### main function

1. **Input the matrix elements**: The user is prompted to enter the elements of a 3x3 matrix.
2. **Display the matrix**: The entered matrix is printed to the console.
3. **Check if the matrix is sparse**: The `checkSparseMatrix` function is called to determine if the matrix is sparse.

### checkSparseMatrix function

1. **Count zeros**: The function counts the number of zero elements in the matrix.
2. **Determine sparsity**: If the number of zero elements is greater than or equal to half the total number of elements (in this case, 4.5, rounded down to 4), it prints that the matrix is sparse; otherwise, it prints that the matrix is not sparse.

## How to Use

1. **Compile the Program**:
   ```sh
   g++ -o sparse_matrix_checker sparse_matrix_checker.cpp
   ```
   
2. **Run the Program**:
   ```sh
   ./sparse_matrix_checker
   ```

3. **Input the Matrix Elements**:
   Enter the elements when prompted. For example:
   ```
   Enter elements of array:
   1 0 0
   0 0 0
   0 0 1
   ```

4. **View the Result**:
   The program will display the entered matrix and print whether it is sparse or not.

## Example

### Input
```
Enter elements of array:
1 0 0
0 0 0
0 0 1
```

### Output
```
The matrix is:
1 0 0 
0 0 0 
0 0 1 

It is a Sparse matrix!
```

## Notes

- The program assumes a fixed 3x3 matrix size.
- Modify the `checkSparseMatrix` function for different matrix sizes or sparsity conditions.
- Ensure you have a C++ compiler installed to compile and run the program.
