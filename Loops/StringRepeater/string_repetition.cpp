#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int num;
	cout << "Enter a string: ";
	getline(cin, s);
	cout << "How many times do you want to print it? " << endl;
	cout << "Enter a number: ";
	cin >> num;
	while (num != 0)
	{
		cout << s << endl;
		num--;
	}
	cout << "That's all";
	return 0;
}