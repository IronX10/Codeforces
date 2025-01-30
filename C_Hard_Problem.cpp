#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        cout << min(m, a) + min(m, b) + min(2 * m - min(a, m) - min(b, m), c);
        cout << endl;
    }
    return 0;
}
