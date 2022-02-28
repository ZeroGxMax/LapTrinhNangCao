#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double arrayX[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arrayX[i];
    }
    
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arrayX[i];
    }

    double mean = (double) sum/n;

    double var = 0;

    for (int i = 0; i < n; i++)
    {
        var += pow((arrayX[i] - mean), 2);
    }

    var = (double) var/n;

    cout << fixed << setprecision(2) << var;
}