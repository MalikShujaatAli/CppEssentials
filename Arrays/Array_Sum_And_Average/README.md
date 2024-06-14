# Array Sum and Average Calculator

This program calculates the sum and average of a user-defined array of non-negative integers.

## Features

- Prompts the user to input the number of elements in the array.
- Ensures that all input numbers are non-negative.
- Computes the sum of the array elements.
- Computes the average of the array elements.
- Displays the sum and average to the user.

## How to Run

1. **Compile the Program:**
   Ensure you have a C++ compiler installed. You can use `g++` to compile the program. Open your terminal or command prompt and navigate to the directory where the `Array_Sum_And_Average.cpp` file is located.

   ```bash
   g++ average_value_of_1D_Dynamic_array.cpp -o Array_Sum_And_Average
   ```

2. **Run the Program:**
   After compiling, you can run the executable:

   ```bash
   ./Array_Sum_And_Average
   ```

3. **Follow the Prompts:**
   - Enter the number of elements for the array.
   - Enter each element when prompted. Ensure all elements are non-negative.

## Code Explanation

- **Main Function:**
  - Clears the console screen.
  - Prompts the user for the number of elements in the array.
  - Dynamically allocates memory for the array.
  - Prompts the user to enter each element, ensuring no element is negative.
  - Calls the `sum` function to compute the sum and subsequently the average of the array.

- **Sum Function:**
  - Calculates the sum of the elements in the array.
  - Calls the `avg` function to calculate and display the average.

- **Avg Function:**
  - Computes the average of the array elements and displays it.

## Example

```bash
Enter the number of elements of the array: 5
Number 1: 10
Number 2: 20
Number 3: 30
Number 4: 40
Number 5: 50

The sum of array is: 150

The average of array is: 30.0
```

## Note

- This program ensures all input numbers are non-negative by re-prompting the user if a negative number is entered.
