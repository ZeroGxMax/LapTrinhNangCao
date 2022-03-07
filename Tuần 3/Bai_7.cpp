#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <cstring>

using namespace std;

void charCounter(string str, int &alphabet, int &num, int &special);

int main()
{
    string str;
    getline(cin, str);

    int alphabet = 0, num = 0, special = 0;

    charCounter(str, alphabet, num, special);

    cout << alphabet << " " << num << " " << special;
}

void charCounter(string s, int &alphabet, int &num, int &special)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            alphabet++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            num++;
        }
        else
        {
            special++;
        }
    }
}