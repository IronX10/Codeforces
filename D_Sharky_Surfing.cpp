#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, L;
        cin >> n >> m >> L;
        vector<int> l(n);
        vector<int> r(n);
        for (int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }
        vector<int> x(n);
        vector<int> p(n);

        for (int i = 0; i < m; i++)
        {
            cin >> x[i] >> p[i];
        }


        

        cout << endl;
    }
    return 0;
}
