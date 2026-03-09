#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestSubarrayWithSumK(vector<int>& nums, int k) {
        unordered_map<long long, int> prefixSumMap;
        long long currentSum = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            // Case 1: The entire array from index 0 to i sums to k
            if (currentSum == k) {
                maxLen = i + 1;
            }

            // Case 2: Check if (currentSum - k) exists in the map
            long long remaining = currentSum - k;
            if (prefixSumMap.find(remaining) != prefixSumMap.end()) {
                int len = i - prefixSumMap[remaining];
                maxLen = max(maxLen, len);
            }

            // Case 3: Only store the sum if it's not already in the map
            // This ensures we keep the earliest (leftmost) index for the longest length
            if (prefixSumMap.find(currentSum) == prefixSumMap.end()) {
                prefixSumMap[currentSum] = i;
            }
        }

        return maxLen;
    }
};

int main() {
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    
    Solution sol;
    cout << "Length of longest subarray: " << sol.longestSubarrayWithSumK(nums, k) << endl;
    
    return 0;
}