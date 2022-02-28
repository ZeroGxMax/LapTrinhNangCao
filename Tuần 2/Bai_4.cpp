#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

/*
Cách giải bài toán gà chó:
- Chạy số gà: 1 --> n -1, số chó: n-1 --> 1;
*/

bool Solve(int total, int totalLegs, int &numChicken, int &numDog);

int main()
{
    int total, totalLegs;
    cin >> total >> totalLegs;

    int numChicken, numDog;

    if (Solve(total, totalLegs, numChicken, numDog) == true)
    {
        printf("chicken = %d, dog = %d", numChicken, numDog);
    }
    else
    {
        cout << "invalid";
    }
}

bool Solve(int total, int totalLegs, int &numChicken, int &numDog)
{
    for (int i = 1; i < total; i++)
    {
        numChicken = i;
        numDog = total - numChicken;
        int legs = numChicken*2 + numDog*4;
        if (legs == totalLegs)
        {
            return true;
        }
    }
    return false;
}