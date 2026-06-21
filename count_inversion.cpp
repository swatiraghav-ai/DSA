int cnt =0; // global variable

// Function to merge two sorted halves
void merge(int arr[], int low, int mid, int high)
{
    int temp[high - low + 1]; // Temporary array
    int left = low;           // Starting index of left half
    int right = mid + 1;      // Starting index of right half
    int k = 0;                // Index for temp array

    // Compare elements from both halves
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp[k] = arr[left];
            left++;
        }
        else
        {
            temp[k] = arr[right];
            cnt += (mid-left +1);
            right++;
        }
        k++;
    }

    // Copy remaining elements of left half
    while (left <= mid)
    {
        temp[k] = arr[left];
        left++;
        k++;
    }

    // Copy remaining elements of right half
    while (right <= high)
    {
        temp[k] = arr[right];
        right++;
        k++;
    }

    // Copy temp array back to original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// Merge Sort function
void mergeSort(int arr[], int low, int high)
{
    // Base case
    if (low >= high)
        return;

    // Find middle element
    int mid = (low + high) / 2;

    // Sort left half
    mergeSort(arr, low, mid);

    // Sort right half
    mergeSort(arr, mid + 1, high);

    // Merge the sorted halves
    merge(arr, low, mid, high);
}


// Main function
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    cout<<"enter array element";
    for (int i=0;i<n;i++){
         cin>>arr[i];
    }
    mergeSort(arr, 0, n - 1);
cout <<cnt;

    return 0;
}