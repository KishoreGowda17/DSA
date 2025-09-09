#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        bool swapped = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Optimization
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bubble_sort(arr, n);

    for (int x : arr)
        cout << x << " ";

    return 0;
}
