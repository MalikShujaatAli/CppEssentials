#include <iostream>
using namespace std;
int main()
{
	system("cls");
	int a;
	cout << "Upto which number you want to find the square roots? " << endl;
	cout << "Enter a number: ";
	cin >> a;
	int num = 1;
	cout << "Number\t\tIt's Square" << endl;
	cout << "------\t\t-----------" << endl
		 << endl;

	while (a != 0)
	{
		cout << num << "\t\t" << (num * num) << endl;
		num++;
		a--;
	}
	return 0;
}