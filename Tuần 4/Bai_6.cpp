#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculate (double num1, char operat, double num2)
{
    double result;
    switch (operat)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    }
    stringstream ss;
    ss << fixed << setprecision(2) << result;
    return stod(ss.str());
}