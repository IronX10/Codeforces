#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a = n / k;
        int ans[n];
        for (int i = 1; i < a + 1; i++)
        {
            ans[k * i - 1] = i;
        }
        a++;

        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % k == 0)
            {
                continue;
            }
            else
                ans[i] = a;
            a++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
