#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x, y;
        cin >> n >> x >> y;
        if (x < y)
        {
            cout << n / x + min(1, n % x);
        }
        else
        {
            cout << n / y + min(1, n % y);
        }
        cout << endl;
    }

    return 0;
}
