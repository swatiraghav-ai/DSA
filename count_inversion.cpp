#include <iostream>
using namespace std;
int cnt=0;
// Merge function
void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1], right[n2];

    // Copy data
    for (int i = 0; i < n1; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = low;

    // Merge two sorted arrays
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            cnt+=(n1 -i);
            j++;
        }
        k++;
    }

    // Remaining elements
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

// Main function
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