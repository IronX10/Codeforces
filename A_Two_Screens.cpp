#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, mx, mn;
        cin >> a >> b;

        // Determine which string is longer
        if (a.length() >= b.length())
        {
            mx = a;
            mn = b;
        }
        else
        {
            mx = b;
            mn = a;
        }

        // Initialize the answer as the sum of lengths
        int ans = a.length() + b.length();
        int g = 0;

        // Find the first occurrence of mn in mx
        size_t c = mx.find(mn);

        // If the substring is found, count all its occurrences
        if (c != string::npos)
        {
            int count = 0;
            // Loop to count all occurrences of mn in mx
            while (c != string::npos)
            {
                count++;
                // Start the next search just after the last occurrence
                c = mx.find(mn, c + mn.length());
            }

            // Adjust g based on the count of occurrences
            g = count * (mn.length() - 1); // Corrected logic here
        }

        // Subtract g from ans
        ans = ans - g;

        cout << ans << endl;
    }

    return 0;
}
