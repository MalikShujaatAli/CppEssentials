#include <iostream>
using namespace std;

int main()
{
	char word[10];

	cout << "Enter a word consisting of maximum 10 letters: ";
	cin >> word;

	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
		{
			count++;
		}
	}

	cout << "Total number of vowels in this word is " << count;

	return 0;
}
