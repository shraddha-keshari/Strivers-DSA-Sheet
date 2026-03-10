#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool searchInARotatedSortedArrayII(vector<int> &nums, int k)  {
        int n = nums.size();
        int low = 0, high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == k) return true;
            if(nums[mid] >= nums[low]){
                if(k >= nums[low] && k < nums[mid]){
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else {
                if(k <= nums[high] && k > nums[mid]){
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return false;
      
    }
};

int main(){
    Solution sol;
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;

    cout << boolalpha << sol.searchInARotatedSortedArrayII(arr, target) << endl;
    return 0;
}