#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        vector<int> a(n);
        int alone = 0;
        int extra = 0;
        int filled = 0;
        int total = 0;
        int happy = 0;

        for (auto &x : a)
        {
            cin >> x;
            total += x;
            alone += x % 2;
            filled += x / 2;
            happy += x - x % 2;
        }

        int row_left = r - filled - alone % 2;
        int unhappy = alone / 2;
        int d = row_left - unhappy;

        if (row_left >= alone)
        {
            cout << total;
        }
        else
        {

            cout << happy + alone % 2 + 2 * d;
        }
        cout << endl;
    }
    return 0;
}
