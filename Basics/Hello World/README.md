---

# Hello World Program in C++

This is a basic "Hello World" program written in C++. It simply prints "hello world" to the console.

## Prerequisites

- C++ compiler (e.g., g++)
- Standard C++ library

## Getting Started

1. Clone or download the repository.
2. Navigate to the directory containing the source code.
3. Compile the program using a C++ compiler:

   ```bash
   g++ hello_world.cpp -o hello_world
   ```

4. Run the compiled executable:

   ```bash
   ./hello_world
   ```

## Code Overview

```cpp
#include<iostream>
using namespace std;

int main() {
    cout << "hello world";
    return 0;
}
```

- `#include<iostream>`: Includes the input/output stream library, allowing for console input and output.
- `using namespace std;`: This line brings all the symbols in the `std` namespace into the current scope, so you can use `cout` without prefixing it with `std::`.
- `int main() { ... }`: The main function where the program starts execution.
- `cout << "hello world";`: Outputs the "hello world" message to the console.
- `return 0;`: Indicates successful completion of the program.

---

