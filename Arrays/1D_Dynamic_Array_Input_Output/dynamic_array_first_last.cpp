#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter a number for element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "The first element of the array is: " << arr[0] << endl << endl;
    cout << "The last element of the array is: " << arr[size - 1] << endl;


    delete[] arr;

    return 0;
}
