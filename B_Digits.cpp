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

ll factorial(ll n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}
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
    ll n, d;
    cin >> n >> d;
    ll sum = d * factorial(n);
    cout << 1 << " ";
    if ()
    {
        cout << 3 << " ";
    }
    if (d == 5)
    {
        cout << 5 << " ";
    }
    if (1)
    {
        cout << 7 << " ";
    }
    if (sum % 9 == 0)
    {
        cout << 9 << " ";
    }

    cout << endl;
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
