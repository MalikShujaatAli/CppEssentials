# IntegerCounter

## Description

**IntegerCounter** is a simple C++ program that prompts the user to enter an integer and then displays all numbers from 0 up to the entered integer. This project is a basic example of using loops and user input in C++.

## Features

- Prompts the user to input an integer.
- Outputs all numbers from 0 to the entered integer inclusively.
- Demonstrates basic use of input/output streams and for-loops in C++.

## Getting Started

### Prerequisites

To run this program, you need:

- A C++ compiler (such as g++, clang++, etc.)
- A terminal or command prompt

### Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/IntegerCounter.git
    ```

2. Navigate to the project directory:
    ```bash
    cd IntegerCounter
    ```

### Building the Program

To compile the program, use the following command:

```bash
g++ -o IntegerCounter main.cpp
```

This will create an executable file named `IntegerCounter`.

### Running the Program

To run the compiled program, use the following command:

```bash
./IntegerCounter
```

The program will prompt you to enter an integer. After entering an integer, it will display all numbers from 0 up to the entered integer.

## Example Usage

```bash
$ ./IntegerCounter
Enter an integer: 5
Numbers from 0 to 5:
0
1
2
3
4
5
```

## Code Explanation

Here is a breakdown of the main parts of the code:

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an integer: ";

    int a;
    cin >> a;
    cout << "Numbers from 0 to " << a << ":" << endl;
    for (int i = 0; i <= a; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```

- `#include <iostream>`: This line includes the Input/Output stream library necessary for using `cin` and `cout`.
- `using namespace std;`: This line allows us to use the standard namespace, so we don't have to prefix standard library names with `std::`.
- `int main()`: This is the main function where the program execution begins.
- `cout << "Enter an integer: ";`: This line prompts the user to enter an integer.
- `int a; cin >> a;`: These lines declare an integer variable `a` and store the user input in it.
- `cout << "Numbers from 0 to " << a << ":" << endl;`: This line prints the message indicating the range of numbers.
- `for (int i = 0; i <= a; i++)`: This loop iterates from 0 to `a` and prints each number.

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request or open an issue for any bugs, feature requests, or suggestions.
