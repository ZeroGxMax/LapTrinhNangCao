#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double vectorA[n], vectorB[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vectorA[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> vectorB[i];
    }
    
    double product;

    for (int i = 0; i < n; i++)
    {
        product += vectorA[i]*vectorB[i];
    }
    
    cout << fixed << setprecision(2) << product;
}