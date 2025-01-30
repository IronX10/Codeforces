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

ll power(ll n, ll k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;

    while (k > 0)
    {

        if (k % 2 == 1)
        {
            n *= n;
            k--;
        }
        else
        {
            n = n * n;
            k = k / 2;
        }
    }
    return n;
}

template <typename T>
void input_vector(vector<T> &v)
{
    for (T &x : v)
        cin >> x;
}

void solve()
{
    ll n;
    cin >> n;
    ll cnt = 1;
    if (n < 4)
    {
        cout << cnt << endl;
        return;
    }

    while (n > 3)
    {
        cnt = cnt * 2;
        n = n / 4;
    }
    cout << cnt << endl;
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
