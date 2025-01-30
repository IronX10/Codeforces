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
        vector<int> a(2 * n);
        int sum = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        cout << sum % 2 << " " << min(sum, 2 * n - sum);

        cout << endl;
    }
    return 0;
}
