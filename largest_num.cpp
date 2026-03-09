#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
        return largest;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    Solution sol;
    cout << "Largest element is : " << sol.largestElement(arr) << endl;

    return 0;
}