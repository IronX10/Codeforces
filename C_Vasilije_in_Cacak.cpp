#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long max = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;

        long long min = k * (k + 1) / 2;

        if (min <= x && x <= max)
        {
            cout << "YES";
        }
        else
            cout << "NO";

        cout << endl;
    }
    return 0;
}