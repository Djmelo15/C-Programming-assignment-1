#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int digit;
	char answer= 'y' || 'n';
	cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you. The program will repeatedly prompt you to enter a positive integer. Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order. \n" << endl;
	do {

		do
		{
			cout << "Enter a positive number: ";
			cin >> digit;
			if (digit < 0) {
				cout << "The number cannot be a negative interger, please enter a new number: ";
			}
		} while (digit <= 0);
		for (int i = digit; i >=1; i--) {
			if (digit % i == 0) {
				cout << i << " " << endl;
			}
		}
		cout << "Would you like to choose another number y/n" << endl;

		do {
			cin >> answer;
			if (answer == 'y') {
				break;
			}
			else if (answer == 'n') {
				return 0;
			}
			else if (answer != 'y' || 'n') {
				cout << "Please respond with y for yes and n for no." << endl;
			}

		} while (answer != 'n');
	} while (answer == 'y');
}