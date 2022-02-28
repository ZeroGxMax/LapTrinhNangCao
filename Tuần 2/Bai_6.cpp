#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

/*
In ra hình thoi trên hệ trục (2n+1)*(2n+1)
*/

void printDiamond(int n);

int main()
{
    int n;
    cin >> n;

    printDiamond(n);
}

void printDiamond(int n)
{
    // Tạo hệ trục tọa độ Oxy:
    char X[2*n+1][2*n+1];
    
    for (int y = 0; y < 2*n+1; y++)
    {
        for (int x = 0; x < 2*n+1; x++)
        {
            if (y >= (n-x) && y <= (3*n-x) && y >= (x-n) && y <= (x+n))
            {
                X[x][y] = '*';
            }
            else
            {
                X[x][y] = '.';
            }
        }
    }

    for (int x = 0; x < (2*n+1); x++)
    {
        for (int y = 0; y < (2*n+1); y++)
        {
            cout << X[x][y] << " ";
        }
        cout << endl;
    }
}