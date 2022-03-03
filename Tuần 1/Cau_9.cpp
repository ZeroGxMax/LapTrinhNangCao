#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Kiem tra tam giac
bool isTriangle(double a, double b, double c)
{
    if (a >= 1000 || a <= 0 || b <= 0 || b >= 1000 || c <= 0 || c >= 1000)
    {
        return false;
    }
    if ((a + b > c) && (a + c > b) && (b + c > a) && (abs(a-b) < c) && (abs(a-c) < b) && (abs(b-c) < a))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (isTriangle(a, b, c) == false)
    {
        cout << "invalid";
    }
    else
    {
        double p = (a + b + c)/2;
        double S = sqrt(p*(p-a)*(p-b)*(p-c));
        S = roundf(ceil(S*100))/100;
        cout << fixed << setprecision(2) << S;
    }
}