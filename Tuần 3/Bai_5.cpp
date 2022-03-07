#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>

using namespace std;

bool SymmetricArray(int array[], int n);

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    if (SymmetricArray(array, n) == true)
    {
        cout << "Symmetric array.";
    }
    else
    {
        cout << "Asymmetric array.";
    }
}

bool SymmetricArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] != array[n-i-1])
        {
            return false;
        }
    }
    return true;
}