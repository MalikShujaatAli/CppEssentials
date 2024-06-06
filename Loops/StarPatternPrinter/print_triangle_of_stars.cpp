#include <iostream>
using namespace std;

void printStars(int blanks, int starsInLine)
{

    for (int count = 1; count <= blanks; count++)
        cout << ' ';

    for (int count = 1; count <= starsInLine; count++)
        cout << "* ";

    cout << endl;
}

int main()
{
    system("cls");
    int numOfLines;
    int counter;
    int numOfBlanks;

    cout << "Enter the number of star lines (1 to 40) to be printed: ";
    cin >> numOfLines;

    while (numOfLines < 1 || numOfLines > 40)
    {
        cout << "Number of star lines should be between 1 and 40." << endl;
        cout << "Enter the number of star lines (1 to 40) to be printed: ";
        cin >> numOfLines;
    }

    cout << endl
         << endl;
    numOfBlanks = 40;

    for (counter = 1; counter <= numOfLines; counter++)
    {
        printStars(numOfBlanks, counter);
        numOfBlanks--;
    }

    return 0;
}
