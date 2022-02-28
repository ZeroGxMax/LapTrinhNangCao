#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

/*
In ra một chữ X kích thước (2n+1)*(2n+1)
*/

void printX(int n);

int main()
{
    int n;
    cin >> n;

    printX(n);
}

void printX(int n)
{
    // Tạo hệ tọa độ Oxy:
    char X[2*n+1][2*n+1];

    // Thay đổi trên các điểm x = y và các điểm x = (2*n+1) - y;

    for (int x = 0; x < (2*n+1); x++)
    {
        for (int y = 0; y < (2*n+1); y++)
        {
            if (x == y || x == (2*n)-y)
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