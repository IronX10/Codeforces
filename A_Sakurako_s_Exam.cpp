#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 1)
        {
            cout << "NO";
        }
        else
        {
            if (b % 2 == 0)
            {
                cout << "YES";
            }
            else if (a > 1)
            {
                cout << "YES";
            }
            else
                cout << "NO";
        }

        cout << endl;
    }
    return 0;
}
