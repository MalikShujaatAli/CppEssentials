#include<iostream>
using namespace std;

int checkSparseMatrix(int arr[3][3]);

int main() {
    int arr[3][3];
    int count = 0;

    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl << "The matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
            count++;
            if (count == 3 || count == 6)
                cout << endl;
        }
    }

    checkSparseMatrix(arr);

    return 0;
}

int checkSparseMatrix(int arr[3][3]) {
    int num, count = 0;
    num = (3 * 3) / 2;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 0)
                count++;
        }
    }

    if (count >= num)
        cout << endl << endl << "It is a Sparse matrix !" << endl << endl;
    else
        cout << endl << endl << "It is not a sparse matrix." << endl << endl;

    return 0;
}
