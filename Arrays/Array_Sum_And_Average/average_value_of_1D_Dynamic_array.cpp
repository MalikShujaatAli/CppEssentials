#include <iostream>
using namespace std;

void avg(int &sum, int &num);
int sum(int *arr, int n);

int main()
{
    system("cls");
    int n;

    cout << "Enter the number of elements of the array: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
        while (arr[i] < 0)
        {
            cout << "the number cannot be negative.";
            cout << endl
                 << "Enter again: ";
            cin >> arr[i];
        }
    }

    sum(arr, n);

    return 0;
}

void avg(int &sum, int &num)
{

    float average;
    average = (float)sum / (float)num;
    cout << endl
         << "The average of array is: " << average << endl
         << endl;
}

int sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << endl;
    cout << "The sum of array is: " << sum;
    avg(sum, n);
}