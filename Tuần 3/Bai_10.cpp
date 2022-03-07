#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <cstring>
using namespace std;

int alphabet = 0, num = 0, special = 0; 

bool CheckUserName(string s);

void charCounter(string s, int &alphabet, int &num, int &special);

int main()
{
    string userName;
    getline(cin, userName);

    charCounter(userName, alphabet, num, special);

    if (CheckUserName(userName) == true)
    {
        cout << "Valid username.";
    }
    else
    {
        cout << "Invalid username.";
    }
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

bool CheckUserName(string s)
{
    if (s[0] >= '0' && s[0] <= '9')
    {
        return false;
    }
    else if (special > 0)
    {
        return false;
    }
    else if (s.length() < 6 || s.length() > 15)
    {
        return false;
    }
    return true;
}