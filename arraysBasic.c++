#include <iostream>
using namespace std;

void sumAndProductOfArr(int arr[], int sz)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "The Sum of all numbers in an array " << sum << endl;
    cout << "The Product of all numbers in an array " << product;
}
void swapMaxMin(int arr[], int sz)
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int largestIndex, smallestIndex;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    swap(arr[smallestIndex], arr[largestIndex]);
}

void findUniqueValues(int arr[], int sz)
{

    for (int i = 0; i < sz; i++)
    {
        int count = 0;
        for (int j = 0; j < sz; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}

void findIntersection(int arr1[], int arr2[], int sz1, int sz2)
{
    printf("Intersection elements: ");
    for (int i = 0; i < sz1; i++)
    {
        for (int j = 0; j < sz2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break; // Avoid printing duplicates from arr2
            }
        }
    }
    printf("\n");
}
int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {6, 7, 3, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    findIntersection(arr1, arr2, size1, size2);

    return 0;
}
