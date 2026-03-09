#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        int i = 0;
        for(int j = 1; j<nums.size(); j++) {
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
        
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
    // print _ _ in place of removed elements
    int newLength = sol.removeDuplicates(nums);
    cout << "New length of the array after removing duplicates: \n" << newLength << endl;
    cout << "Array after removing duplicates: \n";
    for(int i=0; i<newLength; i++) {
        cout << nums[i] << " ";
    }
    for(int i=newLength; i<nums.size(); i++) {
        cout << "_ ";
    }
    cout << endl;
}