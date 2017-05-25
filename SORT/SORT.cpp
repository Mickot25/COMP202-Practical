#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void thisisthesorterfunction(int&array1, int&array2)
{
	int temp;
	temp = array1;
	array1 = array2;
	array2 = temp;
}

int main()
{
	int a[10] = { 3,2,4,1,5,8,6,7,9,10}, b=0;
	int asorted[10];
	srand(time(NULL));

	for (int r = 0; r < 10; r++)
	{
		cout << a[r]<<"  ";
		asorted[r] = a[r];
	}
	cout << endl;

	for (int r = 0; r < 10; r++)
	{
		for (int j = 0; j < 9 - r; j++)
		{
			if (asorted[j] > asorted[j + 1])
				thisisthesorterfunction(asorted[j], asorted[j + 1]);
		}
	}

	cout << "Sorted: ";
	for (int r = 0; r < 10; r++)
	{
		cout << asorted[r] << " ";
	}

	_getch();
	return 0;
}