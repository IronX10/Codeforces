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
        vector<double> a(n);
        double oddsum = 0;
        double evensum = 0;
        double ec = 0;
        double oc = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 1)
            {
                evensum += a[i];
                ec++;
            }
            else
            {
                oddsum += a[i];
                oc++;
            }
        }

        if (evensum / ec == floor(evensum / ec) && oddsum / oc == floor(oddsum / oc))
        {

            int e = n / 2;

            if (evensum / e == oddsum / (n - e))
            {
                cout << "YES";
            }
            else
                cout << "NO";

            cout << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
