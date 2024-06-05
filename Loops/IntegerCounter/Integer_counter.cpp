#include <iostream>
using namespace std;

int main()
{

	cout << "Enter an integer: ";

	int a;
	cin >> a;
	cout << "Numbers from 0 to " << a << ":" << endl;
	for (int i = 0; i <= a; i++)
	{
		cout << i << endl;
	}

	return 0;
}
