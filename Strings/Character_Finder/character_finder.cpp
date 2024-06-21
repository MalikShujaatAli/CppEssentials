#include <iostream>
using namespace std;

int main()
{
    system("cls");
    char name[7] = {'s', 'h', 'u', 'j', 'a', 'a', 't'};
    char a;

    cout << "Enter a character: ";
    cin >> a;
    for (int i = 0; i < 7; i++)
    {
        if (name[i] == a)
        {
            cout << "Character found on " << i << "th index" << endl;
        }
    }

    return 0;
}
