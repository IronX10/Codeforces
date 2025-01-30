#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        cout << (n - r) * m + (m - c) + (m - 1) * (n - r);

        cout << endl;
    }
    return 0;
}
