#include<iostream>
#include<vector> 

using namespace std;

class Solution {
    public:
    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        int low = 0, high = n - 1, ans = n;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }

};

int main() {
    int n ,k;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter the target: ";
    cin >> k;
    Solution sol;
    cout << sol.lowerBound(arr, k) << endl;
    return 0;
}