#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int t = n - k + 1;
        long long sum = n * (n + 1) / 2 - (t - 1) * t / 2;

        // for (int i = t; i < n + 1; i++)
        // {
        //     sum += i;
        // }

        if (sum % 2 == 0)
        {
            cout << "YES";
        }
        else
            cout << "NO";

        cout << endl;
    }
    return 0;
}
