#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

/* In ra so chinh phuong nam giua:
- Tinh can bac 2 cua 2 dau mut.
- Tra ve binh phuong so o giua
*/

void Solve(long int low, long int high);

int main()
{
    long int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;

    Solve(lowerBound, upperBound);
}

void Solve(long int low, long int high)
{
    // Tính 2 đầu mút:
    double lower = (double)sqrt(low);
    double higher = (double)sqrt(high);

    // Kiểm tra 2 đầu có là số chính phương không & In số chính phương ở giữa.
    if (lower == (long int) sqrt(low))
    {
        cout << low << " ";
    }
    for (int i = (floor(lower) + 1); i < ceil(higher); i++)
    {
        cout << i*i << " ";
    }
    if (higher == (long int) sqrt(high))
    {
        cout << high << " ";
    }
}