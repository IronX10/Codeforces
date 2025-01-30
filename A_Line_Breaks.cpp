#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        int g = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i].length();
            if (sum <= m)
            {
                g++;
            }
        }

        cout << g;
        cout << endl;
    }
    return 0;
}
