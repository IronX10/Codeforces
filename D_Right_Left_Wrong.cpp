#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define fast_io()            \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)

template <typename T>
void print_vector(const vector<T> &v)
{
    for (const T &x : v)
        cout << x << ' ';
    cout << '\n';
}

template <typename T>
void input_vector(vector<T> &v)
{
    for (T &x : v)
        cin >> x;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<char> c(n);
    input_vector(a);
    input_vector(c);

    int ss[n];
    ss[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        ss[i] = ss[i - 1] + a[i];
    }

    int low = -1;
    int high = -1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (c[i] == 'L')
        {
            low = i;
            break;
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (c[i] == 'R')
        {
            high = i;
            break;
        }
    }

    while (low < high && (high != -1 && low != -1))
    {
        sum += (ss[high] - ss[low - 1]);
        for (int i = low + 1; i < n; i++)
        {
            low = -1;
            if (c[i] == 'L')
            {
                low = i;
                break;
            }
        }

        for (int i = high - 1; i > 0; i--)
        {
            high = -1;
            if (c[i] == 'R')
            {
                high = i;
                break;
            }
        }
    }
    cout << sum << endl;
}

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<ll> a(n);
//     vector<char> c(n);
//     input_vector(a);
//     input_vector(c);

//     // Prefix sums
//     vector<ll> ss(n);
//     ss[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         ss[i] = ss[i - 1] + a[i];
//     }

//     // Preprocess positions of 'L' and 'R'
//     vector<int> lefts, rights;
//     for (int i = 0; i < n; i++)
//     {
//         if (c[i] == 'L')
//             lefts.push_back(i);
//         if (c[i] == 'R')
//             rights.push_back(i);
//     }

//     // If no valid 'L' or 'R'
//     if (lefts.empty() || rights.empty())
//     {
//         cout << 0 << endl;
//         return;
//     }

//     ll sum = 0;
//     int l = 0, r = (int)rights.size() - 1;

//     // Two-pointer approach
//     while (l < lefts.size() && r >= 0 && lefts[l] < rights[r])
//     {
//         int low = lefts[l];
//         int high = rights[r];
//         sum += ss[high] - (low > 0 ? ss[low - 1] : 0);
//         l++;
//         r--;
//     }

//     cout << sum << endl;
// }

int main()
{
    fast_io();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
