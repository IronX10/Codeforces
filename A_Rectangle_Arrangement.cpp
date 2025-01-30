#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int max_width = 0;
        int max_height = 0;
        for (int i = 0; i < n; i++)
        {
            int w, h;
            cin >> w >> h;
            if (w > max_width)
            {
                max_width = w;
            }
            if (h > max_height)
            {
                max_height = h;
            }
        }
        cout << 2 * (max_height + max_width);

        cout << endl;
    }
    return 0;
}
