// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pii;

// const int MOD = 1e9 + 7;
// const int INF = INT_MAX;

// #define all(x) (x).begin(), (x).end()
// #define pb push_back
// #define ff first
// #define ss second
// #define fast_io() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// template <typename T> void print_vector(const vector<T>& v) {
//     for (const T& x : v) cout << x << ' ';
//     cout << '\n';
// }

// template <typename T> void input_vector(vector<T>& v) {
//     for (T& x : v) cin >> x;
// }

// void solve() {
//     int n;
//     long long x, y;
//     cin >> n >> x >> y;

//     vector<long long> a(n);
//     long long total_sum = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//         total_sum += a[i];
//     }

//     long long min_sum = total_sum - y;
//     long long max_sum = total_sum - x;

//     sort(a.begin(), a.end());

//     long long count = 0;

//     for (int i = 0; i < n; ++i)
//     {
//         long long required_min = min_sum - a[i];
//         long long required_max = max_sum - a[i];

//         int left = lower_bound(a.begin() + i + 1, a.end(), required_min) - a.begin();
//         int right = upper_bound(a.begin() + i + 1, a.end(), required_max) - a.begin();

//         count += (right - left);
//     }

//     cout << count << endl;
// }

// int main() {
//     fast_io();

//     int t = 1;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

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
    ll n, x, y;
    cin >> n >> x >> y;
    vi a(n);
    ll sum = 0;
    ll count = 0;
    int min = INT64_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {

        if ((sum - a[i] < x) || (sum - a[i] - min < x))
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            ll rem = sum - a[i] - a[j];
            if (rem >= x && rem <= y)
            {
                count++;
            }
        }
    }
    cout << count << endl;
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
