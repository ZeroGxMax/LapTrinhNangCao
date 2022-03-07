#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <cstring>
using namespace std;

void standardizeText(string text);

int countStartSpaces(string text);

int main()
{
    string text;
    getline(cin, text);

    standardizeText(text);
}

void standardizeText(string text)
{
    for (int i = 0; i < countStartSpaces(text); i++)
    {
        cout << " ";
    }
    
    int l = text.length();
    for (int i = countStartSpaces(text); i < l; i++)
    {
        if (text[i] != ' ')
        {
            cout << text[i];
        }
        else if (text[i] == ' ')
        {
            cout << text[i];
            int j = i + 1;
            while(text[j] == ' ')
            {
                j++;
            }
            i = j-1;
        }
    }
}

int countStartSpaces(string text)
{
    int count = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}