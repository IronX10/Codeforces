#include <bits/stdc++.h>
using namespace std;

int check(int n, vector<int> arr, int k)
{
    int A = 0;
    int B = 0;
    sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    while (n > 0)
    {
        n--;
        A = A + arr[n];
        n--;
    }

    B = sum - A;
    if (A - B - k < 0)
        return 0;
    else
        return A - B - k;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        cout << check(n, array, k);

        cout << endl;
    }
    return 0;
}
