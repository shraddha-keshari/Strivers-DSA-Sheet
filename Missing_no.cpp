#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // int expectedSum = (n * (n + 1)) / 2;

        // int actualSum = 0;
        // for(int num : nums){
        //     actualSum += num;
        // }

        // return expectedSum - actualSum;

        int xorSum = 0;
        for(int i=0; i<=n; i++) {
            xorSum = xorSum ^ i;
        }

        for(int num : nums){
            xorSum = xorSum ^ num;
        }

        return xorSum;
    }
};

int main(){
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    cout << "Missing No.: " << sol.missingNumber(arr) << endl;
    return 0;
}