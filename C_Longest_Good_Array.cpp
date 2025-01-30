#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int d = 1;
        int size = 1;
        for (int i = l; i <= r;)
        {
            i += d;
            d++;
            if (i <= r)
            {
                size++;
            }
        }
        cout << size;

        cout << endl;
    }
    return 0;
}
