#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
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
    ll n;
    cin >> n;
    vi a(3);
    input_vector(a);

    ll sum = a[0] + a[1] + a[2];
    ll cnt = (n / sum);
    ll days = cnt * 3;
    ll rem_dis = n - sum * cnt;
    int i = 0;

    while (rem_dis > 0)
    {
        rem_dis -= a[i % 3];
        i++;
        days++;
    }
    cout << days << endl;
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
