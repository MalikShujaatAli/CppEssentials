#include <iostream>
using namespace std;

int main()
{
	char *word = new char[100];

	cout << "Enter a series of characters and enter '\\0' to stop inputting: " << endl
		 << endl;

	int i = 0;
	while (true)
	{
		cin >> word[i];
		if (word[i] == '\0')
			break;
		i++;
	}

	cout << "\nString in reverse order will be: " << endl
		 << endl;

	for (int j = i - 1; j >= 0; j--)
	{
		cout << word[j];
	}
	cout << endl
		 << endl;

	delete[] word;

	return 0;
}
