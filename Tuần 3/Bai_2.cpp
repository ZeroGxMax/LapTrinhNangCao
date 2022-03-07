#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>
using namespace std;

void display(double Mark[], int n);

bool myfunction (int i, int j) { return (j < i); }

int main()
{
    int n;
    cin >> n;

    double Mark[100];

    for (int i = 0; i < n; i++)
    {
        cin >> Mark[i];
    }

    sort(Mark, Mark+n);

    display(Mark, n);
}

void display(double Mark[], int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        cout << fixed << setprecision(2) << Mark[i] << " ";
    }
}