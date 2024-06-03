# TestScoreGrader

## Overview
The `TestScoreGrader` program is a straightforward C++ application designed to assess a student's grade based on their numeric test score. By prompting the user to input their test score, the program calculates and outputs the corresponding grade according to a defined grading scale. This tool is particularly useful for educational purposes and for students to quickly determine their performance on a test.

## Features
- **Input Validation**: Ensures the test score entered by the user is within the valid range of 0 to 100.
- **Grade Calculation**: Utilizes conditional statements to assign a grade based on the input test score.
- **User-Friendly Output**: Provides clear and concise feedback to the user, displaying the calculated grade.

## Grading Scale
The program employs the following grading scale:
- **A**: Scores between 90 and 100
- **B**: Scores between 80 and 89
- **C**: Scores between 70 and 79
- **D**: Scores between 40 and 69
- **F**: Scores below 40

## How to Compile and Run
To compile and run the `TestScoreGrader` program, follow these steps:

### Prerequisites
- A C++ compiler (e.g., g++, clang++, or MSVC).

### Compilation
Use the following command to compile the program with `g++`:

```sh
g++ -o TestScoreGrader TestScoreGrader.cpp
```

### Running the Program
After compiling, execute the program with the following command:

```sh
./TestScoreGrader
```

### Usage
When the program runs, it will prompt you to enter your numeric test score. After entering a valid score between 0 and 100, the program will display the corresponding grade.

Example interaction:
```
Enter your numeric test score and find
the grade you earned: 85
Your grade is: B.
```

## Detailed Explanation
### Input Validation
The program begins by clearing the console screen with the `system("cls")` command, which is specific to Windows. For Unix-based systems, use `system("clear")`. It then prompts the user to input their test score.

```cpp
system("cls");
int testscore;
cout << "Enter your numeric test score and find\nthe grade you earned: ";
cin >> testscore;
```

### Checking Validity
The program checks if the input is within the valid range (0 to 100). If the input is invalid, it informs the user and terminates.

```cpp
if (testscore > 100 || testscore < 0)
{
    cout << "Invalid input!" << endl;
    cout << "Testscores must be in range of 0-100" << endl;
    return 0;
}
```

### Grade Calculation
Based on the input score, the program assigns a grade using a series of `if-else` statements.

```cpp
if (testscore < 40)
    grade = 'F';
else if (testscore < 70)
    grade = 'D';
else if (testscore < 80)
    grade = 'C';
else if (testscore < 90)
    grade = 'B';
else if (testscore <= 100)
    grade = 'A';
```

### Displaying the Result
Finally, the program outputs the grade to the user.

```cpp
cout << "Your grade is: " << grade << ".\n";
return 0;
```

## Additional Notes
- The use of `system("cls");` to clear the screen is specific to Windows. For Unix-based systems, replace it with `system("clear");`.
- The program uses the `iostream` library for input and output operations.
- Ensure your C++ compiler is installed and properly configured to compile and run the program.

## Contributions
Contributions to enhance this program are welcome. If you have suggestions for improvements or additional features, feel free to fork the repository and submit a pull request.

