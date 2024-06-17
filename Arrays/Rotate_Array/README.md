# Rotate Array

## Description
This C++ program allows the user to input an array of six integers and then rotate the array to the left by a specified number of positions. The program reads the array elements from the user, prompts for the number of rotations, performs the rotations, and outputs the resulting array.

## How It Works
1. The user is prompted to enter six elements for the array.
2. The user is then prompted to enter the number of times they wish to rotate the array to the left.
3. The program performs the left rotations and displays the resulting array.

## Program Structure

### Main Function
The `main()` function:
- Declares an array of size 6.
- Prompts the user to input the elements of the array.
- Calls the `rotate` function to perform the rotation.
- Returns 0 to indicate successful execution.

### Rotate Function
The `rotate()` function:
- Prompts the user to enter the number of left rotations.
- Performs the specified number of left rotations on the array.
- Displays the array after the rotations.

## Usage

To compile and run the program, use the following commands in your terminal:

```bash
g++ rotate_array.cpp -o rotate_array
./rotate_array
```

Follow the on-screen prompts to enter the elements of the array and the number of rotations.

## Example

### Input
```
Enter elements of the array:
1 2 3 4 5 6
Enter the number of times you want to rotate the array to the left:
2
```

### Output
```
Result after rotation:
3 4 5 6 1 2
```

## Notes
- The array size and the number of elements are fixed at 6.
- The rotation logic swaps elements to the left iteratively for the specified number of rotations.
- Ensure the input elements are integers for correct execution.

Feel free to modify and expand the program to handle arrays of different sizes or different types of rotations!
