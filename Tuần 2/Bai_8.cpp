#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    do
    {
        n /= 10;
        count++;
    } while (n != 0);

    cout << count;
}