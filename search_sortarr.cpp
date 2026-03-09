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
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] > target){
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            return -1;
        }

};

int main(){
    int n, k;
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
    cout << "Target is present at: " << sol.search(arr, k) << endl;
    return 0;
    
}