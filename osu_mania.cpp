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
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < s[i].size(); j++)
            {
                if (s[i][j] == '#')
                {
                    cout << j + 1 << " ";
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
