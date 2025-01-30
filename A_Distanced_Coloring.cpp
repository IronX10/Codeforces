#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        if (k >= n && k >= m)
        {
            cout << n * m;
        }

        else if (max(n, m) > k && min(n, m) < k)
        {

            cout << min(n, m) * k;
        }

        else
            cout << k * k;

        cout << endl;
    }
    return 0;
}
