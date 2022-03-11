#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;

string pigLatin(string word)
{
    string latin;
    if (word[0] == 'a'|| word[0] == 'i'||word[0] == 'u'|| word[0] == 'e'|| word[0] == 'o')
    {
        latin = word + "way";
    }
    else
    {
        for (int i = 1; i < word.length(); i++)
        {
            latin += word[i];
        }
        latin = latin + word[0] + "ay";
    }
    return latin;
}