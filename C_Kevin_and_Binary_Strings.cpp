// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// #define int long long
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int a = n / k;
//         int ans[n];
//         for (int i = 1; i < a + 1; i++)
//         {
//             ans[k * i - 1] = i;
//         }
//         a++;

//         for (int i = 0; i < n; i++)
//         {
//             if ((i + 1) % k == 0)
//             {
//                 continue;
//             }
//             else
//                 ans[i] = a;
//             a++;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << ans[i] << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }

#include <iostream> // Required for cin and cout
#include <string>   // Required for the string class
#include <utility>  // Required for pair

using namespace std;
using ll = long long;

void solve()
{
    string str;
    cin >> str;
    string _str;
    pair<int, int> L, R;

    // Find the first occurrence of '1' in the string
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (str[i] == '1')
        {
            _str = str.substr(i);
            L = {i, (int)str.length() - 1};
            break;
        }
    }

    if (_str.empty())
    {
        cout << "1 1 1 1"<<endl;
    }
    else
    {
        int kl = 0, kt = 0;

        // Find the first occurrence of '0' in substring _str
        for (int i = 0; i < (int)_str.length(); i++)
        {
            if (_str[i] == '0')
            {
                kt = i;
                kl = (int)_str.length() - i;
                break;
            }
        }

        if (kl == 0)
        {
            // If no '0' found in the string
            for (int i = 0; i < (int)str.length(); i++)
            {
                if (str[i] == '0')
                {
                    R = {i, i};
                    break;
                }
            }
        }
        else
        {
            R = {0, 0};
            string ans = _str;

            for (int i = 0; i + kl <= (int)str.length(); i++)
            {
                string now = _str;

                for (int j = i; j < i + kl; j++)
                {
                    now[j - i + kt] = ((now[j - i + kt] - '0') ^ (str[j] - '0')) + '0';
                }

                if (now > ans)
                {
                    ans = now;
                    R = {i, i + kl - 1};
                }
            }
        }

        cout << L.first + 1 << ' ' << L.second + 1 << ' ' << R.first + 1 << ' ' << R.second + 1 << '\n';
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
