#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mx = INT_MIN;
        int mn = INT_MAX;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }

        cout << (n - 1) * (mx - mn);

        cout << endl;
    }
    return 0;
}
