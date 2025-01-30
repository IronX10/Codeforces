#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x = (2 * a) - b;

        if (a >= b)
        {
            cout << a;
        }
        else
            cout << max(0, x);

        cout << endl;
    }
    return 0;
}
