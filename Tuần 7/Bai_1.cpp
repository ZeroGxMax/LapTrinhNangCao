#include <iostream>
#include <vector>
using namespace std;

int* getPointerToTen()
{
    int* pointer = new int;
    *pointer = 10;
    return pointer;
}