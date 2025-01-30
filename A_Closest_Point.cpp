#include <bits/stdc++.h>
using namespace std;

void check(int n, int array[])
{
    if (n == 2)
    {
        if ((array[1] - array[0]) != 1)
        {
            cout << "YES";
        }
        else
            cout << "NO";
    }
    else
        cout << "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        check(n, arr);

        cout << endl;
    }
    return 0;
}
