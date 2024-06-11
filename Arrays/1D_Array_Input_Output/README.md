# 1D_Array_Input_Output

## Description
This project contains a simple C++ program that demonstrates basic array operations such as inputting values into an array and printing the array's contents. The program prompts the user to enter 10 integers, stores them in an array, and then displays these integers.

## Features
- **Input Function**: Allows the user to input 10 integers into an array.
- **Print Function**: Displays the integers stored in the array.
- **Clear Screen**: Clears the console screen at the start of the program for better readability.

## Files
- `main.cpp`: Contains the main logic of the program.
- `README.md`: Provides an overview and instructions for the project.

## Code Overview
The program consists of three main parts:
1. **input(int arr[])**: This function takes an array as an argument and fills it with integers provided by the user.
2. **print(int arr[])**: This function takes an array as an argument and prints its contents to the console.
3. **main()**: The entry point of the program. It clears the screen, initializes the array, calls the input function to fill the array, and then calls the print function to display the array's contents.

## Getting Started

### Prerequisites
- A C++ compiler (e.g., g++, clang)
- A terminal or command prompt

### Installation
1. Clone the repository to your local machine.
    ```sh
    git clone https://github.com/MalikShujaatAli/1D_Array_Input_Output.git
    ```
2. Navigate to the project directory.
    ```sh
    cd 1D_Array_Input_Output
    ```

### Usage
1. Compile the program.
    ```sh
    g++ main.cpp -o array_io
    ```
2. Run the executable.
    ```sh
    ./array_io
    ```

### Example
```
Enter number 1: 5
Enter number 2: 10
Enter number 3: 15
Enter number 4: 20
Enter number 5: 25
Enter number 6: 30
Enter number 7: 35
Enter number 8: 40
Enter number 9: 45
Enter number 10: 50

Numbers in array are

Number 1: 5
Number 2: 10
Number 3: 15
Number 4: 20
Number 5: 25
Number 6: 30
Number 7: 35
Number 8: 40
Number 9: 45
Number 10: 50
```

## Contributing
Contributions are welcome! Please fork this repository and submit pull requests for any enhancements, bug fixes, or suggestions.
