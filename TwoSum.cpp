#include<iostream>
#include<vector>

using namespace std; 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j] == target){
                    return {i, j};
                }
            }
        } 
        return {}; 
    }
};

int main() {
    int n, k;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> k;

    Solution sol;
    vector<int> result = sol.twoSum(arr, k);

    if(!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;

}

