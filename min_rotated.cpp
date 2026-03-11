#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;

class Solution{
    public:
    int findMin(vector<int>& nums){
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[low] <= nums[high]){
                ans = min(ans, nums[low]);
                break;

            }
            if(nums[low] <= nums[mid]){
                ans = min(ans, nums[low]);
                low = mid + 1;
            }
            else {
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }

        }
        return ans;
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

    cout << "Minimum is: " << sol.findMin(arr) << endl;
    return 0;
}