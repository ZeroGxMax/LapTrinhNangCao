#include <iostream>
#include <vector>
using namespace std;

double* getSquare (double number)
{
    double *sq = new double;
    *sq = number*number;
    return sq;
}