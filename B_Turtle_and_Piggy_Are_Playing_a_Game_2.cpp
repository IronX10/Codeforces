#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int> &arr, int n, int i)
{
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // Left child
    int right = 2 * i + 2; // Right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}

// Main function to perform heap sort
void heapSort(vector<int> &arr, int n)
{
    // Build a max-heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract elements from the heap
    for (int i = n - 1; i >= 0; i--)
    {
        // Move current root (largest) to the end
        swap(arr[0], arr[i]);

        // Heapify the reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &t : a)
        {
            cin >> t;
        }

        heapSort(a, n);

        if (n % 2 == 1)
            cout << a[(n + 1) / 2 - 1];

        else
            cout << a[n / 2];

        cout << endl;
    }
    return 0;
}
