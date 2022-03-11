#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cstring>
#include <utility>
using namespace std;

void reverseArray(float array[], int size)
{
    float array2[size];
    for (int i = 0; i < size; i++)
    {
        array2[i] = array[size-i-1];
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = array2[i];
    }
}

void sort(float array[], int size, bool isAscending)
{
    sort(array, array+size);
    if (isAscending == false)
    {
        reverseArray(array, size);
    }

    for (int i = 0; i < size; i++)
    {
        cout << fixed << setprecision(2) << "";
    }
}