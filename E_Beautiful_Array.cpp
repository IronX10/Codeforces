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
    int a, b;
    cin >> a >> b;
    
    int x = 1000000;
    double rem = ((double)(3 * a - b)) / 2.0;
    cout << 3 << endl;
    cout << -x + 400 + (int)floor(rem) << " " << (int)b << " " << x - 400 + (int)ceil(rem) << endl;
}

int main()
{
    fast_io();

     solve();
    return 0;
}
