#include <iostream>
using namespace std;

void segregate(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        // move left pointer if element is 0
        while (arr[left] == 0 && left < right)
            left++;

        // move right pointer if element is 1
        while (arr[right] == 1 && left < right)
            right--;

        // swap if left is 1 and right is 0
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregate(arr, n);

    cout << "Segregated array:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}