#include<iostream>
// For windows users
#ifdef WIN32
#include<conio.h>
#endif
using namespace std;

#define SIZE 4 // Array size

void printArray(int arr[SIZE][SIZE]);

int main(void)
{ 
    int input;

    int arr[SIZE][SIZE];

    for (int x = 0; x < SIZE; x++)
    {
        for (int y = 0; y < SIZE; y++)
        {
            cout << "Enter 0 and 1 : ";
            cin >> input; // Get matrix parameters
            arr[x][y] = input;
        }
    }
    for (int x = 0; x < SIZE; x++)
    {
        for (int y = 0; y < SIZE; y++)
        {
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }
    for (int t = 0; t < SIZE; t++)
    {
        for (int y = 0; y < SIZE; y++)
        {
            for (int x = 0; x < SIZE; x++)
            {
                if (arr[x][t] == 1)
                {
                    if (arr[t][y] == 1)
                        arr[x][y] = 1;
                }
            }
        }

    }

    printArray(arr); // Print warshall

    // _getch() for Windows and cin.get() for others
    #ifdef WIN32
    _getch();
    #else
    cin.get();
    cin.get();
    #endif
}

// Print array function
void printArray(int arr[SIZE][SIZE])
{
    cout << "The matrix is below the warshall :" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
            cout << arr[i][j] << " ";
            
        cout << endl;
    } 
}
