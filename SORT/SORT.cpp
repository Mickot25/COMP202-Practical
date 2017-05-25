#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int a[10] = { 0 }, b;
	srand(time(NULL));

	for (int r = 0; r < 10; r++)
	{
		a[r] = 1 + rand() % 10;
		cout << a[r]<<"  ";
	}
	cout << "\n\n\n";
	for (int c = 0; c < 11; c++)
	{
		for (int r = 0; r < 10; r++)
		{
			if (a[r] > a[r + 1])
			{
				b = a[r];
				a[r + 1] = a[r];
				a[r] = b;
			}
		}
	}
	for (int r = 0; r > 10; r++)
	{
		cout << a[r]<<"  ";
	}
	_getch();
	return 0;
}