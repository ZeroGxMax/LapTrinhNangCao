#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>

using namespace std;
const int MAX_ELEMENT = 1000;

void insertAnELement(double array[], double x, int &n);

void printArray(double array[], int n);

int main()
{
    int n;
    cin >> n;

    double array[MAX_ELEMENT];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    double x;
    cin >> x;

    sort(array, array + n);
    insertAnELement(array, x, n);
    printArray(array, n);
}

void insertAnELement(double array[], double x, int &n)
{
    int pos;

    for (int i = 0; i < n; i++)
    {
        if (x < array[i])
        {
            pos = i;
            break;
        }
    }

    n += 1;

    for (int i = n-1; i >= pos; i--)
    {
        array[i+1] = array[i];
    }

    array[pos] = x;
}

void printArray(double array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(2) << array[i] << " ";
    }
}