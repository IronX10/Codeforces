#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 0;
        if (n == 7)
        {
            x == 1;
        }

        vector<int> A(n);
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int best = 0;
        for (int i = 0; i < n; i++)
        {
            int curr = 0;
            for (int j = i; j < n; j++)
            {
                if (A[j] <= A[i])
                {
                    curr += 1;
                }
            }
            best = max(best, curr);
        }
        cout << n - best << endl;
    }
    return 0;
}