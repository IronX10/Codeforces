#include <bits/stdc++.h>
using namespace std;
#define long long int

int po(int k, int x)
{
    if (x == 0)
        return 1;

    else
        return po(k, x - 1) * k;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int x = 0;
        int op = 0;
        if (k == n)
        {
            cout << 1;
        }

        else if (k == 1 || (n < k))
        {
            cout << n;
        }
        else
        {
            while (n != 0)
            {

                if (po(k, x) <= n)
                {
                    x++;
                }
                if (po(k, x) >= n)
                {
                    if (po(k, x) > n)
                    {
                        x--;
                    }

                    n = n - po(k, x);
                    x = 0;
                    op++;
                }
            }
            cout << op;
        }
        cout << endl;
    }

    return 0;
}