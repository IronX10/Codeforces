#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long
    int cnt[150000], ans[100001];
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    ans[1] = cnt[1];
    for (int i = 2; i < 100001; i++)
    {
        ans[i] = max(ans[i - 1], i * cnt[i] + ans[i - 2]);
    }
    cout << ans[100000];

    return 0;
}
