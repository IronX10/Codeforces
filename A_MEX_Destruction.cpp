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
    int n, l = -1, r = -1;
    cin >> n;
    vi a(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] != 0)
        {
            r = i;
            break;
        }
    }
    if (l == -1 && r == -1)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = l; i < r; i++)
    {
        if (a[i] == 0)
        {
            count++;
        }
    }

    cout << ((bool)count ? 2 : 1) << endl;
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
