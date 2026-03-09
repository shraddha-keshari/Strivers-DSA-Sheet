#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
    public:
    void sortColors(vector<int>& nums){
    //   sort(nums.begin(), nums.end());  //TC - O(nlogn)
    int low = 0, mid = 0, high = nums.size() - 1; //TC - O(n)

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
    
    }
};

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    sol.sortColors(nums);
    cout << "Sorted colors are: ";
    for(int x : nums){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}