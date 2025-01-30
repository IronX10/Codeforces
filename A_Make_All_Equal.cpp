#include <bits/stdc++.h>

using namespace std;

int check(int n, int array[])
{
    int num = 101;
    int arr[num] = {0};
    // for (int i = 0; i < num; i++)
    // {
    //     arr[i] = 0;
    // }

    for (int i = 0; i < n; i++)
    {
        arr[array[i]] = 1 + arr[array[i]];
    }

    int max = 0;
    for (int i = 0; i < 101; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return (n - max);
}
