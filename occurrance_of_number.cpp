#include <iostream>
using namespace std;

int countOccurrence(int arr[], int n, int key) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {4, 2, 7, 2, 9, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int result = countOccurrence(arr, n, key);

    cout << "Occurrence of " << key << " is: " << result;

    return 0;
}