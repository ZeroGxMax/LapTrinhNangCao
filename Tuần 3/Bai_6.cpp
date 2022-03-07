#include <vector>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <functional>
#include <iomanip>
#include <cstring>

using namespace std;

/*
Ý tưởng: Thêm dấu cách vào đằng trước chuỗi.
s[i] != " ", s[i-1] == " ";

*/

int wordCount(string str);

int main()
{
    string str;
    getline(cin, str);

    cout << wordCount(str);
}

int wordCount(string str)
{
    str = " " + str;
    int l = str.length();
    int word_count = 0;
    for (int i = 0; i < l; i++)
    {
        if (str[i] != ' ' && str[i-1] == ' ')
        {
            word_count++;
        }
    }
    return word_count;
}