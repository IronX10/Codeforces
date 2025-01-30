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
    int n, m, q;
    cin >> n >> m >> q;
    vi am(m);
    vi aq(q);
    input_vector(am);
    input_vector(aq);
    sort(am.begin(), am.end());
    sort(aq.begin(), aq.end());
    int i = 0;
    while (q--)
    {

        if (aq[i] > am[m - 1])
        {
            cout << n - am[m - 1] << endl;
            i++;
            continue;
        }
        if (aq[i] < am[0])
        {
            cout << am[0] - 1 << endl;
            i++;
            continue;
        }
        else
        {
            for (int j = 0; j < m - 1; j++)
            {
                if (am[j] < aq[i] && aq[i] < am[j + 1])
                {
                    int mid = (am[j + 1] - am[j]) / 2;
                    cout << mid << endl;
                    break;
                }
            }
        }
        i++;
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
