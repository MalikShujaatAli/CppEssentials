# Merge Arrays

This program merges two arrays of integers entered by the user and displays the merged array.

## Description

The program prompts the user to input elements for two arrays of size 4. It then merges these two arrays into a single array of size 8 and displays the result.

## How to Use

1. **Compile the program:**

   Use a C++ compiler to compile the source code. For example, if you're using `g++`, you can compile the code with:
   ```sh
   g++ -o merge_arrays merge_arrays.cpp
   ```

2. **Run the executable:**

   ```sh
   ./merge_arrays
   ```

3. **Input the elements:**

   - Enter 4 elements for the first array when prompted.
   - Enter 4 elements for the second array when prompted.

4. **View the merged array:**

   The program will display the merged array consisting of the elements from both input arrays.

## Example

```
Enter elements of first array: 
1
2
3
4
Enter elements of second array: 
5
6
7
8
Merged array: 1 2 3 4 5 6 7 8 
```

## Code Explanation

### `main()` Function

- Declares two arrays `arr1` and `arr2` of size 4.
- Prompts the user to enter elements for both arrays.
- Calls the `merge()` function to merge the two arrays.

### `merge()` Function

- Takes two arrays `a` and `b` as input parameters.
- Declares a third array `arr3` of size 8.
- Copies elements from the first array `a` to the first half of `arr3`.
- Copies elements from the second array `b` to the second half of `arr3`.
- Prints the merged array `arr3`.

## Requirements

- A C++ compiler (e.g., g++, clang++)
- Basic understanding of arrays and input/output in C++
