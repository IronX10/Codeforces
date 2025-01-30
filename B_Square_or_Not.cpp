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
        string str;
        cin >> str;
        int count = 0;
        double sq = sqrt(n);
        int sqr = static_cast<int>(sqrt(n));
        int sqe = static_cast<double>(sqr);
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                count++;
            }
        }
        if (sq - sqr == static_cast<double>(0))
        {
            if (count == (sqr - 2) * (sqr - 2))
            {
                cout << "YES";
            }
            else
                cout << "NO";
        }
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
