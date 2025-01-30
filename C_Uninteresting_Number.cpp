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
    string s;
    cin >> s;
    int sum = 0;
    int c2 = 0;
    int c3 = 0;

    for (int i = 0; i < s.length(); i++)
    {
        int g = s[i] - '0';
        sum += g;
        if (g == 2)
        {
            c2++;
        }
        if (g == 3)
        {
            c3++;
        }
    }

    int f = 8;
    for (int i = 0; i <= min(c2, f); i++)
    {
        for (int j = 0; j <= min(c3, f); j++)
        {
            int l = (sum + 2 * i + 6 * j);
            if (l % 9 == 0)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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
