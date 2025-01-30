#include <iostream>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int a = (x - x % k) / k + 1;
        int b = (y - y % k) / k + 1;
        int c = max(a, b) - min(a, b);
        cout << a + b + c;
        cout << endl;
    }
    return 0;
}
