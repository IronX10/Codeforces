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
    ll a = 0, b, c, d, pos = 1, bit_b, bit_c, bit_d, mask = 1;
    cin >> b >> c >> d;
    for (ll i = 0; i < 62; i++)
    {
        if (b & mask)
            bit_b = 1;
        else
            bit_b = 0;
        if (c & mask)
            bit_c = 1;
        else
            bit_c = 0;
        if (d & mask)
            bit_d = 1;
        else
            bit_d = 0;
        if ((bit_b && (!bit_c) && (!bit_d)) || ((!bit_b) && bit_c && bit_d))
        {
            pos = 0;
            break;
        }
        if (bit_b && bit_c)
        {
            a += (1ll - bit_d) * mask;
        }
        else
        {
            a += bit_d * mask;
        }
        mask <<= 1;
    }
    if (pos)
    {
        cout << a << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

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
