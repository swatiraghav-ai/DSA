#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = -1, count = 0;

    // Step 1: Find candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }

        if (num == candidate)
            count++;
        else
            count--;
    }

    // Step 2: Verify candidate (optional but safe)
    count = 0;
    for (int num : nums) {
        if (num == candidate)
            count++;
    }

    if (count > nums.size() / 2)
        return candidate;

    return -1; // No majority element
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2};

    int result = majorityElement(nums);

    if (result != -1)
        cout << "Majority Element: " << result;
    else
        cout << "No Majority Element";

    return 0;
}