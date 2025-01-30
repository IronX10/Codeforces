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
    string s;
    cin >> s;
    bool found_p = false;
    bool found_s = false;
    if (s[0] == 's')
        s[0] = '.';

    if (s[n - 1] == 'p')
        s[n - 1] = '.';

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 's')
        {
            found_s = true;
        }
        if (s[i] == 'p')
        {
            found_p = true;
        }
    }

    cout << (found_p && found_s ? "NO" : "YES") << endl;
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
