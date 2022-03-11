#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

void printSpace(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << " ";
    }
}

void printStar(int x)
{
    for (int i = 0; i < x; i++)
    {
        cout << "*";
    }
}


void printArrow(int n, bool left)
{
    if (left == false)
    {
        for (int i = 0; i < n; i++)
        {
            printSpace(2*i);
            printStar(n-i);
            cout << endl;
        }
        for (int i = n-2; i >= 0; i--)
        {
            printSpace(2*i);
            printStar(n-i);
            cout << endl;
        }
    }
    if (left == true)
    {
        for (int i = n; i >= 1; i--)
        {
            printSpace(i-1);
            printStar(i);
            cout << endl;
        }
        for (int i = 2; i <= n; i++)
        {
            printSpace(i-1);
            printStar(i);
            cout << endl;
        }
    }
}