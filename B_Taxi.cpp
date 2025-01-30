#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> a(t);
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            c1++;
        }
        if (a[i] == 2)
        {
            c2++;
        }
        if (a[i] == 3)
        {
            c3++;
        }
        if (a[i] == 4)
        {
            c4++;
        }
    }

    int ext = c1 - c3 - 2 * (c2 % 2);

    if (ext < 0)
    {
        cout << c4 + c3 + c2 / 2 + c2 % 2;
    }
    else
        cout << c4 + c3 + c2 / 2 + c2 % 2 + ext / 4 + (int)bool(ext % 4);
    return 0;
}
