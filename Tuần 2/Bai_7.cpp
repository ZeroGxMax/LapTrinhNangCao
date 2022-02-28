#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    cin >> x;

    double sum = 1, oldSum = 0;
    int i = 1;

    double power = 1;
    double gt = 1;

    while ((sum - oldSum) > 0.001)
    {
        double adder;
        power *= x;
        gt *= i;
        adder = power/gt;

        oldSum = sum;
        sum += adder;
        i++;
    }

    cout << fixed << setprecision(4) << sum;
}