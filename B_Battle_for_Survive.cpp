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
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long sum = arr[n - 1] - arr[n - 2];
        for (int i = 0; i < n - 2; i++)
        {
            sum += arr[i];
        }
        cout << sum;
        cout << endl;
    }
    return 0;
}
