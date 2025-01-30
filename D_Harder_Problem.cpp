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
        unordered_map<int, int> freq;
        vector<int> a(n);
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (freq[a[i]] == 0)
            {
                b.push_back(a[i]);
                freq[a[i]]++;
            }
        }
        int i = 1;

        while (b.size() < n  && i <= n)
        {
            if (freq[i] == 0)
            {
                b.push_back(i);
                freq[i]++;
            }
            i++;
        }

        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }

        cout << endl;
    }
    return 0;
}
