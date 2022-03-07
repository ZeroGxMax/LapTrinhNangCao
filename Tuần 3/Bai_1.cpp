#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

bool CheckArray(vector<int> a, vector<int> b, int n);

int main()
{
    int n;
    cin >> n;

    vector <int> a, b;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    if (CheckArray(a, b, n) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

bool CheckArray(vector<int> a, vector<int> b, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a.at(i) != b.at(i))
        {
            return false;
        }
    }
    return true;
}