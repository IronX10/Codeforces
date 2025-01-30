#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s;
        int n, p, l, r;
        cin >> n >> p;
        int max = INT16_MIN;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        while (p--)
        {
            cin >> s;
            cin >> l >> r;
            if (l <= max && max <= r)
            {
                if (s == '+')
                {
                    max++;
                    cout << max << " ";
                }
                else
                {
                    max--;
                    cout << max << " ";
                }
            }
            else
                cout << max << " ";
        }

        cout << endl;
    }
    return 0;
}
