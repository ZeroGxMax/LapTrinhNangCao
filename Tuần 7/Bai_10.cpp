#include <iostream>
#include <cstring>
using namespace std;

// (copy[i] >= 'a' && copy[i] <= 'z') || (copy[i] >= 'A' && copy[i] <= 'Z')

void rFilter(char *s)
{
    string copy(s);
    int n = copy.length(), pos;
    for (int i = n-1; i >= 0; i--)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            pos = i;
            break;
        }
    }
    for (int i = pos+1; i < n; i++)
    {
        s[i] = '_';
    }
}

// int main()
// {
//     char *s;
//     s = new char[50];
//     cin >> s;
//     rFilter(s);
//     cout << s;
// }