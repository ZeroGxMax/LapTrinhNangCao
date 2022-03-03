// So sánh 3 số:
#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    // Kiểm tra 3 số:
    if (number1 == number2 && number2 == number3)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}