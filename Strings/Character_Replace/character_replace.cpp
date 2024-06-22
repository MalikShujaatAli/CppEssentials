#include <iostream>
using namespace std;

int main()
{
	char word[5] = {'z', 'e', 'b', 'r', 'a'};

	for (int i = 0; i < 5; i++)
	{
		if (word[i] == 'a')
		{
			word[i] = 'b';
			cout << "b";
		}
		else if (word[i] == 'p')
		{
			word[i] = 'q';
			cout << "q";
		}
		else if (word[i] == 'z')
		{
			word[i] = 'a';
			cout << "a";
		}
		else
		{
			cout << word[i];
		}
	}

	cout << endl
		 << endl;

	return 0;
}
