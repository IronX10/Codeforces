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
        if (n == 1)
        {
            cout << 1 << endl
                 << 1 << endl;
            continue;
            ;
        }
        if (k == 1 || k == n)
        {
            cout << -1 << endl;
            continue;
            ;
        }

        int a = k - k % 2;
        int b = k + 1 + k % 2;
        cout << 3 << endl;
        cout << 1 << " " << a << " " << b;

        cout << endl;
    }

    return 0;
}
