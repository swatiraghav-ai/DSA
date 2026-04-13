  // longest subarray with sum k (for non-negative values by sliding window, no vector)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    cout << "enter array element ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int k;
    cout << "enter k: ";
    cin >> k;

    int i = 0, j = 0;
    int sum = 0;
    int length = 0;

    while (j < n) {
        sum += arr[j];

        if ( sum > k) {
            sum -= arr[i];
            i++;
        }

        if (sum == k) {
            length = max(length, j - i + 1);
        }

        j++;
    }

    cout << "longest subarray length with sum " << k << " is " << length << endl;
    return 0;
}


