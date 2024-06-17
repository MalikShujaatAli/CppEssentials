#include <iostream>
using namespace std;

int rotate(int arr[]);

int main()
{
	int arr[6];

	cout << "Enter elements of the array: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
	}

	rotate(arr);

	return 0;
}

int rotate(int arr[])
{
	int n;
	int temp;

	cout << "Enter the number of times you want to rotate the array to the left: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}

	cout << "Result after rotation: " << endl;
	for (int u = 0; u < 6; u++)
	{
		cout << arr[u] << " ";
	}

	return 0;
}
