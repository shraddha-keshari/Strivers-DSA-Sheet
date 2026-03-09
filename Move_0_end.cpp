#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int lastNonZeroIndex = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0) {
                nums[lastNonZeroIndex] = nums[i];
                lastNonZeroIndex++;
            }
        }
        for(int j=lastNonZeroIndex; j<n; j++){
            nums[j] = 0;
        }
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter the size of the array: \n";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: \n";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    sol.moveZeroes(nums);
    cout << "Array after moving zeroes to end: \n";
    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
} 