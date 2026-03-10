#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    int search(vector<int> &nums, int target){
        int n = nums.size();
        int low = 0, high = n - 1; 
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;

            //check if left part is sorted
            if(nums[mid] >= nums[low]){
                if(target >= nums[low] && target < nums[mid]){
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }

            //check if right part is sorted
            else {
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1;
        
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

    cout << sol.search(arr, target) << endl;
    return 0;
}