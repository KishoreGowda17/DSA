#include <iostream>
#include <vector>

using namespace std;

int vectorLinearSearch(vector<int> vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (target == vec[i])
        {
            return i;
        }
    }
    return -1;
}

void reverseTheVector(vector<int>& nums)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    // cout<<vectorLinearSearch(vec,71);
    reverseTheVector(vec);
    cout<<"Vector after reverse : "<<endl;
    for(int i : vec){
        cout<<i<<" ";
    }
}
