#include <iostream>
using namespace std;

int main() {
    int arr[5], l1, l2, l3;
    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    l1 = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > l1) {
            l1 = arr[i];
        }
    }
    cout << "First largest number is: " << l1 << endl;

    l2 = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > l2 && arr[i] < l1) {
            l2 = arr[i];
        }
    }
    cout << "Second largest number is: " << l2 << endl;

    l3 = INT_MIN;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > l3 && arr[i] < l2) {
            l3 = arr[i];
        }
    }
    cout << "Third largest number is: " << l3 << endl;

    return 0;
}
