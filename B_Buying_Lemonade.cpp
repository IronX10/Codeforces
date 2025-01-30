// #include <bits/stdc++.h>
// using namespace std;

// void bubbleSort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         bool swapped = false;
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // Swap arr[j] and arr[j + 1]
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         // If no two elements were swapped in the inner loop, the array is sorted
//         if (!swapped)
//             break;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         bubbleSort(a);

//         if (k <= a[0] * n)
//         {
//             cout << k << endl;
//         }
//         else
//         {
//             int count = 0;
//             int cans = 0;
//             while (cans < k)
//             {

//                 for (int i = 0; i < n; i++)
//                 {

//                     if (a[i] == -1)
//                     {
//                         continue;
//                     }
//                     else
//                     {
//                         if (cans == k)
//                         {
//                             break;
//                         }

//                         if (a[i] > 0)
//                         {
//                             cans++;
//                         }

//                         a[i]--;
//                         count++;
//                     }
//                 }
//             }
//             cout << count
//                  << endl;
//         }
//     }
//     return 0;
// }
