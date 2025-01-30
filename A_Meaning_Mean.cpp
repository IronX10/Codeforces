// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         vector<long long> a(n);

//         long long sum = 0;
//         long long max = INT_MIN;

//         for (auto &x : a)
//         {
//             cin >> x;
//             sum += x;
//             if (x > max)
//             {
//                 max = x;
//             }
//         }

//         long long m = (sum - max) / (n - 1);
//         cout << (m + max) / 2;

//         cout << endl;
//     }
//     return 0;
// }

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int mean = a[0];

        for (int i = 1; i < n; ++i)
        {
            mean = (mean + a[i]) / 2;
        }

        cout << mean;

        cout << endl;
    }
    return 0;
}
