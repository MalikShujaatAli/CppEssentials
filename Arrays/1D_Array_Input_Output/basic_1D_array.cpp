#include <iostream>
using namespace std;

void input(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void print(int arr[])
{
	cout << endl
		 << "Numbers in array are" << endl
		 << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Number " << i + 1 << ": " << arr[i] << endl;
	}
}

int main()
{
	system("cls");
	int arr[10];

	input(arr);
	print(arr);

	return 0;
}