#include <iostream>
#include <vector>
using namespace std;

void divideArray(vector<int>& arr) {
    int totalSum = 0;
    
    // calculate total sum
    for(int num : arr) {
        totalSum += num;
    }

    // if sum is odd, not possible
    if(totalSum % 2 != 0) {
        cout << "Not possible to divide array into equal sum subarrays";
        return;
    }

    int target = totalSum / 2;
    int prefixSum = 0;

    for(int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        if(prefixSum == target) {
            cout << "First subarray: ";
            for(int j = 0; j <= i; j++)
                cout << arr[j] << " ";

            cout << "\nSecond subarray: ";
            for(int j = i + 1; j < arr.size(); j++)
                cout << arr[j] << " ";

            return;
        }
    }

    cout << "Not possible";
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    divideArray(arr);

    return 0;
}