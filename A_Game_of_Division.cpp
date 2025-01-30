#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int k, int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int j = 0;
        for (; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            int l = max(a[i], a[j]) - min(a[i], a[j]);
            if (l % k == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "YES" << endl
                 << i + 1;
            return;
        }
    }
    cout << "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a, k, n);
        cout << endl;
    }
    return 0;
}
