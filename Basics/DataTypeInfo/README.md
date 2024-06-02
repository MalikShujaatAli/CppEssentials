# DataTypeInfo

## Overview
The `DataTypeInfo` program is a C++ application that provides comprehensive information about the fundamental data types available in the C++ programming language. It displays the size, minimum value, and maximum value for each data type, including both signed and unsigned types, as well as floating-point types. This program is useful for understanding the limitations and capabilities of different data types in C++.

## Data Types Covered
The program covers a wide range of data types, including:

- **Character Types**
  - `char`
  - `unsigned char`

- **Integer Types**
  - `short`
  - `unsigned short`
  - `int`
  - `unsigned int`
  - `long`
  - `unsigned long`
  - `long long`
  - `unsigned long long`

- **Floating-Point Types**
  - `float`
  - `double`
  - `long double`

- **Boolean Type**
  - `bool`

## Features
- **Size Information**: Displays the size in bytes for each data type.
- **Range Information**: Displays the minimum and maximum values for each data type.
- **Cross-Platform Consideration**: Includes a note on clearing the console screen, which may vary between operating systems.

## How to Compile and Run
Follow these steps to compile and run the program:

### Prerequisites
- A C++ compiler (such as g++, clang++, or MSVC).

### Compilation
Use the following command to compile the program with `g++`:

```sh
g++ -o DataTypeInfo DataTypeInfo.cpp
```

### Running the Program
After compiling, run the executable:

```sh
./DataTypeInfo
```

### Output
The program will clear the console screen and then output detailed information about each data type in a structured format. For example:

```
Data type: char
Size: 1 bytes
Minimum value: -128
Maximum value: 127

Data type: unsigned char
Size: 1 bytes
Minimum value: 0
Maximum value: 255

...
```

## Notes
- The `system("cls");` command is used to clear the console screen on Windows. For Unix-based systems, use `system("clear");`.
- The program utilizes the `<climits>` and `<cfloat>` headers to access limits for integral and floating-point types, respectively.

## Contributions
Contributions to improve and extend this program are welcome. Feel free to fork the repository and submit pull requests.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
```

