#include<iostream>
#include<vector>

using namespace std;

int getLongestSubarray(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];

        // If sum is exactly k, update maxLen
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // Calculate the needed prefix sum
        long long rem = sum - k;

        // If rem exists in map, update maxLen
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Store the sum in map if it's not already present
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << getLongestSubarray(arr, k) << endl;
    return 0;
}
