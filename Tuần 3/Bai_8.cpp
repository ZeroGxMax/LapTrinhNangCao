#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <cstring>
using namespace std;

void correctText(string &text);

int main()
{
    string text;
    getline(cin, text);

    correctText(text);
}

void correctText(string &text)
{
    int l = text.length();

    for (int i = 0; i < l; i++)
    {
        if (text.substr(i, 4) != "Zues")
        {
            cout << text[i];
        }
        else
        {
            cout << "Zeus";
            i += 3; 
        }
    }
}