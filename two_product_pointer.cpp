#include <iostream>
using namespace std;

bool twoProduct(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        long long product = 1LL * arr[left] * arr[right];

        if (product == target) {
            cout << "Pair found: " << arr[left] << " and " << arr[right] << endl;
            return true;
        }
        else if (product < target) {
            left++;   // increase product
        }
        else {
            right--;  // decrease product
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    if (!twoProduct(arr, n, target)) {
        cout << "No pair found";
    }

    return 0;
}