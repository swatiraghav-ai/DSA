#include <iostream>
using namespace std;

void pairDifference(int arr[], int n, int k)
{
    int i = 0, j = 1;

    while (i < n && j < n)
    {
        if (i != j && arr[j] - arr[i] == k)
        {
            cout << "Pair: " << arr[i] << " , " << arr[j];
            return;
        }
        else if (arr[j] - arr[i] < k)
            j++;
        else
            i++;
    }

    cout << "No pair found";
}

int main()
{
    int arr[] = {1, 3, 5, 8, 12};
    int n = 5;
    int k = 7;

    pairDifference(arr, n, k);

    return 0;
}