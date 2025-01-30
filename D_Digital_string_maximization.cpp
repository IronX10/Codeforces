// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int i = 1;
//         string p = s;
//         string f = " ";
//         while (p != f)
//         {
//             p = s;
//             i = 1;
//             for (; i < s.length(); i++)
//             {
//                 int a = s[i - 1] - '0';
//                 int b = s[i] - '0';
//                 int e = b - 1;
//                 if (b - 1 > a)
//                 {
//                     char c = '0' + a;
//                     char d = '0' + e;
//                     s[i] = c;
//                     s[i - 1] = d;
//                     break;
//                 }
//             }
//             f = s;
//         }
//         cout << s;
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] < s[i + 1] - 1)
            {
                swap(s[i], s[i + 1]);
                s[i]--;
                if (i >= 1)
                {
                    i -= 2;
                }
            }
        }

        cout << s << endl;
    }
    return 0;
}
