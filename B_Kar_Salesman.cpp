#include <bits/stdc++.h>
using namespace std;

int main()
{
    #define int long long
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = 0;
        int a[n];
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        int cs = max;
        int mc = max * k;
        int remaining = sum - mc;
        if (remaining > 0)
        {
            cs += remaining / k + (int)bool(remaining % k);
        }

        cout << cs << endl;
    }
    return 0;
}
