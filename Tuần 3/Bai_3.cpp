#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>

using namespace std;
const int MAX_ELEMENT = 1000;

int main()
{
    int n;
    cin >> n;

    int array[MAX_ELEMENT];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << array[i] << " ";
        }
        else if (array[i] != array[i-1])
        {
            cout << array[i] << " ";
        }
    }
}