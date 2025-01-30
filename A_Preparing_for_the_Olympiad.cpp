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
    vi a(n);
    input_vector(a);
    vi b(n);
    input_vector(b);
    int sum = a[n - 1];

    for (int i = 0,j = 1; i < n - 1; i++,j++)
    {
        if ((a[i] - b[j]) > 0)
        {
            sum += a[i] - b[j];
        }
    }
    cout << sum << endl;
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
