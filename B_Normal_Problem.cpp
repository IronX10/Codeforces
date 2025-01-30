#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n = a.length();
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
            {
                cout << 'q';
            }
            else if (a[i] == 'q')
            {
                cout << 'p';
            }
            else
                cout << a[i];
        }

        cout << endl;
    }
    return 0;
}
