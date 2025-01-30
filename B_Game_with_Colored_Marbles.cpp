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
        vector<int> a(n);
        int hash[n + 1] = {0};

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            hash[a[i]]++;
        }
        int s = 0;
        int p = 0;
        for (int i = 0; i < n + 1; i++)
        {
            if (hash[i] == 1)
            {
                s++;
            }
            if (hash[i] != 1 && hash[i] != 0)
            {
                p++;
            }
        }

        cout << 2 * (s / 2 + s % 2) + p << endl;
    }
    return 0;
}
