#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        for(int j=0; j<k; j++){
        int temp = nums[0];
        for(int i=1; i<n; i++){
            nums[i-1] = nums[i];
        }
        nums[n-1] = temp;

        }
    }
};

int main() {
    Solution sol;
    int n,k;
    cout << "Enter the size of the array: \n";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the number of places to be rotated: \n";
    cin >> k;
    cout << "Enter the elements of the array: \n";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }
    sol.rotateArray(nums, k);
    cout << "Array after left rotation by one position: \n";
    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
} 