# CharacterIndexer

## Overview

CharacterIndexer is a simple C++ program that prompts the user to input a word and then prints each character of the word along with its index. This project is ideal for beginners to learn about string manipulation, loops, and basic input/output operations in C++.

## Features

- Prompts the user to enter a word.
- Prints each character of the word along with its index.
- Uses standard input and output operations.
- Demonstrates basic use of a for loop and string methods.

## Getting Started

### Prerequisites

To compile and run this program, you need to have a C++ compiler installed on your system. Commonly used compilers include:

- g++ (GNU Compiler Collection)
- clang (LLVM)
- MSVC (Microsoft Visual C++)

### Installation

1. **Clone the repository** (if applicable):

    ```sh
    git clone https://github.com/MalikShujaatAli/CharacterIndexer.git
    cd CharacterIndexer
    ```

2. **Create a directory for the project**:

    If you are not cloning a repository, create a new directory and navigate into it:

    ```sh
    mkdir CharacterIndexer
    cd CharacterIndexer
    ```

3. **Create the source file**:

    Save the provided C++ code into a file named `main.cpp`:

    ```cpp
    #include<iostream>
    using namespace std;

    int main() {
        string word;
        cout << "Enter a word: ";
        cin >> word;

        for (int i = 0; i < word.length(); i++) {
            cout << word[i] << " is at index " << i << endl;
        }

        return 0;
    }
    ```

## Usage

### Compiling the Program

To compile the program, open your terminal or command prompt, navigate to the directory containing `main.cpp`, and run the following command:

```sh
g++ -o CharacterIndexer main.cpp
```

This command will generate an executable file named `CharacterIndexer`.

### Running the Program

To run the compiled program, use the following command:

```sh
./CharacterIndexer
```

### Example

Here is an example interaction with the program:

```
Enter a word: Hello
H is at index 0
e is at index 1
l is at index 2
l is at index 3
o is at index 4
```

## Project Structure

```
CharacterIndexer/
│
├── main.cpp          # Source code file
├── README.md         # Project documentation
└── .gitignore        # Git ignore file (if using version control)
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
