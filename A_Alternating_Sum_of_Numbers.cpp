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
        vector<int> arr(n);
        for (auto &x : arr)
        {
            cin >> x;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum += arr[i];
            }
            else
                sum -= arr[i];
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}
