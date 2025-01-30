#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{

    if (s[0] == '1' || s[s.length() - 1] == '1')
    {
        return true;
    }

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            return true;
        }
    }
    return false;
}

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

        if (check(s))
        {
            cout << "YES";
        }
        else
            cout << "NO";

        cout << endl;
    }
    return 0;
}
