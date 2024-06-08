# StringRepeater

## Overview

StringRepeater is a simple C++ program that prompts the user to input a string and a number. The program then prints the input string the specified number of times. This project is a great starting point for beginners to understand the basics of input/output operations, loops, and string manipulation in C++.

## Features

- Prompts the user to enter a string.
- Prompts the user to enter a number indicating how many times the string should be printed.
- Prints the string the specified number of times.
- Uses standard input and output operations.
- Demonstrates basic control flow with a while loop.

## Getting Started

### Prerequisites

To compile and run this program, you need to have a C++ compiler installed on your system. Commonly used compilers include:

- g++ (GNU Compiler Collection)
- clang (LLVM)
- MSVC (Microsoft Visual C++)

### Installation

1. **Clone the repository** (if applicable):

    ```sh
    git clone https://github.com/MalikShujaatAli/StringRepeater.git
    cd StringRepeater
    ```

2. **Create a directory for the project**:

    If you are not cloning a repository, create a new directory and navigate into it:

    ```sh
    mkdir StringRepeater
    cd StringRepeater
    ```

3. **Create the source file**:

    Save the provided C++ code into a file named `main.cpp`:

    ```cpp
    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
        string s;
        int num;
        cout << "Enter a string: ";
        getline(cin, s);
        cout << "How many times do you want to print it? " << endl;
        cout << "Enter a number: ";
        cin >> num;
        while (num != 0)
        {
            cout << s << endl;
            num--;
        }
        cout << "That's all";
        return 0;
    }
    ```

## Usage

### Compiling the Program

To compile the program, open your terminal or command prompt, navigate to the directory containing `main.cpp`, and run the following command:

```sh
g++ -o StringRepeater main.cpp
```

This command will generate an executable file named `StringRepeater`.

### Running the Program

To run the compiled program, use the following command:

```sh
./StringRepeater
```

### Example

Here is an example interaction with the program:

```
Enter a string: Hello, World!
How many times do you want to print it?
Enter a number: 3
Hello, World!
Hello, World!
Hello, World!
That's all
```

## Contributing

If you would like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -m 'Add some feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Open a pull request.

## Acknowledgements

- This project is inspired by basic C++ programming exercises.
- Thanks to the open-source community for providing great tools and resources.
