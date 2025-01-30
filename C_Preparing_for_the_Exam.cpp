#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

#define all(x) (x).begin(), (x).end()
#define VECTOR_SUM(v) accumulate((v).begin(), (v).end(), 0LL)
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
    ll n, m, k;
    cin >> n >> m >> k;
    vi a(m);
    input_vector(a);
    vi b(k);
    input_vector(b);
    ll sumn = (n * (n + 1)) / 2;
    ll sumk = VECTOR_SUM(b);

    if (n == k)
    {
        for (ll i = 0; i < m; i++)
        {
            cout << 1;
        }
        cout << endl;
        return;
    }

    if (n - k == 1)
    {
        for (ll i = 0; i < m; i++)
        {
            if (sumn - sumk - a[i] == 0)
            {
                cout << 1;
            }
            else
                cout << 0;
        }

        cout << endl;
    }

    else
    {
        for (int i = 0; i < m; i++)
        {
            cout << 0;
        }
        cout << endl;
        return;
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
