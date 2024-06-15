#include <iostream>
using namespace std;

int merge(int a[], int b[]);

int main()
{
	int arr1[4];
	int arr2[4];

	cout << "Enter elements of first array: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> arr1[i];
	}

	cout << "Enter elements of second array: " << endl;
	for (int j = 0; j < 4; j++)
	{
		cin >> arr2[j];
	}

	merge(arr1, arr2);

	return 0;
}

int merge(int a[], int b[])
{
	int arr3[8];

	for (int i = 0; i < 4; i++)
	{
		arr3[i] = a[i];
	}

	for (int j = 4; j < 8; j++)
	{
		arr3[j] = b[j - 4];
	}

	cout << "Merged array: ";
	for (int z = 0; z < 8; z++)
	{
		cout << arr3[z] << " ";
	}

	return 0;
}
