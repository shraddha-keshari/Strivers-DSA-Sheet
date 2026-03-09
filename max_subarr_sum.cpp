#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's algorithm
        int maxSum = INT_MIN;
        int currSum = 0;
        
        for(int x : nums){
            currSum += x;
            maxSum = max(currSum, maxSum);

            if(currSum < 0) currSum = 0;
        }

        return maxSum;
        
    }

};

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    Solution sol;
    cout << "Maximum subarray sum: " << sol.maxSubArray(arr) << endl;
    return 0;
}