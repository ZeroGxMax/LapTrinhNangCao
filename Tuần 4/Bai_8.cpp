#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

void readArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

bool compareArray(int array1[], int array2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array1[i] != array2[i])
        {
            return false;
        }
    }
    return true;
}