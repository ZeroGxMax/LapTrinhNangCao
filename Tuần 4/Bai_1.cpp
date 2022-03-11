#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int maxThree(int a, int b, int c)
{
    int array[3];
    array[0] = a;
    array[1] = b;
    array[2] = c;
    int max = array[0];
    for (int i = 0; i < 3; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}