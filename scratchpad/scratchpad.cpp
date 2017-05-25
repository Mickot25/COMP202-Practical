#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int beta[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	srand(time(NULL));

	for (int r = 1; r < 21; r++)
	{
		if (r % 10 != 0)
			cout << beta[r-1] << " ";

		else
			cout << beta[r-1] << endl;
	}

	_getch();
	return 0;
}