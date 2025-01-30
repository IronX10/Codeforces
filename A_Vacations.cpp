#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1); // Activity array, 1-indexed
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    int d[n + 1][3] = {0}; // DP table

    for (int i = 1; i <= n; ++i)
    {
        // Rest state
        d[i][0] = max({d[i - 1][0], d[i - 1][1], d[i - 1][2]});

        // Contest state
        if (a[i] == 1 || a[i] == 3)
        {
            d[i][1] = max(d[i - 1][0] + 1, d[i - 1][2] + 1);
        }

        // Gym state
        if (a[i] == 2 || a[i] == 3)
        {
            d[i][2] = max(d[i - 1][0] + 1, d[i - 1][1] + 1);
        }
    }

    // Maximum days without rest
    int max_not_rest = max({d[n][0], d[n][1], d[n][2]});

    // Output the minimum rest days
    cout << n - max_not_rest << endl;

    return 0;
}
