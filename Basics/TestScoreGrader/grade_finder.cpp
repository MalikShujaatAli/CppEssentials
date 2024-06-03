#include <iostream>
using namespace std;

int main()
{
	system("cls");
	int testscore;
	cout << "Enter your numeric test score and find\n";
	cout << "the grade you earned: ";
	cin >> testscore;
	char grade;
	if (testscore > 100 || testscore < 0)
	{
		cout << "Invalid input!" << endl;
		cout << "Testscores must be in range of 0-100" << endl;
		return;
	}
	if (testscore < 40)
		grade = 'F';
	else if (testscore < 70)
		grade = 'D';
	else if (testscore < 80)
		grade = 'C';
	else if (testscore < 90)
		grade = 'B';
	else if (testscore <= 100)
		grade = 'A';

	cout << "Your grade is: " << grade << ".\n";
	return 0;
}