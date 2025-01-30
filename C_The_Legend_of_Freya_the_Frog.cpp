#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int a = x / k + (int)bool(x % k);
        int b = y / k + (int)bool(y % k);
        if (b >= a)
        {
            cout << 2 * b;
        }
        else
            cout << 2 * a - 1;

        cout << endl;
    }
    return 0;
}
