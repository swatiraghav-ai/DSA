#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    
    // Step 1: Sort the array
    sort(nums.begin(), nums.end());
    
    int n = nums.size();
    
    // Step 2: Fix first element
    for(int i = 0; i < n - 2; i++) {
        
        // Skip duplicate elements
        if(i > 0 && nums[i] == nums[i-1])
            continue;
        
        int left = i + 1;
        int right = n - 1;
        
        // Step 3: Two pointer
        while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if(sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                
                // Skip duplicates
                while(left < right && nums[left] == nums[left+1])
                    left++;
                
                while(left < right && nums[right] == nums[right-1])
                    right--;
                
                left++;
                right--;
            }
            else if(sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    
    vector<vector<int>> ans = threeSum(nums);
    
    cout << "Triplets are:\n";
    for(auto triplet : ans) {
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
    }
    
    return 0;
}