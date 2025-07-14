#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    // Loop to generate all subarrays
    for (int start = 0; start < n; ++start)
    {
        for (int end = start; end < n; ++end)
        {
            // Print the subarray from start to end
            for (int i = start; i <= end; ++i)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    int PSA = n * (n + 1) / 2;
    cout << "Possible SubArrays = " << PSA;

    return 0;
}
