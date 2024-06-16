#include <iostream>
using namespace std;

int *reverse(int *p, int n);

int main()
{
	system("cls");
	int n;
	cout << "Enter number of elements of the array: ";
	cin >> n;
	int *ptr = new int[n];
	cout << "Enter elements of array: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "Element " << i + 1 << ": ";
		cin >> ptr[i];
	}
	ptr = reverse(ptr, n);
	cout << "The elements in reverse order are: ";
	for (int i = 0; i < n; i++)
	{
		cout << ptr[i] << " ";
	}

	delete[] ptr;
	return 0;
}

int *reverse(int *p, int n)
{
	int *q = new int[n];
	for (int i = 0; i < n; i++)
	{
		q[i] = p[n - i - 1];
	}
	return q;
}