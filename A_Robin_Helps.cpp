#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int help = 0;
        int gold = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= k)
            {
                gold += arr[i];
            }
            if (arr[i] == 0 && gold > 0)
            {
                gold--;
                help++;
            }
        }
        cout << help;

        cout << endl;
    }
    return 0;
}
