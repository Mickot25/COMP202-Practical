#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void input_at_validation(int&datasize)
{
	cout << "Input number of data to generate: "; cin >> datasize;
	
	do
	{
		if (datasize <= 0 || datasize > 50)
		{
			cout << "Invalid datasize! Must be greater than 0 but less than or equal 50!" << endl << endl;
			cout << "Input number of data to generate: "; cin >> datasize;
		}
	} while (datasize <= 0 || datasize > 50);
}

int main()
{
	int x, c = 0, p = 0, h = 0;
	int generatedtemperatures[50] = { 0 };
	int coldcontainer[50] = { 0 }, pleasantcontainer[50] = { 0 }, hotcontainer[50] = { 0 };

	cout << "This program will generate random temperatures." << endl;

	input_at_validation(x);

	cout << endl;

	srand(time(NULL));

	for (int r = 0; r < x; r++)
	{
		generatedtemperatures[r] = rand() % 101;
	}

	cout << "The generated temperatures: " << endl;
	for (int r = 0; r < x; r++)
	{
		cout << generatedtemperatures[r] << "  ";
	}

	for (int r = 0; r < x; r++)
	{
		if (generatedtemperatures[r] > 0 && generatedtemperatures[r] <= 60)
		{
			coldcontainer[c] = generatedtemperatures[r];
			c++;
		}

		else if (generatedtemperatures[r] > 60 && generatedtemperatures[r] <= 80)
		{
			pleasantcontainer[p] = generatedtemperatures[r];
			p++;
		}

		else if (generatedtemperatures[r] > 80 && generatedtemperatures[r] <= 100)
		{
			hotcontainer[h] = generatedtemperatures[r];
			h++;
		}
	}

	cout << endl << endl;

	cout << "Number of cold days:  " << c << " - The temps are: ";

	for (int r = 0; r < c; r++)
	{
		cout << coldcontainer[r] << " ";
	}

	cout << endl;

	cout << "Number of pleasant days:  " << p << " - The temps are: ";

	for (int r = 0; r < p; r++)
	{
		cout << pleasantcontainer[r] << " ";
	}

	cout << endl;

	cout << "Number of hot days: " << h << " - The temps are: ";

	for (int r = 0; r < h; r++)
	{
		cout << hotcontainer[r] << " ";
	}

	cout << endl;

	_getch();
	return 0;
}