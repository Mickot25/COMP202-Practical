#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void inputsum(int&sum)
{
	cout << "\nInput desired sum: ";
	cin >> sum;
	do
	{
		if (sum > 12 || sum < 0)
		{
			cout << "\nERROR: sum must be 2 to 12";
			cout << "\n\nInput desired sum: ";
			cin >> sum;
		}
	} while (sum > 12 || sum < 2);
}

void generateandcheckdice(int&dice1, int&dice2,int sum,int&roll)
{
	srand(time(NULL));
	do
	{
		dice1 = 1 + rand() % 6;
		dice2 = 1 + rand() % 6;
		roll++;
	} while (dice1 + dice2 != sum);
}

void display(int dice1, int dice2,int sum, int roll)
{
	cout << "\n\nNumber of times the dice was rolled to get the sum of " << sum << ": " << roll;
	cout << "\n\nThe dice are: " << dice1 << " and " << dice2;
}

int main()
{
	int s=0, d1=0, d2=0, r=0;
	char yup;
	do
	{
		inputsum(s);
		generateandcheckdice(d1, d2, s, r);
		display(d1, d2, s, r);
		
		cout << "\n\nDo you wish to continue? (input y if so) ";
		cin >> yup;
	} while (yup == 'y' ||yup== 'Y');
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tThank You\n\n\n\n\n\n\n\n\n\n\n\n\n";
	_getch();
	return 0;
}