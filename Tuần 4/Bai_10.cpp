#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;

string toLower (string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}