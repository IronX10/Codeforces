#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int MOD = 1e9 + 7;
const int INF = 1000000;

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
    int n, x;
    cin >> n >> x;
    vi a(n);
    int freq[n + 1] = {0};
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        if (i < 0)
        {
            i == 0;
        }

        if (freq[i] == 0)
        {
            cout << i << endl;
            return;
        }

        if (freq[i] > 1)
        {
            freq[i]--;
            freq[i + x]++;
            i -= 1;
        }
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

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;

// const int MOD = 1e9 + 7;
// #define all(x) (x).begin(), (x).end()
// #define pb push_back
// #define fast_io()            \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0)

// void solve()
// {
//     int n, x;
//     cin >> n >> x;
//     vi a(n);
//     unordered_map<int, int> freq; // Frequency map for dynamic range

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         freq[a[i]]++;
//     }

//     // Find the smallest missing number
//     for (int i = 0; i <= 1e6; i++)
//     {
//         if (freq[i] == 0) // Smallest missing number
//         {
//             cout << i << endl;
//             return;
//         }

//         if (freq[i] > 1) // Redistribute excess occurrences
//         {
//             int excess = freq[i] - 1;
//             freq[i] = 1;
//             freq[i + x] += excess;
//         }
//     }
// }

// int main()
// {
//     fast_io();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
