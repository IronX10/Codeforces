#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
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
    ll n, x1, y1, x2, y2;
    cin >> n;
    vector<pair<ll, ll>> pts(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pts[i].first >> pts[i].second;
    }

    cin >> x1 >> y1 >> x2 >> y2;

    ll dis = ((ll)((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));

    for (int i = 0; i < n; i++)
    {
        ll d = ((ll)((pts[i].first - x2) * (pts[i].first - x2) + (pts[i].second - y2) * (pts[i].second - y2)));
        if (d <= dis)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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

