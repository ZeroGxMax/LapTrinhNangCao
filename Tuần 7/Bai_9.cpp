#include <iostream>
#include <cstring>
using namespace std;

void reverse(char *s)
{
    string copy(s);
    for (int i = 0; i < copy.length(); i++)
    {
        s[i] = copy[copy.length()-i-1];
    }
}