# Dynamic Array First and Last Elements

This is a simple C++ program named `dynamic_array_first_last` that demonstrates dynamic memory allocation for an array, taking user input for array elements, and displaying the first and last elements of the array.

## Code Explanation

### 1. Include Header
```cpp
#include<iostream>
using namespace std;
```
- `#include<iostream>`: This line includes the standard input-output stream library.
- `using namespace std;`: This line allows the program to use all the entities in the `std` namespace.

### 2. Main Function
```cpp
int main() {
```
- This is the entry point of the C++ program.

### 3. Declare Variables
```cpp
    int size;
```
- `int size;`: Declares an integer variable `size` to store the size of the array.

### 4. Input Array Size
```cpp
    cout << "Enter the size of the array: ";
    cin >> size;
```
- Prompts the user to enter the size of the array and stores it in the `size` variable.

### 5. Dynamic Memory Allocation
```cpp
    int *arr = new int[size];
```
- Allocates memory dynamically for an array of integers of size `size`.

### 6. Input Array Elements
```cpp
    for (int i = 0; i < size; i++) {
        cout << "Enter a number for element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
```
- Loops through the array to input elements from the user.

### 7. Display First and Last Elements
```cpp
    cout << "The first element of the array is: " << arr[0] << endl << endl;
    cout << "The last element of the array is: " << arr[size - 1] << endl;
```
- Displays the first and last elements of the array.

### 8. Deallocate Memory
```cpp
    delete[] arr;
```
- Deallocates the memory allocated for the array.

### 9. Return Statement
```cpp
    return 0;
}
```
- Indicates that the program ended successfully.

## How to Compile and Run

1. **Save the code to a file**: Save the above code in a file named `dynamic_array_first_last.cpp`.

2. **Compile the program**:
   ```sh
   g++ -o dynamic_array_first_last dynamic_array_first_last.cpp
   ```
   This command compiles the code and generates an executable named `dynamic_array_first_last`.

3. **Run the executable**:
   ```sh
   ./dynamic_array_first_last
   ```
   This command runs the compiled program.

## Example Output

```sh
Enter the size of the array: 5
Enter a number for element 1: 10
Enter a number for element 2: 20
Enter a number for element 3: 30
Enter a number for element 4: 40
Enter a number for element 5: 50

The first element of the array is: 10

The last element of the array is: 50
```

This is a simple program to demonstrate the basics of dynamic array allocation and deallocation in C++, along with basic input and output operations.
