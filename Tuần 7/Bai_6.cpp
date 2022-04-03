#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool tangDan(int*arr, int len);

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2)
{
    int *arr = new int[lenArr1+lenArr2];
    for (int i = 0; i < lenArr1; i++)
    {
        arr[i] = firstArr[i];
    }
    for (int i = 0; i < lenArr2; i++)
    {
        arr[i+lenArr1] = secondArr[i];
    }
    sort(arr, arr+lenArr1+lenArr2);
    if (tangDan(firstArr, lenArr1) && tangDan(secondArr, lenArr2)) return arr;
    else
    {
        int *arr2 = new int[lenArr1+lenArr2];
        for (int i = 0; i < lenArr1+lenArr2; i++)
        {
            arr2[i] = arr[lenArr1+lenArr2-i-1];
        }
        return arr2;
    }
}

bool tangDan(int *arr, int len)
{
    if (arr[0] > arr[len-1]) return false;
    else return true;
}