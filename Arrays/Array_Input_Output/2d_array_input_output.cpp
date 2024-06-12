#include <iostream>
using namespace std;

int main() {
    int arr[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter a number for position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "You have entered: " << arr[i][j] << " at position [" << i << "][" << j << "]" << endl;
        }
    }
    return 0;
}
