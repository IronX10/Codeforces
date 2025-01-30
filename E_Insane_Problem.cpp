// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// ll power(ll k, ll n)
// {
//     ll result = 1;
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//             result *= k;
//         k *= k;
//         n /= 2;
//     }
//     return result;
// }

// ll solve(ll n)
// {
//     ll k, l1, r1, l2, r2;
//     cin >> k >> l1 >> r1 >> l2 >> r2;

//     ll ans = 0;

//     for (int n = 1; n <= 32; n++)
//     {
//         ll k_n = power(k, n);

//         if (k_n > r2)
//             break;

//         ll L1 = (l2 + k_n - 1) / k_n;
//         ll R1 = r2 / k_n;

//         auto l_1 = max(l1, L1);
//         auto r_1 = min(r1, R1);

//         if (l_1 <= r_1)
//         {
//             ans += r_1 - l_1 + 1;
//         }
//     }

//     return ans;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     long long t;
//     cin >> t;
//     while (t--)
//     {
//         cout << solve(t);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Efficient power function using binary exponentiation
ll power(ll k, ll n)
{
    ll result = 1;
    while (n > 0)
    {
        if (n % 2 == 1) // If n is odd
            result *= k;
        k *= k; // Square the base
        n /= 2; // Halve the exponent
    }
    return result;
}

ll solve()
{
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    ll ans = 0;

    // Iterate over all possible values of n (1 to 32)
    for (int n = 1; n <= 32; n++)
    {
        ll k_n = power(k, n); // Calculate k^n

        // Check for overflow (k^n should not exceed r2)
        if (k_n > r2)
            break;

        // Calculate the range of x
        ll L1 = (l2 + k_n - 1) / k_n; // Ceil(l2 / k^n)
        ll R1 = r2 / k_n;             // Floor(r2 / k^n)

        ll l_1 = max(l1, L1);
        ll r_1 = min(r1, R1);

        // If the range [l_1, r_1] is valid
        if (l_1 <= r_1)
        {
            ans += (r_1 - l_1 + 1);
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        cout << solve() << '\n';
    }
    return 0;
}
