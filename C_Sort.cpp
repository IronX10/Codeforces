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

int countCommonCharacters(const string &str1, const string &str2)
{
    // Create frequency maps for both strings
    unordered_map<char, int> freq1, freq2;

    // Count frequencies in str1
    for (char ch : str1)
        freq1[ch]++;

    // Count frequencies in str2
    for (char ch : str2)
        freq2[ch]++;

    // Count common characters by summing minimum frequencies
    int count = 0;
    for (auto &entry : freq1)
    {
        if (freq2.count(entry.first))
        {
            count += min(entry.second, freq2[entry.first]);
        }
    }
    return count;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    string str1, str2;
    cin >> str1 >> str2;

    vector<pii> pa(k);
    for (int i = 0; i < k; i++)
    {
        cin >> pa[i].first >> pa[i].second;
    }

    for (int j = 0; j < k; j++)
    {
        string a = str1.substr(pa[j].first - 1, pa[j].second - pa[j].first + 1);
        string b = str2.substr(pa[j].first - 1, pa[j].second - pa[j].first + 1);

        int common = countCommonCharacters(a, b);
        cout << (pa[j].second - pa[j].first + 1 - common) << endl;
    }
}

int main()
{
    fast_io();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
