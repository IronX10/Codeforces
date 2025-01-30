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
        string s;
        cin >> s;
        int count = 0;

        if (s[0] == s[n - 1])
            cout << "NO";

        else
            cout << "YES";

                cout << endl;
    }
    return 0;
}
