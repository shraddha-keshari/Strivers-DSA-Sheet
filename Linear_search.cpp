#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    Solution sol;
    cout << sol.linearSearch(arr, target) << endl;
    return 0;
}