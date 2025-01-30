// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         int max = 0;
//         int index = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             if (arr[i] > max)
//             {
//                 max = arr[i];
//                 index = i + 1;
//             }
//             if (arr[i] == max && i % 2 == 0)
//             {
//                 index = i + 1;
//             }
//         }

//         if (n % 2 == 0)
//         {
//             cout << max + n / 2;
//         }
//         else
//         {
//             if (index % 2 == 1)
//             {
//                 cout << max + n / 2 + 1;
//             }
//             else
//                 cout << max + n / 2;
//         }

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
        int n;
        cin >> n;
        int arr[n];
        int max = INT_MIN;
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
                index = i + 1;
            }
            if (arr[i] == max && i % 2 == 0)
            {
                index = i + 1;
            }
        }
        if (n == 1)
        {
            cout << 1 + arr[0];
        }

        else if (n != 1 && n % 2 == 1)
            cout << (max + (n / 2) + (index) % 2);

        else
            cout << (max + (n / 2));

        cout << endl;
    }
    return 0;
}
