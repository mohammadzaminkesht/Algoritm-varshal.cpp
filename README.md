#include <iostream>
#include <conio.h>
using namespace std;

void printArray(int w0[4][4])
{
	cout << "The matrix is below the varshal :" << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << w0[i][j] << " ";
		}
		cout << endl;
	}
}

void printArray(int w0[4][4]);

int main()
{
	int x;
	int y;
	int MATRIXR;
	int z;
	int t;

	int w0[4][4];

	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			cout << "Enter 0 and 1 : ";
			cin >> z;
			w0[x][y] = z;
		}
	}
	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < 4; y++)
		{
			cout << w0[x][y] << " ";
		}
		cout << endl;
	}
	for (int t = 0; t < 4; t++)
	{
		for (int y = 0; y < 4; y++)
		{
			for (int x = 0; x < 4; x++)
			{
				if (w0[x][t] == 1)
				{
					if (w0[t][y] == 1)
						w0[x][y] = 1;
				}
			}
		}

	}

	printArray(w0);
	_getch();
	return 0;
}


